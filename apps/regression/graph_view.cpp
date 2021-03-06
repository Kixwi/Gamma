#include "graph_view.h"
#include "model/model.h"
#include <apps/apps_container.h>
#include <poincare/context.h>
#include <assert.h>

using namespace Shared;

namespace Regression {

GraphView::GraphView(Store * store, CurveViewCursor * cursor, BannerView * bannerView, Shared::CursorView * cursorView) :
  CurveView(store, cursor, bannerView, cursorView),
  m_store(store),
  m_xLabels{},
  m_yLabels{}
{
}

void GraphView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(rect, Palette::BackgroundHard);
  drawGrid(ctx, rect);
  drawAxes(ctx, rect);
  simpleDrawBothAxesLabels(ctx, rect);
  Poincare::Context * globContext = AppsContainer::sharedAppsContainer()->globalContext();
  for (int series = 0; series < Store::k_numberOfSeries; series++) {
    if (!m_store->seriesIsEmpty(series)) {
      KDColor color = Palette::DataColor[series];
      Model * seriesModel = m_store->modelForSeries(series);
      drawCartesianCurve(ctx, rect, -INFINITY, INFINITY, [](float abscissa, void * model, void * context) {
          Model * regressionModel = static_cast<Model *>(model);
          double * regressionCoefficients = static_cast<double *>(context);
          return Poincare::Coordinate2D<float>(abscissa, (float)regressionModel->evaluate(regressionCoefficients, abscissa));
          },
          seriesModel, m_store->coefficientsForSeries(series, globContext), color);
      for (int index = 0; index < m_store->numberOfPairsOfSeries(series); index++) {
        drawDot(ctx, rect, m_store->get(series, 0, index), m_store->get(series, 1, index), color);
      }
      drawDot(ctx, rect, m_store->meanOfColumn(series, 0), m_store->meanOfColumn(series, 1), color, true);
      drawDot(ctx, rect, m_store->meanOfColumn(series, 0), m_store->meanOfColumn(series, 1), Palette::BackgroundHard);
    }
  }
}

char * GraphView::label(Axis axis, int index) const {
  if (axis == Axis::Vertical) {
    assert(index < k_maxNumberOfXLabels);
    return (char *)m_yLabels[index];
  }
  assert(index < k_maxNumberOfYLabels);
  return (char *)m_xLabels[index];
}

}
