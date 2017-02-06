#ifndef SHARED_INTERACTIVE_CURVE_VIEW_DELEGATE_H
#define SHARED_INTERACTIVE_CURVE_VIEW_DELEGATE_H

namespace Shared {

class InteractiveCurveViewRange;

class InteractiveCurveViewRangeDelegate {
public:
  virtual bool didChangeRange(InteractiveCurveViewRange * interactiveCurveViewRange) = 0;
};

}

#endif
