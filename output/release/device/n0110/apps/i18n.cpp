#include "i18n.h"
#include <apps/global_preferences.h>
#include <assert.h>

namespace I18n {

constexpr static char universalDefault[] = {0};
constexpr static char universalA[] = "a";
constexpr static char universalAbsCommandWithArg[] = "abs(x)";
constexpr static char universalAcoshCommandWithArg[] = "acosh(x)";
constexpr static char universalAlmostEqual[] = "≈";
constexpr static char universalAlpha[] = "alpha";
constexpr static char universalArgCommandWithArg[] = "arg(z)";
constexpr static char universalAsinhCommandWithArg[] = "asinh(x)";
constexpr static char universalAtanhCommandWithArg[] = "atanh(x)";
constexpr static char universalAvogadro[] = "6.02214076·10^23";
constexpr static char universalB[] = "b";
constexpr static char universalBinomialCDFCommandWithArg[] = "binomcdf(m,n,p)";
constexpr static char universalBinomialCommandWithArg[] = "binomial(n,k)";
constexpr static char universalBinomialPDFCommandWithArg[] = "binompdf(m,n,p)";
constexpr static char universalBlankMessage[] = " ";
constexpr static char universalBoltzmann[] = "1.38064852·10^-23";
constexpr static char universalC[] = "c";
constexpr static char universalCapitalAlpha[] = "ALPHA";
constexpr static char universalCeilCommandWithArg[] = "ceil(x)";
constexpr static char universalCmathModule[] = "cmath";
constexpr static char universalCodeApp[] = "Python";
constexpr static char universalCodeAppCapital[] = "PYTHON";
constexpr static char universalConditionAnd[] = "and ";
constexpr static char universalConditionNot[] = "not ";
constexpr static char universalConditionOr[] = "or ";
constexpr static char universalConditionsMenu[] = "Conditions";
constexpr static char universalConfidenceCommandWithArg[] = "confidence(f,n)";
constexpr static char universalConjCommandWithArg[] = "conj(z)";
constexpr static char universalConsolePrompt[] = ">>> ";
constexpr static char universalCoshCommandWithArg[] = "cosh(x)";
constexpr static char universalCoulomb[] = "8.9875517887·10^9";
constexpr static char universalCubicRegressionFormula[] = " y=a·x^3+b·x^2+c·x+d ";
constexpr static char universalD[] = "d";
constexpr static char universalDamienNicolet[] = "Damien Nicolet ";
constexpr static char universalDannySimmons[] = "Danny Simmons ";
constexpr static char universalDash[] = "-";
constexpr static char universalDavid[] = "David ";
constexpr static char universalDeterminantCommandWithArg[] = "det(M)";
constexpr static char universalDiffCommand[] = "diff(\x11,x,\x11)";
constexpr static char universalDiffCommandWithArg[] = "diff(f(x),x,a)";
constexpr static char universalDimensionCommandWithArg[] = "dim(M)";
constexpr static char universalDiscreteLegend[] = "P(X=";
constexpr static char universalDiscriminantFormulaDegree2[] = "Δ=b^2-4ac";
constexpr static char universalE[] = "e";
constexpr static char universalElectronMass[] = "9.109383·10^-31";
constexpr static char universalElementAcMass[] = "227";
constexpr static char universalElementAgMass[] = "107.8682";
constexpr static char universalElementAlMass[] = "26.9815386";
constexpr static char universalElementAmMass[] = "241.06";
constexpr static char universalElementArMass[] = "39.948";
constexpr static char universalElementAsMass[] = "74.921595";
constexpr static char universalElementAtMass[] = "210";
constexpr static char universalElementAuMass[] = "196.966569";
constexpr static char universalElementBMass[] = "10.81";
constexpr static char universalElementBaMass[] = "137.327";
constexpr static char universalElementBeMass[] = "9.0121831";
constexpr static char universalElementBhMass[] = "270";
constexpr static char universalElementBiMass[] = "208.98040";
constexpr static char universalElementBkMass[] = "247";
constexpr static char universalElementBrMass[] = "79.904";
constexpr static char universalElementCMass[] = "12.01074";
constexpr static char universalElementCaMass[] = "40.078";
constexpr static char universalElementCdMass[] = "112.414";
constexpr static char universalElementCeMass[] = "140.116";
constexpr static char universalElementCfMass[] = "251";
constexpr static char universalElementClMass[] = "35.453";
constexpr static char universalElementCmMass[] = "247";
constexpr static char universalElementCnMass[] = "285";
constexpr static char universalElementCoMass[] = "58.933194";
constexpr static char universalElementCrMass[] = "51.9961";
constexpr static char universalElementCsMass[] = "132.90545196";
constexpr static char universalElementCuMass[] = "63.546";
constexpr static char universalElementDbMass[] = "268";
constexpr static char universalElementDsMass[] = "281";
constexpr static char universalElementDyMass[] = "162.500";
constexpr static char universalElementErMass[] = "167.259";
constexpr static char universalElementEsMass[] = "252";
constexpr static char universalElementEuMass[] = "151.964";
constexpr static char universalElementFMass[] = "18.998403163";
constexpr static char universalElementFeMass[] = "55.845";
constexpr static char universalElementFlMass[] = "289";
constexpr static char universalElementFmMass[] = "257";
constexpr static char universalElementFrMass[] = "223";
constexpr static char universalElementGaMass[] = "69.723";
constexpr static char universalElementGdMass[] = "157.25";
constexpr static char universalElementGeMass[] = "72.64";
constexpr static char universalElementHMass[] = "1.00794";
constexpr static char universalElementHeMass[] = "4.002602";
constexpr static char universalElementHfMass[] = "178.49";
constexpr static char universalElementHgMass[] = "200.59";
constexpr static char universalElementHoMass[] = "164.93033";
constexpr static char universalElementHsMass[] = "277";
constexpr static char universalElementIMass[] = "126.90447";
constexpr static char universalElementInMass[] = "114.818";
constexpr static char universalElementIrMass[] = "192.217";
constexpr static char universalElementKMass[] = "39.0983";
constexpr static char universalElementKrMass[] = "83.798";
constexpr static char universalElementLaMass[] = "138.90547";
constexpr static char universalElementLiMass[] = "6.941";
constexpr static char universalElementLrMass[] = "266";
constexpr static char universalElementLuMass[] = "174.9668";
constexpr static char universalElementLvMass[] = "293";
constexpr static char universalElementMcMass[] = "289";
constexpr static char universalElementMdMass[] = "258";
constexpr static char universalElementMgMass[] = "24.3050";
constexpr static char universalElementMnMass[] = "54.938044";
constexpr static char universalElementMoMass[] = "95.95";
constexpr static char universalElementMtMass[] = "278";
constexpr static char universalElementNMass[] = "14.0067";
constexpr static char universalElementNaMass[] = "22.98976928";
constexpr static char universalElementNbMass[] = "92.90637";
constexpr static char universalElementNdMass[] = "144.242";
constexpr static char universalElementNeMass[] = "20.1797";
constexpr static char universalElementNhMass[] = "286";
constexpr static char universalElementNiMass[] = "58.6934";
constexpr static char universalElementNoMass[] = "259";
constexpr static char universalElementNpMass[] = "237";
constexpr static char universalElementOMass[] = "15.9994";
constexpr static char universalElementOgMass[] = "294";
constexpr static char universalElementOsMass[] = "190.23";
constexpr static char universalElementPMass[] = "30.973761998";
constexpr static char universalElementPaMass[] = "231.03588";
constexpr static char universalElementPbMass[] = "207.2";
constexpr static char universalElementPdMass[] = "106.42";
constexpr static char universalElementPmMass[] = "145";
constexpr static char universalElementPoMass[] = "209";
constexpr static char universalElementPrMass[] = "140.90766";
constexpr static char universalElementPtMass[] = "195.084";
constexpr static char universalElementPuMass[] = "244.06";
constexpr static char universalElementRaMass[] = "226.0254";
constexpr static char universalElementRbMass[] = "85.4678";
constexpr static char universalElementReMass[] = "186.207";
constexpr static char universalElementRfMass[] = "267";
constexpr static char universalElementRgMass[] = "282";
constexpr static char universalElementRhMass[] = "102.90550";
constexpr static char universalElementRnMass[] = "222";
constexpr static char universalElementRuMass[] = "101.07";
constexpr static char universalElementSMass[] = "32.065";
constexpr static char universalElementSbMass[] = "121.760";
constexpr static char universalElementScMass[] = "44.955908";
constexpr static char universalElementSeMass[] = "78.971";
constexpr static char universalElementSgMass[] = "269";
constexpr static char universalElementSiMass[] = "28.0855";
constexpr static char universalElementSmMass[] = "150.36";
constexpr static char universalElementSnMass[] = "118.710";
constexpr static char universalElementSrMass[] = "87.62";
constexpr static char universalElementTaMass[] = "180.94788";
constexpr static char universalElementTbMass[] = "158.92534";
constexpr static char universalElementTcMass[] = "98";
constexpr static char universalElementTeMass[] = "127.60";
constexpr static char universalElementThMass[] = "232.0377";
constexpr static char universalElementTiMass[] = "47.867";
constexpr static char universalElementTlMass[] = "204.3833";
constexpr static char universalElementTmMass[] = "168.93422";
constexpr static char universalElementTsMass[] = "294";
constexpr static char universalElementUMass[] = "238.02891";
constexpr static char universalElementUbnMass[] = "297";
constexpr static char universalElementUueMass[] = "295";
constexpr static char universalElementVMass[] = "50.9415";
constexpr static char universalElementWMass[] = "183.84";
constexpr static char universalElementXeMass[] = "131.293";
constexpr static char universalElementYMass[] = "88.90584";
constexpr static char universalElementYbMass[] = "173.04";
constexpr static char universalElementZnMass[] = "65.409";
constexpr static char universalElementZrMass[] = "91.224";
constexpr static char universalElementalCharge[] = "1.60217662·10^-19";
constexpr static char universalEqual[] = "=";
constexpr static char universalEqualityCondition[] = "==";
constexpr static char universalEqualityConditionWithArg[] = "x==y";
constexpr static char universalExponentialRegressionFormula[] = " y=a·exp(b·x) ";
constexpr static char universalFactorCommandWithArg[] = "factor(n)";
constexpr static char universalFccId[] = "FCC ID";
constexpr static char universalFiniteIntegralFirstLegend[] = "P(";
constexpr static char universalFiniteIntegralLegend[] = "≤X≤";
constexpr static char universalFloorCommandWithArg[] = "floor(x)";
constexpr static char universalForInListLoop[] = "for i in \x11:\n  ";
constexpr static char universalForInListLoopWithArg[] = "for i in list:\n  instruction";
constexpr static char universalForInRange1ArgLoop[] = "for i in range(\x11):\n  ";
constexpr static char universalForInRange1ArgLoopWithArg[] = "for i in range(size):\n  instruction";
constexpr static char universalForInRange2ArgsLoop[] = "for i in range(\x11,):\n  ";
constexpr static char universalForInRange2ArgsLoopWithArg[] = "for i in range(start, stop):\n  instruction";
constexpr static char universalForInRange3ArgsLoop[] = "for i in range(\x11,,):\n  ";
constexpr static char universalForInRange3ArgsLoopWithArg[] = "for i in range(start, stop, step):\n  instruction";
constexpr static char universalForLoopMenu[] = "For";
constexpr static char universalFracCommandWithArg[] = "frac(x)";
constexpr static char universalGAcceleration[] = "9.80665";
constexpr static char universalGConstant[] = "6.674·10^-11";
constexpr static char universalGas[] = "8.31446261815324";
constexpr static char universalGcdCommandWithArg[] = "gcd(p,q)";
constexpr static char universalGon[] = "gon";
constexpr static char universalIfAndIfElseStatement[] = "if \x11 and :\n  \nelse:\n  ";
constexpr static char universalIfAndIfElseStatementWithArg[] = "if condition1 and condition2:\n  instruction1\nelse:\n  instruction2";
constexpr static char universalIfElifElseStatement[] = "if \x11:\n  \nelif :\n  \nelse:\n  ";
constexpr static char universalIfElifElseStatementWithArg[] = "if condition1:\n  instruction1\nelif condition2:\n  instruction2\nelse:\n  instruction3";
constexpr static char universalIfElseStatement[] = "if \x11:\n  \nelse:\n  ";
constexpr static char universalIfElseStatementWithArg[] = "if condition:\n  instruction1\nelse:\n  instruction2";
constexpr static char universalIfOrIfElseStatement[] = "if \x11 or :\n  \nelse:\n  ";
constexpr static char universalIfOrIfElseStatementWithArg[] = "if condition1 or condition2:\n  instruction1\nelse:\n  instruction2";
constexpr static char universalIfStatementMenu[] = "If";
constexpr static char universalIfThenStatement[] = "if \x11:\n  ";
constexpr static char universalIfThenStatementWithArg[] = "if condition:\n  instruction";
constexpr static char universalImCommandWithArg[] = "im(z)";
constexpr static char universalIndentityCommandWithArg[] = "identity(n)";
constexpr static char universalInferiorCondition[] = "<=";
constexpr static char universalInferiorConditionWithArg[] = "x<=y";
constexpr static char universalInferiorStrictCondition[] = "<";
constexpr static char universalInferiorStrictConditionWithArg[] = "x<y";
constexpr static char universalIntCommand[] = "int(\x11,x,\x11,\x11)";
constexpr static char universalIntCommandWithArg[] = "int(f(x),x,a,b)";
constexpr static char universalInvBinomialCommandWithArg[] = "invbinom(a,n,p)";
constexpr static char universalInvNormCommandWithArg[] = "invnorm(a,μ,σ2)";
constexpr static char universalInvSortCommandWithArg[] = "sort>(L)";
constexpr static char universalInverseCommandWithArg[] = "inverse(M)";
constexpr static char universalJeanBaptisteBoric[] = "Jean-Baptiste Boric ";
constexpr static char universalJoachimLeFournis[] = "Joachim Le Fournis ";
constexpr static char universalK[] = "k";
constexpr static char universalKandinskyModule[] = "kandinsky";
constexpr static char universalLambda[] = "λ";
constexpr static char universalLanguageDE[] = "Deutsch ";
constexpr static char universalLanguageEN[] = "English ";
constexpr static char universalLanguageES[] = "Español ";
constexpr static char universalLanguageFR[] = "Français ";
constexpr static char universalLanguagePT[] = "Português ";
constexpr static char universalLcmCommandWithArg[] = "lcm(p,q)";
constexpr static char universalLeftIntegralFirstLegend[] = "P(X≤";
constexpr static char universalLeftIntegralSecondLegend[] = ")=";
constexpr static char universalLinearRegressionFormula[] = " y=a·x+b ";
constexpr static char universalLogCommandWithArg[] = "log(x,a)";
constexpr static char universalLogarithmicRegressionFormula[] = " y=a·ln(x)+b ";
constexpr static char universalLogisticRegressionFormula[] = " y=c/(1+a·exp(-b·x)) ";
constexpr static char universalMathModule[] = "math";
constexpr static char universalMatrixCommand[] = "[[\x11]]";
constexpr static char universalMatrixCommandWithArg[] = "[[1,2][3,4]]";
constexpr static char universalMaxCommandWithArg[] = "max(L)";
constexpr static char universalMaximeFriess[] = "Maxime Friess ";
constexpr static char universalMinCommandWithArg[] = "min(L)";
constexpr static char universalMu[] = "μ";
constexpr static char universalN[] = "n";
constexpr static char universalNeutronMass[] = "1.67493·10^-27";
constexpr static char universalNonEqualityCondition[] = "!=";
constexpr static char universalNonEqualityConditionWithArg[] = "x!=y";
constexpr static char universalNormCDF2CommandWithArg[] = "normcdf2(a,b,μ,σ2)";
constexpr static char universalNormCDFCommandWithArg[] = "normcdf(a,μ,σ2)";
constexpr static char universalNormPDFCommandWithArg[] = "normpdf(x,μ,σ2)";
constexpr static char universalP[] = "p";
constexpr static char universalPDamienNicolet[] = "@zardam";
constexpr static char universalPDannySimmons[] = "@MixedMatched";
constexpr static char universalPDavid[] = "@0b101";
constexpr static char universalPJeanBaptisteBoric[] = "@boricj";
constexpr static char universalPJoachimLeFournis[] = "@RedGl0w";
constexpr static char universalPMaximeFriess[] = "@M4x1m3";
constexpr static char universalPQuentinGuidee[] = "@quentinguidee";
constexpr static char universalPermuteCommandWithArg[] = "permute(n,r)";
constexpr static char universalPlanck[] = "6.62607015·10^-34";
constexpr static char universalPowerRegressionFormula[] = " y=a·x^b ";
constexpr static char universalPrediction95CommandWithArg[] = "prediction95(p,n)";
constexpr static char universalPredictionCommandWithArg[] = "prediction(p,n)";
constexpr static char universalProductCommand[] = "product(\x11,n,\x11,\x11)";
constexpr static char universalProductCommandWithArg[] = "product(f(n),n,nmin,nmax)";
constexpr static char universalProtonMass[] = "1.672649·10^-27";
constexpr static char universalPythonCommand1J[] = "1j";
constexpr static char universalPythonCommandAbs[] = "abs(x)";
constexpr static char universalPythonCommandAcos[] = "acos(x)";
constexpr static char universalPythonCommandAcosh[] = "acosh(x)";
constexpr static char universalPythonCommandAmpersand[] = "&";
constexpr static char universalPythonCommandAsin[] = "asin(x)";
constexpr static char universalPythonCommandAsinh[] = "asinh(x)";
constexpr static char universalPythonCommandAtan[] = "atan(x)";
constexpr static char universalPythonCommandAtan2[] = "atan2(y,x)";
constexpr static char universalPythonCommandAtanh[] = "atanh(x)";
constexpr static char universalPythonCommandBin[] = "bin(x)";
constexpr static char universalPythonCommandCeil[] = "ceil(x)";
constexpr static char universalPythonCommandChoice[] = "choice(list)";
constexpr static char universalPythonCommandCmathFunction[] = "cmath.function";
constexpr static char universalPythonCommandCmathFunctionWithoutArg[] = "cmath.\x11";
constexpr static char universalPythonCommandColor[] = "color(r,g,b)";
constexpr static char universalPythonCommandComplex[] = "complex(a,b)";
constexpr static char universalPythonCommandConstantE[] = "e";
constexpr static char universalPythonCommandConstantPi[] = "pi";
constexpr static char universalPythonCommandCopySign[] = "copysign(x,y)";
constexpr static char universalPythonCommandCos[] = "cos(x)";
constexpr static char universalPythonCommandCosComplex[] = "cos(z)";
constexpr static char universalPythonCommandCosh[] = "cosh(x)";
constexpr static char universalPythonCommandDef[] = "def \x11():\n  ";
constexpr static char universalPythonCommandDefWithArg[] = "def function(x):";
constexpr static char universalPythonCommandDegrees[] = "degrees(x)";
constexpr static char universalPythonCommandDivMod[] = "divmod(a,b)";
constexpr static char universalPythonCommandDrawString[] = "draw_string(\"text\",x,y)";
constexpr static char universalPythonCommandErf[] = "erf(x)";
constexpr static char universalPythonCommandErfc[] = "erfc(x)";
constexpr static char universalPythonCommandEval[] = "eval(\"expression\")";
constexpr static char universalPythonCommandExp[] = "exp(x)";
constexpr static char universalPythonCommandExpComplex[] = "exp(z)";
constexpr static char universalPythonCommandExpm1[] = "expm1(x)";
constexpr static char universalPythonCommandFabs[] = "fabs(x)";
constexpr static char universalPythonCommandFillRect[] = "fill_rect(x,y,width,height,color)";
constexpr static char universalPythonCommandFloat[] = "float(x)";
constexpr static char universalPythonCommandFloor[] = "floor(x)";
constexpr static char universalPythonCommandFmod[] = "fmod(a,b)";
constexpr static char universalPythonCommandFrExp[] = "frexp(x)";
constexpr static char universalPythonCommandGamma[] = "gamma(x)";
constexpr static char universalPythonCommandGetPixel[] = "get_pixel(x,y)";
constexpr static char universalPythonCommandGetrandbits[] = "getrandbits(k)";
constexpr static char universalPythonCommandHex[] = "hex(x)";
constexpr static char universalPythonCommandImag[] = "z.imag";
constexpr static char universalPythonCommandImagWithoutArg[] = "\x11.imag";
constexpr static char universalPythonCommandImportCmath[] = "import cmath";
constexpr static char universalPythonCommandImportFromCmath[] = "from cmath import *";
constexpr static char universalPythonCommandImportFromKandinsky[] = "from kandinsky import *";
constexpr static char universalPythonCommandImportFromMath[] = "from math import *";
constexpr static char universalPythonCommandImportFromRandom[] = "from random import *";
constexpr static char universalPythonCommandImportFromTurtle[] = "from turtle import *";
constexpr static char universalPythonCommandImportKandinsky[] = "import kandinsky";
constexpr static char universalPythonCommandImportMath[] = "import math";
constexpr static char universalPythonCommandImportRandom[] = "import random";
constexpr static char universalPythonCommandImportTime[] = "import time";
constexpr static char universalPythonCommandImportTurtle[] = "import turtle";
constexpr static char universalPythonCommandInput[] = "input(\"text\")";
constexpr static char universalPythonCommandInt[] = "int(x)";
constexpr static char universalPythonCommandIsFinite[] = "isfinite(x)";
constexpr static char universalPythonCommandIsInfinite[] = "isinf(x)";
constexpr static char universalPythonCommandIsNaN[] = "isnan(x)";
constexpr static char universalPythonCommandKandinskyFunction[] = "kandinsky.function";
constexpr static char universalPythonCommandKandinskyFunctionWithoutArg[] = "kandinsky.\x11";
constexpr static char universalPythonCommandLF[] = "\\n";
constexpr static char universalPythonCommandLdexp[] = "ldexp(x,i)";
constexpr static char universalPythonCommandLength[] = "len(object)";
constexpr static char universalPythonCommandLgamma[] = "lgamma(x)";
constexpr static char universalPythonCommandLog[] = "log(x,a)";
constexpr static char universalPythonCommandLog10[] = "log10(x)";
constexpr static char universalPythonCommandLog2[] = "log2(x)";
constexpr static char universalPythonCommandLogComplex[] = "log(z,a)";
constexpr static char universalPythonCommandMathFunction[] = "math.function";
constexpr static char universalPythonCommandMathFunctionWithoutArg[] = "math.\x11";
constexpr static char universalPythonCommandMax[] = "max(list)";
constexpr static char universalPythonCommandMin[] = "min(list)";
constexpr static char universalPythonCommandModf[] = "modf(x)";
constexpr static char universalPythonCommandOct[] = "oct(x)";
constexpr static char universalPythonCommandPercent[] = "%";
constexpr static char universalPythonCommandPhase[] = "phase(z)";
constexpr static char universalPythonCommandPolar[] = "polar(z)";
constexpr static char universalPythonCommandPound[] = "#";
constexpr static char universalPythonCommandPower[] = "pow(x,y)";
constexpr static char universalPythonCommandPrint[] = "print(object)";
constexpr static char universalPythonCommandRadians[] = "radians(x)";
constexpr static char universalPythonCommandRandint[] = "randint(a,b)";
constexpr static char universalPythonCommandRandom[] = "random()";
constexpr static char universalPythonCommandRandomFunction[] = "random.function";
constexpr static char universalPythonCommandRandomFunctionWithoutArg[] = "random.\x11";
constexpr static char universalPythonCommandRandrange[] = "randrange(start, stop)";
constexpr static char universalPythonCommandRangeStartStop[] = "range(start, stop)";
constexpr static char universalPythonCommandRangeStop[] = "range(stop)";
constexpr static char universalPythonCommandReal[] = "z.real";
constexpr static char universalPythonCommandRealWithoutArg[] = "\x11.real";
constexpr static char universalPythonCommandRect[] = "rect(r, arg)";
constexpr static char universalPythonCommandReturn[] = "return ";
constexpr static char universalPythonCommandRound[] = "round(x, n)";
constexpr static char universalPythonCommandSeed[] = "seed(x)";
constexpr static char universalPythonCommandSetPixel[] = "set_pixel(x,y,color)";
constexpr static char universalPythonCommandSin[] = "sin(x)";
constexpr static char universalPythonCommandSinComplex[] = "sin(z)";
constexpr static char universalPythonCommandSingleQuote[] = "'x'";
constexpr static char universalPythonCommandSinh[] = "sinh(x)";
constexpr static char universalPythonCommandSorted[] = "sorted(list)";
constexpr static char universalPythonCommandSqrt[] = "sqrt(x)";
constexpr static char universalPythonCommandSqrtComplex[] = "sqrt(z)";
constexpr static char universalPythonCommandSum[] = "sum(list)";
constexpr static char universalPythonCommandSymbolExp[] = "^";
constexpr static char universalPythonCommandTab[] = "\\t";
constexpr static char universalPythonCommandTan[] = "tan(x)";
constexpr static char universalPythonCommandTanh[] = "tanh(x)";
constexpr static char universalPythonCommandTimeFunction[] = "time.function";
constexpr static char universalPythonCommandTrunc[] = "trunc(x)";
constexpr static char universalPythonCommandTurtleFunction[] = "turtle.function";
constexpr static char universalPythonCommandTurtleFunctionWithoutArg[] = "turtle.\x11";
constexpr static char universalPythonCommandUniform[] = "uniform(a,b)";
constexpr static char universalPythonCommandVerticalBar[] = "|";
constexpr static char universalPythonTimeCommandImportFrom[] = "from time import *";
constexpr static char universalPythonTimeCommandMonotonic[] = "monotonic()";
constexpr static char universalPythonTimeCommandSleep[] = "sleep()";
constexpr static char universalPythonTimeCommandSleepDemo[] = "sleep(n)";
constexpr static char universalPythonTimeModule[] = "time";
constexpr static char universalPythonTurtleCommandBackward[] = "backward(x)";
constexpr static char universalPythonTurtleCommandBlack[] = "'black'";
constexpr static char universalPythonTurtleCommandBlue[] = "'blue'";
constexpr static char universalPythonTurtleCommandBrown[] = "'brown'";
constexpr static char universalPythonTurtleCommandCircle[] = "circle(r)";
constexpr static char universalPythonTurtleCommandColor[] = "color('c')/color(r,g,b)";
constexpr static char universalPythonTurtleCommandColorWithoutArg[] = "color(\x11)";
constexpr static char universalPythonTurtleCommandForward[] = "forward(x)";
constexpr static char universalPythonTurtleCommandGoto[] = "goto(x,y)";
constexpr static char universalPythonTurtleCommandGreen[] = "'green'";
constexpr static char universalPythonTurtleCommandGrey[] = "'grey'";
constexpr static char universalPythonTurtleCommandHeading[] = "heading()";
constexpr static char universalPythonTurtleCommandHideturtle[] = "hideturtle()";
constexpr static char universalPythonTurtleCommandIsdown[] = "isdown()";
constexpr static char universalPythonTurtleCommandLeft[] = "left(a)";
constexpr static char universalPythonTurtleCommandOrange[] = "'orange'";
constexpr static char universalPythonTurtleCommandPendown[] = "pendown()";
constexpr static char universalPythonTurtleCommandPensize[] = "pensize(x)";
constexpr static char universalPythonTurtleCommandPenup[] = "penup()";
constexpr static char universalPythonTurtleCommandPink[] = "'pink'";
constexpr static char universalPythonTurtleCommandPosition[] = "position()";
constexpr static char universalPythonTurtleCommandPurple[] = "'purple'";
constexpr static char universalPythonTurtleCommandRed[] = "'red'";
constexpr static char universalPythonTurtleCommandReset[] = "reset()";
constexpr static char universalPythonTurtleCommandRight[] = "right(a)";
constexpr static char universalPythonTurtleCommandSetheading[] = "setheading(a)";
constexpr static char universalPythonTurtleCommandSetposition[] = "setposition(x, [y])";
constexpr static char universalPythonTurtleCommandShowturtle[] = "showturtle()";
constexpr static char universalPythonTurtleCommandSpeed[] = "speed(x)";
constexpr static char universalPythonTurtleCommandWhite[] = "'white'";
constexpr static char universalPythonTurtleCommandYellow[] = "'yellow'";
constexpr static char universalQuadraticRegressionFormula[] = " y=a·x^2+b·x+c ";
constexpr static char universalQuarticRegressionFormula[] = " y=a·x^4+b·x^3+c·x^2+d·x+e ";
constexpr static char universalQuentinGuidee[] = "Quentin Guidée ";
constexpr static char universalQuoCommandWithArg[] = "quo(p,q)";
constexpr static char universalR[] = "r";
constexpr static char universalRandintCommandWithArg[] = "randint(a,b)";
constexpr static char universalRandomCommandWithArg[] = "random()";
constexpr static char universalRandomModule[] = "random";
constexpr static char universalReCommandWithArg[] = "re(z)";
constexpr static char universalRemCommandWithArg[] = "rem(p,q)";
constexpr static char universalRightIntegralFirstLegend[] = "P(X≥";
constexpr static char universalRightIntegralSecondLegend[] = ")=";
constexpr static char universalRootCommandWithArg[] = "root(x,n)";
constexpr static char universalRoundCommandWithArg[] = "round(x,n)";
constexpr static char universalScriptParameters[] = "...";
constexpr static char universalShift[] = "shift";
constexpr static char universalSigma[] = "σ";
constexpr static char universalSinhCommandWithArg[] = "sinh(x)";
constexpr static char universalSortCommandWithArg[] = "sort<(L)";
constexpr static char universalSpeedOfLight[] = "2.998·10^8";
constexpr static char universalSumCommand[] = "sum(\x11,n,\x11,\x11)";
constexpr static char universalSumCommandWithArg[] = "sum(f(n),n,nmin,nmax)";
constexpr static char universalSuperiorCondition[] = ">=";
constexpr static char universalSuperiorConditionWithArg[] = "x>=y";
constexpr static char universalSuperiorStrictCondition[] = ">";
constexpr static char universalSuperiorStrictConditionWithArg[] = "x>y";
constexpr static char universalSxy[] = "∑xy";
constexpr static char universalT[] = "t";
constexpr static char universalTMax[] = "Tmax";
constexpr static char universalTMin[] = "Tmin";
constexpr static char universalTanhCommandWithArg[] = "tanh(x)";
constexpr static char universalTheta[] = "θ";
constexpr static char universalThetaMax[] = "θmax";
constexpr static char universalThetaMin[] = "θmin";
constexpr static char universalTraceCommandWithArg[] = "trace(M)";
constexpr static char universalTransposeCommandWithArg[] = "transpose(M)";
constexpr static char universalTrigonometricRegressionFormula[] = " y=a·sin(b·x+c)+d ";
constexpr static char universalTurtleModule[] = "turtle";
constexpr static char universalUSBAppCapital[] = "USB";
constexpr static char universalVacuum_permeability[] = "4π·10^-7";
constexpr static char universalVacuum_permittivity[] = "8.8541878128·10^-12";
constexpr static char universalWhileLoop[] = "while \x11:\n  ";
constexpr static char universalWhileLoopMenu[] = "While";
constexpr static char universalWhileLoopWithArg[] = "while condition:\n  instruction";
constexpr static char universalX[] = "x";
constexpr static char universalXMax[] = "Xmax";
constexpr static char universalXMin[] = "Xmin";
constexpr static char universalY[] = "y";
constexpr static char universalYAuto[] = "Y auto";
constexpr static char universalYMax[] = "Ymax";
constexpr static char universalYMin[] = "Ymin";
constexpr static char universalYearLight[] = "9.461·10^12";

constexpr static const char * universalMessages[465] = {
  universalDefault,
  universalA,
  universalAbsCommandWithArg,
  universalAcoshCommandWithArg,
  universalAlmostEqual,
  universalAlpha,
  universalArgCommandWithArg,
  universalAsinhCommandWithArg,
  universalAtanhCommandWithArg,
  universalAvogadro,
  universalB,
  universalBinomialCDFCommandWithArg,
  universalBinomialCommandWithArg,
  universalBinomialPDFCommandWithArg,
  universalBlankMessage,
  universalBoltzmann,
  universalC,
  universalCapitalAlpha,
  universalCeilCommandWithArg,
  universalCmathModule,
  universalCodeApp,
  universalCodeAppCapital,
  universalConditionAnd,
  universalConditionNot,
  universalConditionOr,
  universalConditionsMenu,
  universalConfidenceCommandWithArg,
  universalConjCommandWithArg,
  universalConsolePrompt,
  universalCoshCommandWithArg,
  universalCoulomb,
  universalCubicRegressionFormula,
  universalD,
  universalDamienNicolet,
  universalDannySimmons,
  universalDash,
  universalDavid,
  universalDeterminantCommandWithArg,
  universalDiffCommand,
  universalDiffCommandWithArg,
  universalDimensionCommandWithArg,
  universalDiscreteLegend,
  universalDiscriminantFormulaDegree2,
  universalE,
  universalElectronMass,
  universalElementAcMass,
  universalElementAgMass,
  universalElementAlMass,
  universalElementAmMass,
  universalElementArMass,
  universalElementAsMass,
  universalElementAtMass,
  universalElementAuMass,
  universalElementBMass,
  universalElementBaMass,
  universalElementBeMass,
  universalElementBhMass,
  universalElementBiMass,
  universalElementBkMass,
  universalElementBrMass,
  universalElementCMass,
  universalElementCaMass,
  universalElementCdMass,
  universalElementCeMass,
  universalElementCfMass,
  universalElementClMass,
  universalElementCmMass,
  universalElementCnMass,
  universalElementCoMass,
  universalElementCrMass,
  universalElementCsMass,
  universalElementCuMass,
  universalElementDbMass,
  universalElementDsMass,
  universalElementDyMass,
  universalElementErMass,
  universalElementEsMass,
  universalElementEuMass,
  universalElementFMass,
  universalElementFeMass,
  universalElementFlMass,
  universalElementFmMass,
  universalElementFrMass,
  universalElementGaMass,
  universalElementGdMass,
  universalElementGeMass,
  universalElementHMass,
  universalElementHeMass,
  universalElementHfMass,
  universalElementHgMass,
  universalElementHoMass,
  universalElementHsMass,
  universalElementIMass,
  universalElementInMass,
  universalElementIrMass,
  universalElementKMass,
  universalElementKrMass,
  universalElementLaMass,
  universalElementLiMass,
  universalElementLrMass,
  universalElementLuMass,
  universalElementLvMass,
  universalElementMcMass,
  universalElementMdMass,
  universalElementMgMass,
  universalElementMnMass,
  universalElementMoMass,
  universalElementMtMass,
  universalElementNMass,
  universalElementNaMass,
  universalElementNbMass,
  universalElementNdMass,
  universalElementNeMass,
  universalElementNhMass,
  universalElementNiMass,
  universalElementNoMass,
  universalElementNpMass,
  universalElementOMass,
  universalElementOgMass,
  universalElementOsMass,
  universalElementPMass,
  universalElementPaMass,
  universalElementPbMass,
  universalElementPdMass,
  universalElementPmMass,
  universalElementPoMass,
  universalElementPrMass,
  universalElementPtMass,
  universalElementPuMass,
  universalElementRaMass,
  universalElementRbMass,
  universalElementReMass,
  universalElementRfMass,
  universalElementRgMass,
  universalElementRhMass,
  universalElementRnMass,
  universalElementRuMass,
  universalElementSMass,
  universalElementSbMass,
  universalElementScMass,
  universalElementSeMass,
  universalElementSgMass,
  universalElementSiMass,
  universalElementSmMass,
  universalElementSnMass,
  universalElementSrMass,
  universalElementTaMass,
  universalElementTbMass,
  universalElementTcMass,
  universalElementTeMass,
  universalElementThMass,
  universalElementTiMass,
  universalElementTlMass,
  universalElementTmMass,
  universalElementTsMass,
  universalElementUMass,
  universalElementUbnMass,
  universalElementUueMass,
  universalElementVMass,
  universalElementWMass,
  universalElementXeMass,
  universalElementYMass,
  universalElementYbMass,
  universalElementZnMass,
  universalElementZrMass,
  universalElementalCharge,
  universalEqual,
  universalEqualityCondition,
  universalEqualityConditionWithArg,
  universalExponentialRegressionFormula,
  universalFactorCommandWithArg,
  universalFccId,
  universalFiniteIntegralFirstLegend,
  universalFiniteIntegralLegend,
  universalFloorCommandWithArg,
  universalForInListLoop,
  universalForInListLoopWithArg,
  universalForInRange1ArgLoop,
  universalForInRange1ArgLoopWithArg,
  universalForInRange2ArgsLoop,
  universalForInRange2ArgsLoopWithArg,
  universalForInRange3ArgsLoop,
  universalForInRange3ArgsLoopWithArg,
  universalForLoopMenu,
  universalFracCommandWithArg,
  universalGAcceleration,
  universalGConstant,
  universalGas,
  universalGcdCommandWithArg,
  universalGon,
  universalIfAndIfElseStatement,
  universalIfAndIfElseStatementWithArg,
  universalIfElifElseStatement,
  universalIfElifElseStatementWithArg,
  universalIfElseStatement,
  universalIfElseStatementWithArg,
  universalIfOrIfElseStatement,
  universalIfOrIfElseStatementWithArg,
  universalIfStatementMenu,
  universalIfThenStatement,
  universalIfThenStatementWithArg,
  universalImCommandWithArg,
  universalIndentityCommandWithArg,
  universalInferiorCondition,
  universalInferiorConditionWithArg,
  universalInferiorStrictCondition,
  universalInferiorStrictConditionWithArg,
  universalIntCommand,
  universalIntCommandWithArg,
  universalInvBinomialCommandWithArg,
  universalInvNormCommandWithArg,
  universalInvSortCommandWithArg,
  universalInverseCommandWithArg,
  universalJeanBaptisteBoric,
  universalJoachimLeFournis,
  universalK,
  universalKandinskyModule,
  universalLambda,
  universalLanguageDE,
  universalLanguageEN,
  universalLanguageES,
  universalLanguageFR,
  universalLanguagePT,
  universalLcmCommandWithArg,
  universalLeftIntegralFirstLegend,
  universalLeftIntegralSecondLegend,
  universalLinearRegressionFormula,
  universalLogCommandWithArg,
  universalLogarithmicRegressionFormula,
  universalLogisticRegressionFormula,
  universalMathModule,
  universalMatrixCommand,
  universalMatrixCommandWithArg,
  universalMaxCommandWithArg,
  universalMaximeFriess,
  universalMinCommandWithArg,
  universalMu,
  universalN,
  universalNeutronMass,
  universalNonEqualityCondition,
  universalNonEqualityConditionWithArg,
  universalNormCDF2CommandWithArg,
  universalNormCDFCommandWithArg,
  universalNormPDFCommandWithArg,
  universalP,
  universalPDamienNicolet,
  universalPDannySimmons,
  universalPDavid,
  universalPJeanBaptisteBoric,
  universalPJoachimLeFournis,
  universalPMaximeFriess,
  universalPQuentinGuidee,
  universalPermuteCommandWithArg,
  universalPlanck,
  universalPowerRegressionFormula,
  universalPrediction95CommandWithArg,
  universalPredictionCommandWithArg,
  universalProductCommand,
  universalProductCommandWithArg,
  universalProtonMass,
  universalPythonCommand1J,
  universalPythonCommandAbs,
  universalPythonCommandAcos,
  universalPythonCommandAcosh,
  universalPythonCommandAmpersand,
  universalPythonCommandAsin,
  universalPythonCommandAsinh,
  universalPythonCommandAtan,
  universalPythonCommandAtan2,
  universalPythonCommandAtanh,
  universalPythonCommandBin,
  universalPythonCommandCeil,
  universalPythonCommandChoice,
  universalPythonCommandCmathFunction,
  universalPythonCommandCmathFunctionWithoutArg,
  universalPythonCommandColor,
  universalPythonCommandComplex,
  universalPythonCommandConstantE,
  universalPythonCommandConstantPi,
  universalPythonCommandCopySign,
  universalPythonCommandCos,
  universalPythonCommandCosComplex,
  universalPythonCommandCosh,
  universalPythonCommandDef,
  universalPythonCommandDefWithArg,
  universalPythonCommandDegrees,
  universalPythonCommandDivMod,
  universalPythonCommandDrawString,
  universalPythonCommandErf,
  universalPythonCommandErfc,
  universalPythonCommandEval,
  universalPythonCommandExp,
  universalPythonCommandExpComplex,
  universalPythonCommandExpm1,
  universalPythonCommandFabs,
  universalPythonCommandFillRect,
  universalPythonCommandFloat,
  universalPythonCommandFloor,
  universalPythonCommandFmod,
  universalPythonCommandFrExp,
  universalPythonCommandGamma,
  universalPythonCommandGetPixel,
  universalPythonCommandGetrandbits,
  universalPythonCommandHex,
  universalPythonCommandImag,
  universalPythonCommandImagWithoutArg,
  universalPythonCommandImportCmath,
  universalPythonCommandImportFromCmath,
  universalPythonCommandImportFromKandinsky,
  universalPythonCommandImportFromMath,
  universalPythonCommandImportFromRandom,
  universalPythonCommandImportFromTurtle,
  universalPythonCommandImportKandinsky,
  universalPythonCommandImportMath,
  universalPythonCommandImportRandom,
  universalPythonCommandImportTime,
  universalPythonCommandImportTurtle,
  universalPythonCommandInput,
  universalPythonCommandInt,
  universalPythonCommandIsFinite,
  universalPythonCommandIsInfinite,
  universalPythonCommandIsNaN,
  universalPythonCommandKandinskyFunction,
  universalPythonCommandKandinskyFunctionWithoutArg,
  universalPythonCommandLF,
  universalPythonCommandLdexp,
  universalPythonCommandLength,
  universalPythonCommandLgamma,
  universalPythonCommandLog,
  universalPythonCommandLog10,
  universalPythonCommandLog2,
  universalPythonCommandLogComplex,
  universalPythonCommandMathFunction,
  universalPythonCommandMathFunctionWithoutArg,
  universalPythonCommandMax,
  universalPythonCommandMin,
  universalPythonCommandModf,
  universalPythonCommandOct,
  universalPythonCommandPercent,
  universalPythonCommandPhase,
  universalPythonCommandPolar,
  universalPythonCommandPound,
  universalPythonCommandPower,
  universalPythonCommandPrint,
  universalPythonCommandRadians,
  universalPythonCommandRandint,
  universalPythonCommandRandom,
  universalPythonCommandRandomFunction,
  universalPythonCommandRandomFunctionWithoutArg,
  universalPythonCommandRandrange,
  universalPythonCommandRangeStartStop,
  universalPythonCommandRangeStop,
  universalPythonCommandReal,
  universalPythonCommandRealWithoutArg,
  universalPythonCommandRect,
  universalPythonCommandReturn,
  universalPythonCommandRound,
  universalPythonCommandSeed,
  universalPythonCommandSetPixel,
  universalPythonCommandSin,
  universalPythonCommandSinComplex,
  universalPythonCommandSingleQuote,
  universalPythonCommandSinh,
  universalPythonCommandSorted,
  universalPythonCommandSqrt,
  universalPythonCommandSqrtComplex,
  universalPythonCommandSum,
  universalPythonCommandSymbolExp,
  universalPythonCommandTab,
  universalPythonCommandTan,
  universalPythonCommandTanh,
  universalPythonCommandTimeFunction,
  universalPythonCommandTrunc,
  universalPythonCommandTurtleFunction,
  universalPythonCommandTurtleFunctionWithoutArg,
  universalPythonCommandUniform,
  universalPythonCommandVerticalBar,
  universalPythonTimeCommandImportFrom,
  universalPythonTimeCommandMonotonic,
  universalPythonTimeCommandSleep,
  universalPythonTimeCommandSleepDemo,
  universalPythonTimeModule,
  universalPythonTurtleCommandBackward,
  universalPythonTurtleCommandBlack,
  universalPythonTurtleCommandBlue,
  universalPythonTurtleCommandBrown,
  universalPythonTurtleCommandCircle,
  universalPythonTurtleCommandColor,
  universalPythonTurtleCommandColorWithoutArg,
  universalPythonTurtleCommandForward,
  universalPythonTurtleCommandGoto,
  universalPythonTurtleCommandGreen,
  universalPythonTurtleCommandGrey,
  universalPythonTurtleCommandHeading,
  universalPythonTurtleCommandHideturtle,
  universalPythonTurtleCommandIsdown,
  universalPythonTurtleCommandLeft,
  universalPythonTurtleCommandOrange,
  universalPythonTurtleCommandPendown,
  universalPythonTurtleCommandPensize,
  universalPythonTurtleCommandPenup,
  universalPythonTurtleCommandPink,
  universalPythonTurtleCommandPosition,
  universalPythonTurtleCommandPurple,
  universalPythonTurtleCommandRed,
  universalPythonTurtleCommandReset,
  universalPythonTurtleCommandRight,
  universalPythonTurtleCommandSetheading,
  universalPythonTurtleCommandSetposition,
  universalPythonTurtleCommandShowturtle,
  universalPythonTurtleCommandSpeed,
  universalPythonTurtleCommandWhite,
  universalPythonTurtleCommandYellow,
  universalQuadraticRegressionFormula,
  universalQuarticRegressionFormula,
  universalQuentinGuidee,
  universalQuoCommandWithArg,
  universalR,
  universalRandintCommandWithArg,
  universalRandomCommandWithArg,
  universalRandomModule,
  universalReCommandWithArg,
  universalRemCommandWithArg,
  universalRightIntegralFirstLegend,
  universalRightIntegralSecondLegend,
  universalRootCommandWithArg,
  universalRoundCommandWithArg,
  universalScriptParameters,
  universalShift,
  universalSigma,
  universalSinhCommandWithArg,
  universalSortCommandWithArg,
  universalSpeedOfLight,
  universalSumCommand,
  universalSumCommandWithArg,
  universalSuperiorCondition,
  universalSuperiorConditionWithArg,
  universalSuperiorStrictCondition,
  universalSuperiorStrictConditionWithArg,
  universalSxy,
  universalT,
  universalTMax,
  universalTMin,
  universalTanhCommandWithArg,
  universalTheta,
  universalThetaMax,
  universalThetaMin,
  universalTraceCommandWithArg,
  universalTransposeCommandWithArg,
  universalTrigonometricRegressionFormula,
  universalTurtleModule,
  universalUSBAppCapital,
  universalVacuum_permeability,
  universalVacuum_permittivity,
  universalWhileLoop,
  universalWhileLoopMenu,
  universalWhileLoopWithArg,
  universalX,
  universalXMax,
  universalXMin,
  universalY,
  universalYAuto,
  universalYMax,
  universalYMin,
  universalYearLight,
};

constexpr static char enAbout[] = "About";
constexpr static char frAbout[] = "A propos";
constexpr static char esAbout[] = "Acerca";
constexpr static char deAbout[] = "Uber";
constexpr static char ptAbout[] = "Acerca";
constexpr static char enAbsoluteValue[] = "Absolute value";
constexpr static char frAbsoluteValue[] = "Valeur absolue";
constexpr static char esAbsoluteValue[] = "Valor absoluto";
constexpr static char deAbsoluteValue[] = "Betragsfunktion";
constexpr static char ptAbsoluteValue[] = "Valor absoluto";
constexpr static char enAccessibility[] = "Accessibility";
constexpr static char frAccessibility[] = "Accessibilité";
constexpr static char esAccessibility[] = "Accesibilidad";
constexpr static char deAccessibility[] = "Barrierefreiheit";
constexpr static char ptAccessibility[] = "Acessibilidade";
constexpr static char enAccessibilityGamma[] = "Gamma correction";
constexpr static char frAccessibilityGamma[] = "Correction gamma";
constexpr static char esAccessibilityGamma[] = "Corrección gamma";
constexpr static char deAccessibilityGamma[] = "Gammakorrektur";
constexpr static char ptAccessibilityGamma[] = "Correção gama";
constexpr static char enAccessibilityGammaBlue[] = "Blue gamma";
constexpr static char frAccessibilityGammaBlue[] = "Gamma bleu";
constexpr static char esAccessibilityGammaBlue[] = "Gamma azul";
constexpr static char deAccessibilityGammaBlue[] = "Blaues Gamma";
constexpr static char ptAccessibilityGammaBlue[] = "Gama azul";
constexpr static char enAccessibilityGammaGreen[] = "Green gamma";
constexpr static char frAccessibilityGammaGreen[] = "Gamma vert";
constexpr static char esAccessibilityGammaGreen[] = "Gamma verde";
constexpr static char deAccessibilityGammaGreen[] = "Grünes Gamma";
constexpr static char ptAccessibilityGammaGreen[] = "Gama verde";
constexpr static char enAccessibilityGammaRed[] = "Red gamma";
constexpr static char frAccessibilityGammaRed[] = "Gamma rouge";
constexpr static char esAccessibilityGammaRed[] = "Gamma roja";
constexpr static char deAccessibilityGammaRed[] = "Rotes Gamma";
constexpr static char ptAccessibilityGammaRed[] = "Gama vermelha";
constexpr static char enAccessibilityInvertColors[] = "Invert colors";
constexpr static char frAccessibilityInvertColors[] = "Inverser couleurs";
constexpr static char esAccessibilityInvertColors[] = "Colores invertidos";
constexpr static char deAccessibilityInvertColors[] = "Farbumkehrung";
constexpr static char ptAccessibilityInvertColors[] = "Cores invertidas";
constexpr static char enAccessibilityMagnify[] = "Magnify";
constexpr static char frAccessibilityMagnify[] = "Loupe";
constexpr static char esAccessibilityMagnify[] = "Lupa";
constexpr static char deAccessibilityMagnify[] = "Lupe";
constexpr static char ptAccessibilityMagnify[] = "Lupa";
constexpr static char enActivateDeactivate[] = "Turn on/off";
constexpr static char frActivateDeactivate[] = "Activer/Désactiver";
constexpr static char esActivateDeactivate[] = "Activar/Desactivar";
constexpr static char deActivateDeactivate[] = "Aktivieren/Deaktivieren";
constexpr static char ptActivateDeactivate[] = "Activar/Desactivar";
constexpr static char enActivateExamMode[] = "Activate exam mode";
constexpr static char frActivateExamMode[] = "Activer le mode examen";
constexpr static char esActivateExamMode[] = "Activar el modo examen";
constexpr static char deActivateExamMode[] = "Starten Testmodus";
constexpr static char ptActivateExamMode[] = "Ativar o modo de exame";
constexpr static char enActiveDutchExamModeMessage1[] = "All your data will be deleted when";
constexpr static char frActiveDutchExamModeMessage1[] = "All your data will be deleted when";
constexpr static char esActiveDutchExamModeMessage1[] = "All your data will be deleted when";
constexpr static char deActiveDutchExamModeMessage1[] = "All your data will be deleted when";
constexpr static char ptActiveDutchExamModeMessage1[] = "All your data will be deleted when";
constexpr static char enActiveDutchExamModeMessage2[] = "you activate the exam mode. Python";
constexpr static char frActiveDutchExamModeMessage2[] = "you activate the exam mode. Python";
constexpr static char esActiveDutchExamModeMessage2[] = "you activate the exam mode. Python";
constexpr static char deActiveDutchExamModeMessage2[] = "you activate the exam mode. Python";
constexpr static char ptActiveDutchExamModeMessage2[] = "you activate the exam mode. Python";
constexpr static char enActiveDutchExamModeMessage3[] = "application will be unavailable.";
constexpr static char frActiveDutchExamModeMessage3[] = "application will be unavailable.";
constexpr static char esActiveDutchExamModeMessage3[] = "application will be unavailable.";
constexpr static char deActiveDutchExamModeMessage3[] = "application will be unavailable.";
constexpr static char ptActiveDutchExamModeMessage3[] = "application will be unavailable.";
constexpr static char enActiveExamModeMessage1[] = "All your data will be ";
constexpr static char frActiveExamModeMessage1[] = "Toutes vos données seront ";
constexpr static char esActiveExamModeMessage1[] = "Todos sus datos se ";
constexpr static char deActiveExamModeMessage1[] = "Alle Ihre Daten werden ";
constexpr static char ptActiveExamModeMessage1[] = "Todos os seus dados serão ";
constexpr static char enActiveExamModeMessage2[] = "deleted when you activate ";
constexpr static char frActiveExamModeMessage2[] = "supprimées si vous activez ";
constexpr static char esActiveExamModeMessage2[] = "eliminaran al activar ";
constexpr static char deActiveExamModeMessage2[] = "gelöscht, wenn Sie den ";
constexpr static char ptActiveExamModeMessage2[] = "apagados se você ligar ";
constexpr static char enActiveExamModeMessage3[] = "the exam mode.";
constexpr static char frActiveExamModeMessage3[] = "le mode examen.";
constexpr static char esActiveExamModeMessage3[] = "el modo examen.";
constexpr static char deActiveExamModeMessage3[] = "Testmodus einschalten.";
constexpr static char ptActiveExamModeMessage3[] = "o modo de exame.";
constexpr static char enAddEquation[] = "Add equation";
constexpr static char frAddEquation[] = "Ajouter une équation";
constexpr static char esAddEquation[] = "Agregar una ecuación";
constexpr static char deAddEquation[] = "Gleichung hinzufügen";
constexpr static char ptAddEquation[] = "Adicione uma equação";
constexpr static char enAddFunction[] = "Add function";
constexpr static char frAddFunction[] = "Ajouter une fonction";
constexpr static char esAddFunction[] = "Agregar una función";
constexpr static char deAddFunction[] = "Funktion hinzufügen";
constexpr static char ptAddFunction[] = "Adicionar uma função";
constexpr static char enAddScript[] = "Add a script";
constexpr static char frAddScript[] = "Ajouter un script";
constexpr static char esAddScript[] = "Agregar un archivo";
constexpr static char deAddScript[] = "Skript hinzufügen";
constexpr static char ptAddScript[] = "Adicionar um script";
constexpr static char enAddSequence[] = "Add sequence";
constexpr static char frAddSequence[] = "Ajouter une suite";
constexpr static char esAddSequence[] = "Agregar una sucesión";
constexpr static char deAddSequence[] = "Folge hinzufügen";
constexpr static char ptAddSequence[] = "Adicionar uma sequência";
constexpr static char enAgument[] = "Argument";
constexpr static char frAgument[] = "Argument";
constexpr static char esAgument[] = "Argumento";
constexpr static char deAgument[] = "Argument";
constexpr static char ptAgument[] = "Argumento";
constexpr static char enAllowedCharactersAZaz09[] = "Allowed characters: A-Z, a-z, 0-9, _";
constexpr static char frAllowedCharactersAZaz09[] = "Caractères autorisés : A-Z, a-z, 0-9, _";
constexpr static char esAllowedCharactersAZaz09[] = "Caracteres permitidos : A-Z, a-z, 0-9, _";
constexpr static char deAllowedCharactersAZaz09[] = "Erlaubte Zeichen: A-Z, a-z, 0-9, _";
constexpr static char ptAllowedCharactersAZaz09[] = "Caracteres permitidos : A-Z, a-z, 0-9, _";
constexpr static char enAllowedCharactersaz09[] = "Allowed characters: a-z, 0-9, _";
constexpr static char frAllowedCharactersaz09[] = "Caractères autorisés : a-z, 0-9, _";
constexpr static char esAllowedCharactersaz09[] = "Caracteres permitidos : a-z, 0-9, _";
constexpr static char deAllowedCharactersaz09[] = "Erlaubte Zeichen: a-z, 0-9, _";
constexpr static char ptAllowedCharactersaz09[] = "Caracteres permitidos : a-z, 0-9, _";
constexpr static char enAlphaElementAc[] = "Ac - Actinium (89)";
constexpr static char frAlphaElementAc[] = "Ac - Actinium (89)";
constexpr static char esAlphaElementAc[] = "Ac - Actinio (89)";
constexpr static char deAlphaElementAc[] = "Ac - Aktinium (89)";
constexpr static char ptAlphaElementAc[] = "Ac - Actínio (89)";
constexpr static char enAlphaElementAg[] = "Ag - Money (47)";
constexpr static char frAlphaElementAg[] = "Ag - Argent (47)";
constexpr static char esAlphaElementAg[] = "Ag - Dinero (47)";
constexpr static char deAlphaElementAg[] = "Ag - Geld (47)";
constexpr static char ptAlphaElementAg[] = "Ag - Dinheiro (47)";
constexpr static char enAlphaElementAl[] = "Al - Aluminum (13)";
constexpr static char frAlphaElementAl[] = "Al - Aluminium (13)";
constexpr static char esAlphaElementAl[] = "Al - Aluminio (13)";
constexpr static char deAlphaElementAl[] = "Al - Aluminium (13)";
constexpr static char ptAlphaElementAl[] = "Al - Alumínio (13)";
constexpr static char enAlphaElementAm[] = "Am - Americium (95)";
constexpr static char frAlphaElementAm[] = "Am - Américium (95)";
constexpr static char esAlphaElementAm[] = "Am - Americio (95)";
constexpr static char deAlphaElementAm[] = "Am - Americium (95)";
constexpr static char ptAlphaElementAm[] = "Am - Amerício (95)";
constexpr static char enAlphaElementAr[] = "Ar - Argon (18)";
constexpr static char frAlphaElementAr[] = "Ar - Argon (18)";
constexpr static char esAlphaElementAr[] = "Ar - Argón (18)";
constexpr static char deAlphaElementAr[] = "Ar - Argon (18)";
constexpr static char ptAlphaElementAr[] = "Ar - Argão (18)";
constexpr static char enAlphaElementAs[] = "As - Arsenic (33)";
constexpr static char frAlphaElementAs[] = "As - Arsenic (33)";
constexpr static char esAlphaElementAs[] = "As - Arsénico (33)";
constexpr static char deAlphaElementAs[] = "As - Arsen (33)";
constexpr static char ptAlphaElementAs[] = "As - Arsênico (33)";
constexpr static char enAlphaElementAt[] = "At - astatine (85)";
constexpr static char frAlphaElementAt[] = "At - Astate (85)";
constexpr static char esAlphaElementAt[] = "At - Astato (85)";
constexpr static char deAlphaElementAt[] = "At - Astat (85)";
constexpr static char ptAlphaElementAt[] = "At - Astatine (85)";
constexpr static char enAlphaElementAu[] = "Au - Gold (79)";
constexpr static char frAlphaElementAu[] = "Au - Or (79)";
constexpr static char esAlphaElementAu[] = "Au - Oro (79)";
constexpr static char deAlphaElementAu[] = "Au - Gold (79)";
constexpr static char ptAlphaElementAu[] = "Au - Ouro (79)";
constexpr static char enAlphaElementB[] = "B - Boron (5)";
constexpr static char frAlphaElementB[] = "B - Bore (5)";
constexpr static char esAlphaElementB[] = "B - Boro (5)";
constexpr static char deAlphaElementB[] = "B - Bor (5)";
constexpr static char ptAlphaElementB[] = "B - Boro (5)";
constexpr static char enAlphaElementBa[] = "Ba - Barium (56)";
constexpr static char frAlphaElementBa[] = "Ba - Baryum (56)";
constexpr static char esAlphaElementBa[] = "Ba - Bario (56)";
constexpr static char deAlphaElementBa[] = "Ba - Barium (56)";
constexpr static char ptAlphaElementBa[] = "Ba - Bário (56)";
constexpr static char enAlphaElementBe[] = "Be - Beryllium (4)";
constexpr static char frAlphaElementBe[] = "Be - Béryllium (4)";
constexpr static char esAlphaElementBe[] = "Be - Berilio (4)";
constexpr static char deAlphaElementBe[] = "Be - Beryllium (4)";
constexpr static char ptAlphaElementBe[] = "Be - Berílio (4)";
constexpr static char enAlphaElementBh[] = "Bh - Bohrium (107)";
constexpr static char frAlphaElementBh[] = "Bh - Bohrium (107)";
constexpr static char esAlphaElementBh[] = "Bh - Bohrio (107)";
constexpr static char deAlphaElementBh[] = "Bh - Bohrium (107)";
constexpr static char ptAlphaElementBh[] = "Bh - Bohrium (107)";
constexpr static char enAlphaElementBi[] = "Bi - Bismuth (83)";
constexpr static char frAlphaElementBi[] = "Bi - Bismuth (83)";
constexpr static char esAlphaElementBi[] = "Bi - Bismuto (83)";
constexpr static char deAlphaElementBi[] = "Bi - Wismut (83)";
constexpr static char ptAlphaElementBi[] = "Bi - Bismuto (83)";
constexpr static char enAlphaElementBk[] = "Bk - Berkelium (97)";
constexpr static char frAlphaElementBk[] = "Bk - Berkélium (97)";
constexpr static char esAlphaElementBk[] = "Bk - Berkelio (97)";
constexpr static char deAlphaElementBk[] = "Bk - Berkelium (97)";
constexpr static char ptAlphaElementBk[] = "Bk - Berkelium (97)";
constexpr static char enAlphaElementBr[] = "Br - Bromine (35)";
constexpr static char frAlphaElementBr[] = "Br - Brome (35)";
constexpr static char esAlphaElementBr[] = "Br - Bromo (35)";
constexpr static char deAlphaElementBr[] = "Br - Brom (35)";
constexpr static char ptAlphaElementBr[] = "Br - Bromo (35)";
constexpr static char enAlphaElementC[] = "C - Carbon (6)";
constexpr static char frAlphaElementC[] = "C - Carbone (6)";
constexpr static char esAlphaElementC[] = "C - Carbono (6)";
constexpr static char deAlphaElementC[] = "C - Kohlenstoff (6)";
constexpr static char ptAlphaElementC[] = "C - Carbono (6)";
constexpr static char enAlphaElementCa[] = "Ca - Calcium (20)";
constexpr static char frAlphaElementCa[] = "Ca - Calcium (20)";
constexpr static char esAlphaElementCa[] = "Ca - Calcio (20)";
constexpr static char deAlphaElementCa[] = "Ca - Kalzium (20)";
constexpr static char ptAlphaElementCa[] = "Ca - Cálcio (20)";
constexpr static char enAlphaElementCd[] = "Cd - Cadmium (48)";
constexpr static char frAlphaElementCd[] = "Cd - Cadmium (48)";
constexpr static char esAlphaElementCd[] = "Cd - Cadmio (48)";
constexpr static char deAlphaElementCd[] = "Cd - Cadmium (48)";
constexpr static char ptAlphaElementCd[] = "Cd - Cádmio (48)";
constexpr static char enAlphaElementCe[] = "Ce - Cerium (58)";
constexpr static char frAlphaElementCe[] = "Ce - Cérium (58)";
constexpr static char esAlphaElementCe[] = "Ce - Cerio (58)";
constexpr static char deAlphaElementCe[] = "Ce - Cer (58)";
constexpr static char ptAlphaElementCe[] = "Ce - Cério (58)";
constexpr static char enAlphaElementCf[] = "Cf - Californium (98)";
constexpr static char frAlphaElementCf[] = "Cf - Californium (98)";
constexpr static char esAlphaElementCf[] = "Cf - Californio (98)";
constexpr static char deAlphaElementCf[] = "Cf - Californium (98)";
constexpr static char ptAlphaElementCf[] = "Cf - Californium (98)";
constexpr static char enAlphaElementCl[] = "Cl - Chlorine (17)";
constexpr static char frAlphaElementCl[] = "Cl - Chlore (17)";
constexpr static char esAlphaElementCl[] = "Cl - Cloro (17)";
constexpr static char deAlphaElementCl[] = "Cl - Chlor (17)";
constexpr static char ptAlphaElementCl[] = "Cl - Cloro (17)";
constexpr static char enAlphaElementCm[] = "Cm - Curium (96)";
constexpr static char frAlphaElementCm[] = "Cm - Curium (96)";
constexpr static char esAlphaElementCm[] = "Cm - Curio (96)";
constexpr static char deAlphaElementCm[] = "Cm - Curium (96)";
constexpr static char ptAlphaElementCm[] = "Cm - Curandeiro (96)";
constexpr static char enAlphaElementCn[] = "Cn - Copernicium (112)";
constexpr static char frAlphaElementCn[] = "Cn - Copernicium (112)";
constexpr static char esAlphaElementCn[] = "Cn - Copernicio (112)";
constexpr static char deAlphaElementCn[] = "Cn - Copernicium (112)";
constexpr static char ptAlphaElementCn[] = "Cn - Copernicium (112)";
constexpr static char enAlphaElementCo[] = "Co - Cobalt (27)";
constexpr static char frAlphaElementCo[] = "Co - Cobalt (27)";
constexpr static char esAlphaElementCo[] = "Co - Cobalto (27)";
constexpr static char deAlphaElementCo[] = "Co - Kobalt (27)";
constexpr static char ptAlphaElementCo[] = "Co - Cobalto (27)";
constexpr static char enAlphaElementCr[] = "Cr - Chromium (24)";
constexpr static char frAlphaElementCr[] = "Cr - Chrome (24)";
constexpr static char esAlphaElementCr[] = "Cr - Cromo (24)";
constexpr static char deAlphaElementCr[] = "Cr - Chrom (24)";
constexpr static char ptAlphaElementCr[] = "Cr - Crômio (24)";
constexpr static char enAlphaElementCs[] = "Cs - cesium (55)";
constexpr static char frAlphaElementCs[] = "Cs - Césium (55)";
constexpr static char esAlphaElementCs[] = "Cs - Cesio (55)";
constexpr static char deAlphaElementCs[] = "Cs - Cäsium (55)";
constexpr static char ptAlphaElementCs[] = "Cs - Césio (55)";
constexpr static char enAlphaElementCu[] = "Cu - Copper (29)";
constexpr static char frAlphaElementCu[] = "Cu - Cuivre (29)";
constexpr static char esAlphaElementCu[] = "Cu - Cobre (29)";
constexpr static char deAlphaElementCu[] = "Cu - Kupfer (29)";
constexpr static char ptAlphaElementCu[] = "Cu - Cobre (29)";
constexpr static char enAlphaElementDb[] = "Db - Dubnium (105)";
constexpr static char frAlphaElementDb[] = "Db - Dubnium (105)";
constexpr static char esAlphaElementDb[] = "Db - dubnio (105)";
constexpr static char deAlphaElementDb[] = "Db - Dubnium (105)";
constexpr static char ptAlphaElementDb[] = "Db - Dubnium (105)";
constexpr static char enAlphaElementDs[] = "Ds - Darmstadtium (110)";
constexpr static char frAlphaElementDs[] = "Ds - Darmstadtium (110)";
constexpr static char esAlphaElementDs[] = "Ds - Darmstadtium (110)";
constexpr static char deAlphaElementDs[] = "Ds - Darmstadtium (110)";
constexpr static char ptAlphaElementDs[] = "Ds - Darmstadtium (110)";
constexpr static char enAlphaElementDy[] = "Dy - Dysprosium (66)";
constexpr static char frAlphaElementDy[] = "Dy - Dysprosium (66)";
constexpr static char esAlphaElementDy[] = "Dy - Disprosio (66)";
constexpr static char deAlphaElementDy[] = "Dy - Dysprosium (66)";
constexpr static char ptAlphaElementDy[] = "Dy - Disprósio (66)";
constexpr static char enAlphaElementEr[] = "Er - Erbium (68)";
constexpr static char frAlphaElementEr[] = "Er - Erbium (68)";
constexpr static char esAlphaElementEr[] = "Er - Erbio (68)";
constexpr static char deAlphaElementEr[] = "Er - Erbium (68)";
constexpr static char ptAlphaElementEr[] = "Er - Erbium (68)";
constexpr static char enAlphaElementEs[] = "Es - Einsteinium (99)";
constexpr static char frAlphaElementEs[] = "Es - Einsteinium (99)";
constexpr static char esAlphaElementEs[] = "Es - Einstenio (99)";
constexpr static char deAlphaElementEs[] = "Es - Einsteinium (99)";
constexpr static char ptAlphaElementEs[] = "Es - Einsteinium (99)";
constexpr static char enAlphaElementEu[] = "Eu - Europium (63)";
constexpr static char frAlphaElementEu[] = "Eu - Europium (63)";
constexpr static char esAlphaElementEu[] = "Eu - Europio (63)";
constexpr static char deAlphaElementEu[] = "Eu - Europium (63)";
constexpr static char ptAlphaElementEu[] = "Eu - Európio (63)";
constexpr static char enAlphaElementF[] = "F - Fluorine (9)";
constexpr static char frAlphaElementF[] = "F - Fluor (9)";
constexpr static char esAlphaElementF[] = "F - Flúor (9)";
constexpr static char deAlphaElementF[] = "F - Fluor (9)";
constexpr static char ptAlphaElementF[] = "F - Flúor (9)";
constexpr static char enAlphaElementFe[] = "Fe - Iron (26)";
constexpr static char frAlphaElementFe[] = "Fe - Fer (26)";
constexpr static char esAlphaElementFe[] = "Fe - Hierro (26)";
constexpr static char deAlphaElementFe[] = "Fe - Eisen (26)";
constexpr static char ptAlphaElementFe[] = "Fe - Ferro (26)";
constexpr static char enAlphaElementFl[] = "Fl - Flerovium (114)";
constexpr static char frAlphaElementFl[] = "Fl - Flérovium (114)";
constexpr static char esAlphaElementFl[] = "Fl - Flerovium (114)";
constexpr static char deAlphaElementFl[] = "Fl - Flerovium (114)";
constexpr static char ptAlphaElementFl[] = "Fl - Fleróvio (114)";
constexpr static char enAlphaElementFm[] = "Fm - Fermium (100)";
constexpr static char frAlphaElementFm[] = "Fm - Fermium (100)";
constexpr static char esAlphaElementFm[] = "Fm - Fermio (100)";
constexpr static char deAlphaElementFm[] = "Fm - Fermium (100)";
constexpr static char ptAlphaElementFm[] = "Fm - Fermium (100)";
constexpr static char enAlphaElementFr[] = "Fr - francium (223)";
constexpr static char frAlphaElementFr[] = "Fr - Francium (223)";
constexpr static char esAlphaElementFr[] = "Fr - Francio (223)";
constexpr static char deAlphaElementFr[] = "Fr - Francium (223)";
constexpr static char ptAlphaElementFr[] = "Fr - Francium (223)";
constexpr static char enAlphaElementGa[] = "Ga - Gallium (32)";
constexpr static char frAlphaElementGa[] = "Ga - Gallium (32)";
constexpr static char esAlphaElementGa[] = "Ga - Galio (32)";
constexpr static char deAlphaElementGa[] = "Ga - Gallium (32)";
constexpr static char ptAlphaElementGa[] = "Ga - Gálio (32)";
constexpr static char enAlphaElementGd[] = "Gd - Gadolinium (64)";
constexpr static char frAlphaElementGd[] = "Gd - Gadolinium (64)";
constexpr static char esAlphaElementGd[] = "Gd - Gadolinio (64)";
constexpr static char deAlphaElementGd[] = "Gd - Gadolinium (64)";
constexpr static char ptAlphaElementGd[] = "Gd - Gadolínio (64)";
constexpr static char enAlphaElementGe[] = "Ge - Germanium (32)";
constexpr static char frAlphaElementGe[] = "Ge - Germanium (32)";
constexpr static char esAlphaElementGe[] = "Ge - Germanio (32)";
constexpr static char deAlphaElementGe[] = "Ge - Germanium (32)";
constexpr static char ptAlphaElementGe[] = "Ge - Germânio (32)";
constexpr static char enAlphaElementH[] = "H - Hydrogen (1)";
constexpr static char frAlphaElementH[] = "H - Hydrogène (1)";
constexpr static char esAlphaElementH[] = "H - Hidrógeno (1)";
constexpr static char deAlphaElementH[] = "H - Wasserstoff (1)";
constexpr static char ptAlphaElementH[] = "H - Hidrogênio (1)";
constexpr static char enAlphaElementHe[] = "He - Helium (2)";
constexpr static char frAlphaElementHe[] = "He - Hélium (2)";
constexpr static char esAlphaElementHe[] = "He - Helio (2)";
constexpr static char deAlphaElementHe[] = "He - Helium (2)";
constexpr static char ptAlphaElementHe[] = "He - Hélio (2)";
constexpr static char enAlphaElementHf[] = "Hf - Hafnium (72)";
constexpr static char frAlphaElementHf[] = "Hf - Hafnium (72)";
constexpr static char esAlphaElementHf[] = "Hf - Hafnio (72)";
constexpr static char deAlphaElementHf[] = "Hf - Hafnium (72)";
constexpr static char ptAlphaElementHf[] = "Hf - Háfnio (72)";
constexpr static char enAlphaElementHg[] = "Hg - Mercury (80)";
constexpr static char frAlphaElementHg[] = "Hg - Mercure (80)";
constexpr static char esAlphaElementHg[] = "Hg - Mercurio (80)";
constexpr static char deAlphaElementHg[] = "Hg - Quecksilber (80)";
constexpr static char ptAlphaElementHg[] = "Hg - Mercúrio (80)";
constexpr static char enAlphaElementHo[] = "Ho - holmium (67)";
constexpr static char frAlphaElementHo[] = "Ho - Holmium (67)";
constexpr static char esAlphaElementHo[] = "Ho - Holmio (67)";
constexpr static char deAlphaElementHo[] = "Ho - Holmium (67)";
constexpr static char ptAlphaElementHo[] = "Ho - Holmium (67)";
constexpr static char enAlphaElementHs[] = "Hs - Hassium (108)";
constexpr static char frAlphaElementHs[] = "Hs - Hassium (108)";
constexpr static char esAlphaElementHs[] = "Hs - Hassio (108)";
constexpr static char deAlphaElementHs[] = "Hs - Hassium (108)";
constexpr static char ptAlphaElementHs[] = "Hs - Hassium (108)";
constexpr static char enAlphaElementI[] = "I - Iodine (53)";
constexpr static char frAlphaElementI[] = "I - Iode (53)";
constexpr static char esAlphaElementI[] = "I - Yodo (53)";
constexpr static char deAlphaElementI[] = "I - Jod (53)";
constexpr static char ptAlphaElementI[] = "I - Iodo (53)";
constexpr static char enAlphaElementIn[] = "In - Indium (49)";
constexpr static char frAlphaElementIn[] = "In - Indium (49)";
constexpr static char esAlphaElementIn[] = "In - Indio (49)";
constexpr static char deAlphaElementIn[] = "In - Indium (49)";
constexpr static char ptAlphaElementIn[] = "In - Indio (49)";
constexpr static char enAlphaElementIr[] = "Ir - Iridium (77)";
constexpr static char frAlphaElementIr[] = "Ir - Iridium (77)";
constexpr static char esAlphaElementIr[] = "Ir - Iridio (77)";
constexpr static char deAlphaElementIr[] = "Ir - Iridium (77)";
constexpr static char ptAlphaElementIr[] = "Ir - Irídio (77)";
constexpr static char enAlphaElementK[] = "K - Potassium (19)";
constexpr static char frAlphaElementK[] = "K - Potassium (19)";
constexpr static char esAlphaElementK[] = "K - Potasio (19)";
constexpr static char deAlphaElementK[] = "K - Kalium (19)";
constexpr static char ptAlphaElementK[] = "K - Potássio (19)";
constexpr static char enAlphaElementKr[] = "Kr - Krypton (36)";
constexpr static char frAlphaElementKr[] = "Kr - Krypton (36)";
constexpr static char esAlphaElementKr[] = "Kr - Criptón (36)";
constexpr static char deAlphaElementKr[] = "Kr - Krypton (36)";
constexpr static char ptAlphaElementKr[] = "Kr - Criptônio (36)";
constexpr static char enAlphaElementLa[] = "La - Lanthanum (57)";
constexpr static char frAlphaElementLa[] = "La - Lanthane (57)";
constexpr static char esAlphaElementLa[] = "La - Lantano (57)";
constexpr static char deAlphaElementLa[] = "La - Lanthan (57)";
constexpr static char ptAlphaElementLa[] = "La - Lantânio (57)";
constexpr static char enAlphaElementLi[] = "Li - Lithium (3)";
constexpr static char frAlphaElementLi[] = "Li - Lithium (3)";
constexpr static char esAlphaElementLi[] = "Li - Litio (3)";
constexpr static char deAlphaElementLi[] = "Li - Lithium (3)";
constexpr static char ptAlphaElementLi[] = "Li - Lítio (3)";
constexpr static char enAlphaElementLr[] = "Lr - Lawrencium (103)";
constexpr static char frAlphaElementLr[] = "Lr - Lawrencium (103)";
constexpr static char esAlphaElementLr[] = "Lr - Lawrencio (103)";
constexpr static char deAlphaElementLr[] = "Lr - lawrencium (103)";
constexpr static char ptAlphaElementLr[] = "Lr - Lawrencium (103)";
constexpr static char enAlphaElementLu[] = "Lu - Lutecium (71)";
constexpr static char frAlphaElementLu[] = "Lu - Lutécium (71)";
constexpr static char esAlphaElementLu[] = "Lu - Lutecio (71)";
constexpr static char deAlphaElementLu[] = "Lu - Lutetium (71)";
constexpr static char ptAlphaElementLu[] = "Lu - Lutécio (71)";
constexpr static char enAlphaElementLv[] = "Lv - Livermorium (116)";
constexpr static char frAlphaElementLv[] = "Lv - Livermorium (116)";
constexpr static char esAlphaElementLv[] = "Lv - Livermorium (116)";
constexpr static char deAlphaElementLv[] = "Lv - Livermorium (116)";
constexpr static char ptAlphaElementLv[] = "Lv - Livermorium (116)";
constexpr static char enAlphaElementMc[] = "Mc - Moscovium (115)";
constexpr static char frAlphaElementMc[] = "Mc - Moscovium (115)";
constexpr static char esAlphaElementMc[] = "Mc - Moscovium (115)";
constexpr static char deAlphaElementMc[] = "Mc - Moscovium (115)";
constexpr static char ptAlphaElementMc[] = "Mc - Moscovium (115)";
constexpr static char enAlphaElementMd[] = "Md - Mendélévium (101)";
constexpr static char frAlphaElementMd[] = "Md - Mendélévium (101)";
constexpr static char esAlphaElementMd[] = "Md - Mendelevio (101)";
constexpr static char deAlphaElementMd[] = "Md - Mendelevium (101)";
constexpr static char ptAlphaElementMd[] = "Md - Mendelevium (101)";
constexpr static char enAlphaElementMg[] = "Mg - Magnesium (12)";
constexpr static char frAlphaElementMg[] = "Mg - Magnésium (12)";
constexpr static char esAlphaElementMg[] = "Mg - Magnesio (12)";
constexpr static char deAlphaElementMg[] = "Mg - Magnesium (12)";
constexpr static char ptAlphaElementMg[] = "Mg - Magnésio (12)";
constexpr static char enAlphaElementMn[] = "Mn - Manganese (25)";
constexpr static char frAlphaElementMn[] = "Mn - Manganèse (25)";
constexpr static char esAlphaElementMn[] = "Mn - Manganeso (25)";
constexpr static char deAlphaElementMn[] = "Mn - Mangan (25)";
constexpr static char ptAlphaElementMn[] = "Mn - Manganês (25)";
constexpr static char enAlphaElementMo[] = "Mo - Molybdenum (42)";
constexpr static char frAlphaElementMo[] = "Mo - Molybdène (42)";
constexpr static char esAlphaElementMo[] = "Mo - Molibdeno (42)";
constexpr static char deAlphaElementMo[] = "Mo - Molybdän (42)";
constexpr static char ptAlphaElementMo[] = "Mo - Molibdênio (42)";
constexpr static char enAlphaElementMt[] = "Mt - Meitnerium (109)";
constexpr static char frAlphaElementMt[] = "Mt - Meitnérium (109)";
constexpr static char esAlphaElementMt[] = "Mt - Meitnerio (109)";
constexpr static char deAlphaElementMt[] = "Mt - Meitnerium (109)";
constexpr static char ptAlphaElementMt[] = "Mt - Meitnerium (109)";
constexpr static char enAlphaElementN[] = "N - Nitrogen (7)";
constexpr static char frAlphaElementN[] = "N - Azote (7)";
constexpr static char esAlphaElementN[] = "N - Nitrógeno (7)";
constexpr static char deAlphaElementN[] = "N - Stickstoff (7)";
constexpr static char ptAlphaElementN[] = "N - Azoto (7)";
constexpr static char enAlphaElementNa[] = "Na - Sodium (11)";
constexpr static char frAlphaElementNa[] = "Na - Sodium (11)";
constexpr static char esAlphaElementNa[] = "Na - Sodio (11)";
constexpr static char deAlphaElementNa[] = "Na - Natrium (11)";
constexpr static char ptAlphaElementNa[] = "Na - Sódio (11)";
constexpr static char enAlphaElementNb[] = "Nb - Niobium (41)";
constexpr static char frAlphaElementNb[] = "Nb - Niobium (41)";
constexpr static char esAlphaElementNb[] = "Nb - Niobio (41)";
constexpr static char deAlphaElementNb[] = "Nb - Niob (41)";
constexpr static char ptAlphaElementNb[] = "Nb - Nióbio (41)";
constexpr static char enAlphaElementNd[] = "Nd - Neodymium (60)";
constexpr static char frAlphaElementNd[] = "Nd - Néodyme (60)";
constexpr static char esAlphaElementNd[] = "Nd - Neodimio (60)";
constexpr static char deAlphaElementNd[] = "Nd - Neodym (60)";
constexpr static char ptAlphaElementNd[] = "Nd - Neodímio (60)";
constexpr static char enAlphaElementNe[] = "Ne - Neon (10)";
constexpr static char frAlphaElementNe[] = "Ne - Néon (10)";
constexpr static char esAlphaElementNe[] = "Ne - Neón (10)";
constexpr static char deAlphaElementNe[] = "Ne - Neon (10)";
constexpr static char ptAlphaElementNe[] = "Ne - Néon (10)";
constexpr static char enAlphaElementNh[] = "Nh - Nihonium (113)";
constexpr static char frAlphaElementNh[] = "Nh - Nihonium (113)";
constexpr static char esAlphaElementNh[] = "Nh - Nihonium (113)";
constexpr static char deAlphaElementNh[] = "Nh - Nihonium (113)";
constexpr static char ptAlphaElementNh[] = "Nh - Nihonium (113)";
constexpr static char enAlphaElementNi[] = "Ni - Nickel (28)";
constexpr static char frAlphaElementNi[] = "Ni - Nickel (28)";
constexpr static char esAlphaElementNi[] = "Ni - Níquel (28)";
constexpr static char deAlphaElementNi[] = "Ni - Nickel (28)";
constexpr static char ptAlphaElementNi[] = "Ni - Níquel (28)";
constexpr static char enAlphaElementNo[] = "No - Nobelium (102)";
constexpr static char frAlphaElementNo[] = "No - Nobélium (102)";
constexpr static char esAlphaElementNo[] = "No - Nobelio (102)";
constexpr static char deAlphaElementNo[] = "No - nobelium (102)";
constexpr static char ptAlphaElementNo[] = "No - Nobelium (102)";
constexpr static char enAlphaElementNp[] = "Np - Neptunium (93)";
constexpr static char frAlphaElementNp[] = "Np - Neptunium (93)";
constexpr static char esAlphaElementNp[] = "Np - Neptunio (93)";
constexpr static char deAlphaElementNp[] = "Np - Neptunium (93)";
constexpr static char ptAlphaElementNp[] = "Np - Neptúnio (93)";
constexpr static char enAlphaElementO[] = "O - Oxygen (8)";
constexpr static char frAlphaElementO[] = "O - Oxygène (8)";
constexpr static char esAlphaElementO[] = "O - Oxígeno (8)";
constexpr static char deAlphaElementO[] = "O - Sauerstoff (8)";
constexpr static char ptAlphaElementO[] = "O - Oxigênio (8)";
constexpr static char enAlphaElementOg[] = "Og - Oganesson (118)";
constexpr static char frAlphaElementOg[] = "Og - Oganesson (118)";
constexpr static char esAlphaElementOg[] = "Og - Oganesson (118)";
constexpr static char deAlphaElementOg[] = "Og - Oganesson (118)";
constexpr static char ptAlphaElementOg[] = "Og - Oganesson (118)";
constexpr static char enAlphaElementOs[] = "Os - Osmium (76)";
constexpr static char frAlphaElementOs[] = "Os - Osmium (76)";
constexpr static char esAlphaElementOs[] = "Os - Osmio (76)";
constexpr static char deAlphaElementOs[] = "Os - Osmium (76)";
constexpr static char ptAlphaElementOs[] = "Os - Osmio (76)";
constexpr static char enAlphaElementP[] = "P - Phosphorus (15)";
constexpr static char frAlphaElementP[] = "P - Phosphore (15)";
constexpr static char esAlphaElementP[] = "P - Fósforo (15)";
constexpr static char deAlphaElementP[] = "P - Phosphor (15)";
constexpr static char ptAlphaElementP[] = "P - Fósforo (15)";
constexpr static char enAlphaElementPa[] = "Pa - Protactinium (91)";
constexpr static char frAlphaElementPa[] = "Pa - Protactinium (91)";
constexpr static char esAlphaElementPa[] = "Pa - Protactinio (91)";
constexpr static char deAlphaElementPa[] = "Pa - Protaktinium (91)";
constexpr static char ptAlphaElementPa[] = "Pa - Protactínio (91)";
constexpr static char enAlphaElementPb[] = "Pb - Lead (82)";
constexpr static char frAlphaElementPb[] = "Pb - Plomb (82)";
constexpr static char esAlphaElementPb[] = "Pb - Conducir (82)";
constexpr static char deAlphaElementPb[] = "Pb - führen (82)";
constexpr static char ptAlphaElementPb[] = "Pb - Levar (82)";
constexpr static char enAlphaElementPd[] = "Pd - Palladium (46)";
constexpr static char frAlphaElementPd[] = "Pd - Palladium (46)";
constexpr static char esAlphaElementPd[] = "Pd - Paladio (46)";
constexpr static char deAlphaElementPd[] = "Pd - Palladium (46)";
constexpr static char ptAlphaElementPd[] = "Pd - Paládio (46)";
constexpr static char enAlphaElementPm[] = "Pm - Promethium (61)";
constexpr static char frAlphaElementPm[] = "Pm - Prométhium (61)";
constexpr static char esAlphaElementPm[] = "Pm - Prometeo (61)";
constexpr static char deAlphaElementPm[] = "Pm - Promethium (61)";
constexpr static char ptAlphaElementPm[] = "Pm - Promécio (61)";
constexpr static char enAlphaElementPo[] = "Po - Polonium (84)";
constexpr static char frAlphaElementPo[] = "Po - Polonium (84)";
constexpr static char esAlphaElementPo[] = "Po - Polonio (84)";
constexpr static char deAlphaElementPo[] = "Po - Polonium (84)";
constexpr static char ptAlphaElementPo[] = "Po - Polônio (84)";
constexpr static char enAlphaElementPr[] = "Pr - praseodymium (59)";
constexpr static char frAlphaElementPr[] = "Pr - Praséodyme (59)";
constexpr static char esAlphaElementPr[] = "Pr - Praseodimio (59)";
constexpr static char deAlphaElementPr[] = "Pr - Praseodym (59)";
constexpr static char ptAlphaElementPr[] = "Pr - Praseodímio (59)";
constexpr static char enAlphaElementPt[] = "Pt - Platinum (78)";
constexpr static char frAlphaElementPt[] = "Pt - Platine (78)";
constexpr static char esAlphaElementPt[] = "Pt - Platino (78)";
constexpr static char deAlphaElementPt[] = "Pt - Platin (78)";
constexpr static char ptAlphaElementPt[] = "Pt - Platina (78)";
constexpr static char enAlphaElementPu[] = "Pu - Plutonium (94)";
constexpr static char frAlphaElementPu[] = "Pu - Plutonium (94)";
constexpr static char esAlphaElementPu[] = "Pu - Plutonio (94)";
constexpr static char deAlphaElementPu[] = "Pu - Plutonium (94)";
constexpr static char ptAlphaElementPu[] = "Pu - Plutônio (94)";
constexpr static char enAlphaElementRa[] = "Ra - Radium (88)";
constexpr static char frAlphaElementRa[] = "Ra - Radium (88)";
constexpr static char esAlphaElementRa[] = "Ra - Radio (88)";
constexpr static char deAlphaElementRa[] = "Ra - Radium (88)";
constexpr static char ptAlphaElementRa[] = "Ra - Rádio (88)";
constexpr static char enAlphaElementRb[] = "Rb - Rubidium (37)";
constexpr static char frAlphaElementRb[] = "Rb - Rubidium (37)";
constexpr static char esAlphaElementRb[] = "Rb - Rubidio (37)";
constexpr static char deAlphaElementRb[] = "Rb - Rubidium (37)";
constexpr static char ptAlphaElementRb[] = "Rb - Rubídio (37)";
constexpr static char enAlphaElementRe[] = "Re - Rhenium (75)";
constexpr static char frAlphaElementRe[] = "Re - Rhénium (75)";
constexpr static char esAlphaElementRe[] = "Re - Renio (75)";
constexpr static char deAlphaElementRe[] = "Re - Rhenium (75)";
constexpr static char ptAlphaElementRe[] = "Re - Rênio (75)";
constexpr static char enAlphaElementRf[] = "Rf - Rutherfordium (104)";
constexpr static char frAlphaElementRf[] = "Rf - Rutherfordium (104)";
constexpr static char esAlphaElementRf[] = "Rf - Rutherfordio (104)";
constexpr static char deAlphaElementRf[] = "Rf - rutherfordium (104)";
constexpr static char ptAlphaElementRf[] = "Rf - Rutherfordium (104)";
constexpr static char enAlphaElementRg[] = "Rg - Roentgenium (111)";
constexpr static char frAlphaElementRg[] = "Rg - Roentgenium (111)";
constexpr static char esAlphaElementRg[] = "Rg - Roentgenio (111)";
constexpr static char deAlphaElementRg[] = "Rg - Roentgenium (111)";
constexpr static char ptAlphaElementRg[] = "Rg - Roentgenium (111)";
constexpr static char enAlphaElementRh[] = "Rh - rhodium (45)";
constexpr static char frAlphaElementRh[] = "Rh - Rhodium (45)";
constexpr static char esAlphaElementRh[] = "Rh - Rodio (45)";
constexpr static char deAlphaElementRh[] = "Rh - Rhodium (45)";
constexpr static char ptAlphaElementRh[] = "Rh - Ródio (45)";
constexpr static char enAlphaElementRn[] = "Rn - Radon (86)";
constexpr static char frAlphaElementRn[] = "Rn - Radon (86)";
constexpr static char esAlphaElementRn[] = "Rn - Radón (86)";
constexpr static char deAlphaElementRn[] = "Rn - Radon (86)";
constexpr static char ptAlphaElementRn[] = "Rn - Radão (86)";
constexpr static char enAlphaElementRu[] = "Ru - Ruthenium (44)";
constexpr static char frAlphaElementRu[] = "Ru - Ruthénium (44)";
constexpr static char esAlphaElementRu[] = "Ru - Rutenio (44)";
constexpr static char deAlphaElementRu[] = "Ru - Ruthenium (44)";
constexpr static char ptAlphaElementRu[] = "Ru - Rutênio (44)";
constexpr static char enAlphaElementS[] = "S - Sulfur (16)";
constexpr static char frAlphaElementS[] = "S - Soufre (16)";
constexpr static char esAlphaElementS[] = "S - Azufre (16)";
constexpr static char deAlphaElementS[] = "S - Schwefel (16)";
constexpr static char ptAlphaElementS[] = "S - Enxofre (16)";
constexpr static char enAlphaElementSb[] = "Sb - Antimony (51)";
constexpr static char frAlphaElementSb[] = "Sb - Antimoine (51)";
constexpr static char esAlphaElementSb[] = "Sb - Antimonio (51)";
constexpr static char deAlphaElementSb[] = "Sb - Antimon (51)";
constexpr static char ptAlphaElementSb[] = "Sb - Antimônio (51)";
constexpr static char enAlphaElementSc[] = "Sc - Scandium (21)";
constexpr static char frAlphaElementSc[] = "Sc - Scandium (21)";
constexpr static char esAlphaElementSc[] = "Sc - Escandio (21)";
constexpr static char deAlphaElementSc[] = "Sc - Scandium (21)";
constexpr static char ptAlphaElementSc[] = "Sc - Escândio (21)";
constexpr static char enAlphaElementSe[] = "Se - Selenium (34)";
constexpr static char frAlphaElementSe[] = "Se - Sélénium (34)";
constexpr static char esAlphaElementSe[] = "Se - Selenio (34)";
constexpr static char deAlphaElementSe[] = "Se - Selen (34)";
constexpr static char ptAlphaElementSe[] = "Se - Selênio (34)";
constexpr static char enAlphaElementSg[] = "Sg - Seaborgium (106)";
constexpr static char frAlphaElementSg[] = "Sg - Seaborgium (106)";
constexpr static char esAlphaElementSg[] = "Sg - Seaborgio (106)";
constexpr static char deAlphaElementSg[] = "Sg - Seaborgium (106)";
constexpr static char ptAlphaElementSg[] = "Sg - Seaborgium (106)";
constexpr static char enAlphaElementSi[] = "Si - Silicon (14)";
constexpr static char frAlphaElementSi[] = "Si - Silicium (14)";
constexpr static char esAlphaElementSi[] = "Si - Silicio (14)";
constexpr static char deAlphaElementSi[] = "Si - Silizium (14)";
constexpr static char ptAlphaElementSi[] = "Si - Silício (14)";
constexpr static char enAlphaElementSm[] = "Sm - Samarium (62)";
constexpr static char frAlphaElementSm[] = "Sm - Samarium (62)";
constexpr static char esAlphaElementSm[] = "Sm - Samario (62)";
constexpr static char deAlphaElementSm[] = "Sm - Samarium (62)";
constexpr static char ptAlphaElementSm[] = "Sm - Samário (62)";
constexpr static char enAlphaElementSn[] = "Sn - Tin (50)";
constexpr static char frAlphaElementSn[] = "Sn - Etain (50)";
constexpr static char esAlphaElementSn[] = "Sn - Estaño (50)";
constexpr static char deAlphaElementSn[] = "Sn - Zinn (50)";
constexpr static char ptAlphaElementSn[] = "Sn - Estanho (50)";
constexpr static char enAlphaElementSr[] = "Sr - Strontium (38)";
constexpr static char frAlphaElementSr[] = "Sr - Strontium (38)";
constexpr static char esAlphaElementSr[] = "Sr - Estroncio (38)";
constexpr static char deAlphaElementSr[] = "Sr - Strontium (38)";
constexpr static char ptAlphaElementSr[] = "Sr - Estrôncio (38)";
constexpr static char enAlphaElementTa[] = "Ta - Tantalum (73)";
constexpr static char frAlphaElementTa[] = "Ta - Tantale (73)";
constexpr static char esAlphaElementTa[] = "Ta - Tantalio (73)";
constexpr static char deAlphaElementTa[] = "Ta - Tantal (73)";
constexpr static char ptAlphaElementTa[] = "Ta - Tântalo (73)";
constexpr static char enAlphaElementTb[] = "Tb - Terbium (65)";
constexpr static char frAlphaElementTb[] = "Tb - Terbium (65)";
constexpr static char esAlphaElementTb[] = "Tb - Terbio (65)";
constexpr static char deAlphaElementTb[] = "Tb - Terbium (65)";
constexpr static char ptAlphaElementTb[] = "Tb - Térbio (65)";
constexpr static char enAlphaElementTc[] = "Tc - Technetium (43)";
constexpr static char frAlphaElementTc[] = "Tc - Technétium (43)";
constexpr static char esAlphaElementTc[] = "Tc - Tecnecio (43)";
constexpr static char deAlphaElementTc[] = "Tc - Technetium (43)";
constexpr static char ptAlphaElementTc[] = "Tc - Tecnécio (43)";
constexpr static char enAlphaElementTe[] = "Te - Tellurium (52)";
constexpr static char frAlphaElementTe[] = "Te - Tellure (52)";
constexpr static char esAlphaElementTe[] = "Te - Telurio (52)";
constexpr static char deAlphaElementTe[] = "Te - Tellur (52)";
constexpr static char ptAlphaElementTe[] = "Te - Telúrio (52)";
constexpr static char enAlphaElementTh[] = "Th - Thorium (90)";
constexpr static char frAlphaElementTh[] = "Th - Thorium (90)";
constexpr static char esAlphaElementTh[] = "Th - Torio (90)";
constexpr static char deAlphaElementTh[] = "Th - Thorium (90)";
constexpr static char ptAlphaElementTh[] = "Th - Tório (90)";
constexpr static char enAlphaElementTi[] = "Ti - Titanium (22)";
constexpr static char frAlphaElementTi[] = "Ti - Titane (22)";
constexpr static char esAlphaElementTi[] = "Ti - Titanio (22)";
constexpr static char deAlphaElementTi[] = "Ti - Titan (22)";
constexpr static char ptAlphaElementTi[] = "Ti - Titânio (22)";
constexpr static char enAlphaElementTl[] = "Tl - Thallium (81)";
constexpr static char frAlphaElementTl[] = "Tl - Thallium (81)";
constexpr static char esAlphaElementTl[] = "Tl - Talio (81)";
constexpr static char deAlphaElementTl[] = "Tl - Thallium (81)";
constexpr static char ptAlphaElementTl[] = "Tl - Tálio (81)";
constexpr static char enAlphaElementTm[] = "Tm - Thulium (69)";
constexpr static char frAlphaElementTm[] = "Tm - Thulium (69)";
constexpr static char esAlphaElementTm[] = "Tm - Tulio (69)";
constexpr static char deAlphaElementTm[] = "Tm - Thulium (69)";
constexpr static char ptAlphaElementTm[] = "Tm - Túlio (69)";
constexpr static char enAlphaElementTs[] = "Ts - Tennesse (117)";
constexpr static char frAlphaElementTs[] = "Ts - Tennesse (117)";
constexpr static char esAlphaElementTs[] = "Ts - Tennesse (117)";
constexpr static char deAlphaElementTs[] = "Ts - Tennesse (117)";
constexpr static char ptAlphaElementTs[] = "Ts - Tennesse (117)";
constexpr static char enAlphaElementU[] = "U - Uranium (92)";
constexpr static char frAlphaElementU[] = "U - Uranium (92)";
constexpr static char esAlphaElementU[] = "U - Uranio (92)";
constexpr static char deAlphaElementU[] = "U - Uran (92)";
constexpr static char ptAlphaElementU[] = "U - Urânio (92)";
constexpr static char enAlphaElementUbn[] = "Ubn - Unbinilium (120)";
constexpr static char frAlphaElementUbn[] = "Ubn - Unbinilium (120)";
constexpr static char esAlphaElementUbn[] = "Ubn - Unbinilio (120)";
constexpr static char deAlphaElementUbn[] = "Ubn - Unbinilium (120)";
constexpr static char ptAlphaElementUbn[] = "Ubn - Unbinílio (120)";
constexpr static char enAlphaElementUue[] = "Uue - Ununennium (119)";
constexpr static char frAlphaElementUue[] = "Uue - Ununennium (119)";
constexpr static char esAlphaElementUue[] = "Uue - Ununennio (119)";
constexpr static char deAlphaElementUue[] = "Uue - Ununennium (119)";
constexpr static char ptAlphaElementUue[] = "Uue - Ununénnio (119)";
constexpr static char enAlphaElementV[] = "V - Vanadium (23)";
constexpr static char frAlphaElementV[] = "V - Vanadium (23)";
constexpr static char esAlphaElementV[] = "V - Vanadio (23)";
constexpr static char deAlphaElementV[] = "V - Vanadium (23)";
constexpr static char ptAlphaElementV[] = "V - Vanádio (23)";
constexpr static char enAlphaElementW[] = "W - Tungsten (74)";
constexpr static char frAlphaElementW[] = "W - Tungstène (74)";
constexpr static char esAlphaElementW[] = "W - Tungsteno (74)";
constexpr static char deAlphaElementW[] = "W - Wolfram (74)";
constexpr static char ptAlphaElementW[] = "W - Tungstênio (74)";
constexpr static char enAlphaElementXe[] = "Xe - Xenon (54)";
constexpr static char frAlphaElementXe[] = "Xe - Xénon (54)";
constexpr static char esAlphaElementXe[] = "Xe - Cenón (54)";
constexpr static char deAlphaElementXe[] = "Xe - Xenon (54)";
constexpr static char ptAlphaElementXe[] = "Xe - Xênon (54)";
constexpr static char enAlphaElementY[] = "Y - Yttrium (39)";
constexpr static char frAlphaElementY[] = "Y - Yttrium (39)";
constexpr static char esAlphaElementY[] = "Y - Itrio (39)";
constexpr static char deAlphaElementY[] = "Y - Yttrium (39)";
constexpr static char ptAlphaElementY[] = "Y - Itrio (39)";
constexpr static char enAlphaElementYb[] = "Yb - Ytterbium (70)";
constexpr static char frAlphaElementYb[] = "Yb - Ytterbium (70)";
constexpr static char esAlphaElementYb[] = "Yb - Iterbio (70)";
constexpr static char deAlphaElementYb[] = "Yb - Ytterbium (70)";
constexpr static char ptAlphaElementYb[] = "Yb - Itérbio (70)";
constexpr static char enAlphaElementZn[] = "Zn - Zinc (30)";
constexpr static char frAlphaElementZn[] = "Zn - Zinc (30)";
constexpr static char esAlphaElementZn[] = "Zn - Zinc (30)";
constexpr static char deAlphaElementZn[] = "Zn - Zink (30)";
constexpr static char ptAlphaElementZn[] = "Zn - Zinco (30)";
constexpr static char enAlphaElementZr[] = "Zr - Zirconium (40)";
constexpr static char frAlphaElementZr[] = "Zr - Zirconium (40)";
constexpr static char esAlphaElementZr[] = "Zr - Circonio (40)";
constexpr static char deAlphaElementZr[] = "Zr - Zirkonium (40)";
constexpr static char ptAlphaElementZr[] = "Zr - Zircônio (40)";
constexpr static char enAngleUnit[] = "Angle measure";
constexpr static char frAngleUnit[] = "Unité d'angle";
constexpr static char esAngleUnit[] = "Medida del ángulo";
constexpr static char deAngleUnit[] = "Winkeleinheit";
constexpr static char ptAngleUnit[] = "Valor do angulo";
constexpr static char enApproximateSolution[] = "Approximate solution";
constexpr static char frApproximateSolution[] = "Solution approchée";
constexpr static char esApproximateSolution[] = "Solución aproximada";
constexpr static char deApproximateSolution[] = "Ungefähre Lösung";
constexpr static char ptApproximateSolution[] = "Solução aproximada";
constexpr static char enApproximateSolutionIntervalInstruction0[] = "Enter the interval to search";
constexpr static char frApproximateSolutionIntervalInstruction0[] = "Entrez l'intervalle dans lequel";
constexpr static char esApproximateSolutionIntervalInstruction0[] = "Introduzca el intervalo para";
constexpr static char deApproximateSolutionIntervalInstruction0[] = "Geben Sie das Intervall für die Suche";
constexpr static char ptApproximateSolutionIntervalInstruction0[] = "Digite o intervalo para procurar";
constexpr static char enApproximateSolutionIntervalInstruction1[] = "for an approximate solution";
constexpr static char frApproximateSolutionIntervalInstruction1[] = "rechercher une solution approchée";
constexpr static char esApproximateSolutionIntervalInstruction1[] = "buscar una solución aproximada";
constexpr static char deApproximateSolutionIntervalInstruction1[] = "nach einer ungefähren Lösung ein";
constexpr static char ptApproximateSolutionIntervalInstruction1[] = "uma solução aproximada";
constexpr static char enApps[] = "Applications";
constexpr static char frApps[] = "Applications";
constexpr static char esApps[] = "Aplicaciones";
constexpr static char deApps[] = "Anwendungen";
constexpr static char ptApps[] = "Aplicações";
constexpr static char enAppsCapital[] = "OMEGA";
constexpr static char frAppsCapital[] = "OMEGA";
constexpr static char esAppsCapital[] = "OMEGA";
constexpr static char deAppsCapital[] = "OMEGA";
constexpr static char ptAppsCapital[] = "OMEGA";
constexpr static char enArithmetic[] = "Arithmetic";
constexpr static char frArithmetic[] = "Arithmétique";
constexpr static char esArithmetic[] = "Aritmética";
constexpr static char deArithmetic[] = "Arithmetik";
constexpr static char ptArithmetic[] = "Aritmética";
constexpr static char enAtomApp[] = "Atom";
constexpr static char frAtomApp[] = "Atome";
constexpr static char esAtomApp[] = "Atomo";
constexpr static char deAtomApp[] = "Atom";
constexpr static char ptAtomApp[] = "Atomo";
constexpr static char enAtomAppCapital[] = "ATOM";
constexpr static char frAtomAppCapital[] = "ATOME";
constexpr static char esAtomAppCapital[] = "ATOMO";
constexpr static char deAtomAppCapital[] = "ATOM";
constexpr static char ptAtomAppCapital[] = "ATOMO";
constexpr static char enAtomName_Actinium[] = "Actinium";
constexpr static char frAtomName_Actinium[] = "Actinium";
constexpr static char esAtomName_Actinium[] = "Actinio";
constexpr static char deAtomName_Actinium[] = "Actinium";
constexpr static char ptAtomName_Actinium[] = "Actínio";
constexpr static char enAtomName_Aluminium[] = "Aluminium";
constexpr static char frAtomName_Aluminium[] = "Aluminium";
constexpr static char esAtomName_Aluminium[] = "Aluminio";
constexpr static char deAtomName_Aluminium[] = "Aluminium";
constexpr static char ptAtomName_Aluminium[] = "Alumínio";
constexpr static char enAtomName_Americium[] = "Americium";
constexpr static char frAtomName_Americium[] = "Américium";
constexpr static char esAtomName_Americium[] = "Americio";
constexpr static char deAtomName_Americium[] = "Americium";
constexpr static char ptAtomName_Americium[] = "Amerício";
constexpr static char enAtomName_Antimony[] = "Antimony";
constexpr static char frAtomName_Antimony[] = "Antimoine";
constexpr static char esAtomName_Antimony[] = "Antimonio";
constexpr static char deAtomName_Antimony[] = "Antimon";
constexpr static char ptAtomName_Antimony[] = "Antimônio";
constexpr static char enAtomName_Argon[] = "Argon";
constexpr static char frAtomName_Argon[] = "Argon";
constexpr static char esAtomName_Argon[] = "Argón";
constexpr static char deAtomName_Argon[] = "Argon";
constexpr static char ptAtomName_Argon[] = "Argon";
constexpr static char enAtomName_Arsenic[] = "Arsenic";
constexpr static char frAtomName_Arsenic[] = "Arsenic";
constexpr static char esAtomName_Arsenic[] = "Arsénico";
constexpr static char deAtomName_Arsenic[] = "Arsen";
constexpr static char ptAtomName_Arsenic[] = "Arsênio";
constexpr static char enAtomName_Astatine[] = "Astatine";
constexpr static char frAtomName_Astatine[] = "Astatine";
constexpr static char esAtomName_Astatine[] = "Astato";
constexpr static char deAtomName_Astatine[] = "Astat";
constexpr static char ptAtomName_Astatine[] = "Astato";
constexpr static char enAtomName_Barium[] = "Barium";
constexpr static char frAtomName_Barium[] = "Baryum";
constexpr static char esAtomName_Barium[] = "Bario";
constexpr static char deAtomName_Barium[] = "Barium";
constexpr static char ptAtomName_Barium[] = "Bário";
constexpr static char enAtomName_Berkelium[] = "Berkelium";
constexpr static char frAtomName_Berkelium[] = "Berkélium";
constexpr static char esAtomName_Berkelium[] = "Berkelio";
constexpr static char deAtomName_Berkelium[] = "Berkelium";
constexpr static char ptAtomName_Berkelium[] = "Berquélio";
constexpr static char enAtomName_Beryllium[] = "Beryllium";
constexpr static char frAtomName_Beryllium[] = "Béryllium";
constexpr static char esAtomName_Beryllium[] = "Berilio";
constexpr static char deAtomName_Beryllium[] = "Beryllium";
constexpr static char ptAtomName_Beryllium[] = "Berilio";
constexpr static char enAtomName_Bismuth[] = "Bismuth";
constexpr static char frAtomName_Bismuth[] = "Bismuth";
constexpr static char esAtomName_Bismuth[] = "Bismuto";
constexpr static char deAtomName_Bismuth[] = "Bismut";
constexpr static char ptAtomName_Bismuth[] = "Bismuto";
constexpr static char enAtomName_Bohrium[] = "Bohrium";
constexpr static char frAtomName_Bohrium[] = "Bohrium";
constexpr static char esAtomName_Bohrium[] = "Bohrio";
constexpr static char deAtomName_Bohrium[] = "Bohrium";
constexpr static char ptAtomName_Bohrium[] = "Bóhrio";
constexpr static char enAtomName_Boron[] = "Boron";
constexpr static char frAtomName_Boron[] = "Bore";
constexpr static char esAtomName_Boron[] = "Boro";
constexpr static char deAtomName_Boron[] = "Bor";
constexpr static char ptAtomName_Boron[] = "Boro";
constexpr static char enAtomName_Bromine[] = "Bromine";
constexpr static char frAtomName_Bromine[] = "Brome";
constexpr static char esAtomName_Bromine[] = "Bromo";
constexpr static char deAtomName_Bromine[] = "Brom";
constexpr static char ptAtomName_Bromine[] = "Bromo";
constexpr static char enAtomName_Cadmium[] = "Cadmium";
constexpr static char frAtomName_Cadmium[] = "Cadmium";
constexpr static char esAtomName_Cadmium[] = "Cadmio";
constexpr static char deAtomName_Cadmium[] = "Cadmium";
constexpr static char ptAtomName_Cadmium[] = "Cádmio";
constexpr static char enAtomName_Caesium[] = "Caesium";
constexpr static char frAtomName_Caesium[] = "Césium";
constexpr static char esAtomName_Caesium[] = "Cesio";
constexpr static char deAtomName_Caesium[] = "Caesium";
constexpr static char ptAtomName_Caesium[] = "Césio";
constexpr static char enAtomName_Calcium[] = "Calcium";
constexpr static char frAtomName_Calcium[] = "Calcium";
constexpr static char esAtomName_Calcium[] = "Calcio";
constexpr static char deAtomName_Calcium[] = "Calcium";
constexpr static char ptAtomName_Calcium[] = "Cálcio";
constexpr static char enAtomName_Californium[] = "Californium";
constexpr static char frAtomName_Californium[] = "Californium";
constexpr static char esAtomName_Californium[] = "Californio";
constexpr static char deAtomName_Californium[] = "Californium";
constexpr static char ptAtomName_Californium[] = "Califórnio";
constexpr static char enAtomName_Carbon[] = "Carbon";
constexpr static char frAtomName_Carbon[] = "Carbone";
constexpr static char esAtomName_Carbon[] = "Carbono";
constexpr static char deAtomName_Carbon[] = "Kohlenstoff";
constexpr static char ptAtomName_Carbon[] = "Carbono";
constexpr static char enAtomName_Cerium[] = "Cerium";
constexpr static char frAtomName_Cerium[] = "Cérium";
constexpr static char esAtomName_Cerium[] = "Cerio";
constexpr static char deAtomName_Cerium[] = "Ceri";
constexpr static char ptAtomName_Cerium[] = "Cério";
constexpr static char enAtomName_Chlorine[] = "Chlorine";
constexpr static char frAtomName_Chlorine[] = "Chlore";
constexpr static char esAtomName_Chlorine[] = "Cloro";
constexpr static char deAtomName_Chlorine[] = "Chlor";
constexpr static char ptAtomName_Chlorine[] = "Cloro";
constexpr static char enAtomName_Chromium[] = "Chromium";
constexpr static char frAtomName_Chromium[] = "Chrome";
constexpr static char esAtomName_Chromium[] = "Cromo";
constexpr static char deAtomName_Chromium[] = "Chrom";
constexpr static char ptAtomName_Chromium[] = "Crômo";
constexpr static char enAtomName_Cobalt[] = "Cobalt";
constexpr static char frAtomName_Cobalt[] = "Cobalt";
constexpr static char esAtomName_Cobalt[] = "Cobalto";
constexpr static char deAtomName_Cobalt[] = "Cobalt";
constexpr static char ptAtomName_Cobalt[] = "Cobalto";
constexpr static char enAtomName_Copernicium[] = "Copernicium";
constexpr static char frAtomName_Copernicium[] = "Copernicium";
constexpr static char esAtomName_Copernicium[] = "Copernicio";
constexpr static char deAtomName_Copernicium[] = "Copernicium";
constexpr static char ptAtomName_Copernicium[] = "Copernício";
constexpr static char enAtomName_Copper[] = "Copper";
constexpr static char frAtomName_Copper[] = "Cuivre";
constexpr static char esAtomName_Copper[] = "Cobre";
constexpr static char deAtomName_Copper[] = "Kupfer";
constexpr static char ptAtomName_Copper[] = "Cobre";
constexpr static char enAtomName_Curium[] = "Curium";
constexpr static char frAtomName_Curium[] = "Curium";
constexpr static char esAtomName_Curium[] = "Curio";
constexpr static char deAtomName_Curium[] = "Curium";
constexpr static char ptAtomName_Curium[] = "Cúrio";
constexpr static char enAtomName_Damstadtium[] = "Damstadtium";
constexpr static char frAtomName_Damstadtium[] = "Damstadtium";
constexpr static char esAtomName_Damstadtium[] = "Darmstadtio";
constexpr static char deAtomName_Damstadtium[] = "Damstadtium";
constexpr static char ptAtomName_Damstadtium[] = "Darmstádtio";
constexpr static char enAtomName_Dubnium[] = "Dubnium";
constexpr static char frAtomName_Dubnium[] = "Dubnium";
constexpr static char esAtomName_Dubnium[] = "Dubnio";
constexpr static char deAtomName_Dubnium[] = "Dubnium";
constexpr static char ptAtomName_Dubnium[] = "Dúbnio";
constexpr static char enAtomName_Dyxprosium[] = "Dyxprosium";
constexpr static char frAtomName_Dyxprosium[] = "Dyxprosium";
constexpr static char esAtomName_Dyxprosium[] = "Disprosio";
constexpr static char deAtomName_Dyxprosium[] = "Dyxprosium";
constexpr static char ptAtomName_Dyxprosium[] = "Disprósio";
constexpr static char enAtomName_Einsteinium[] = "Einsteinium";
constexpr static char frAtomName_Einsteinium[] = "Einsteinium";
constexpr static char esAtomName_Einsteinium[] = "Einstenio";
constexpr static char deAtomName_Einsteinium[] = "Einsteinium";
constexpr static char ptAtomName_Einsteinium[] = "Einstênio";
constexpr static char enAtomName_Erbium[] = "Erbium";
constexpr static char frAtomName_Erbium[] = "Erbium";
constexpr static char esAtomName_Erbium[] = "Erbio";
constexpr static char deAtomName_Erbium[] = "Erbium";
constexpr static char ptAtomName_Erbium[] = "Erbio";
constexpr static char enAtomName_Europium[] = "Europium";
constexpr static char frAtomName_Europium[] = "Europium";
constexpr static char esAtomName_Europium[] = "Europio";
constexpr static char deAtomName_Europium[] = "Europium";
constexpr static char ptAtomName_Europium[] = "Európio";
constexpr static char enAtomName_Fermium[] = "Fermium";
constexpr static char frAtomName_Fermium[] = "Fermium";
constexpr static char esAtomName_Fermium[] = "Fermio";
constexpr static char deAtomName_Fermium[] = "Fermium";
constexpr static char ptAtomName_Fermium[] = "Férmio";
constexpr static char enAtomName_Flerovium[] = "Flerovium";
constexpr static char frAtomName_Flerovium[] = "Flerovium";
constexpr static char esAtomName_Flerovium[] = "Flerovio";
constexpr static char deAtomName_Flerovium[] = "Flerovium";
constexpr static char ptAtomName_Flerovium[] = "Fleróvio";
constexpr static char enAtomName_Fluorine[] = "Fluorine";
constexpr static char frAtomName_Fluorine[] = "Fluor";
constexpr static char esAtomName_Fluorine[] = "Flúor";
constexpr static char deAtomName_Fluorine[] = "Fluor";
constexpr static char ptAtomName_Fluorine[] = "Flúor";
constexpr static char enAtomName_Francium[] = "Francium";
constexpr static char frAtomName_Francium[] = "Francium";
constexpr static char esAtomName_Francium[] = "Francio";
constexpr static char deAtomName_Francium[] = "Francium";
constexpr static char ptAtomName_Francium[] = "Frâncio";
constexpr static char enAtomName_Gadolinium[] = "Gadolinium";
constexpr static char frAtomName_Gadolinium[] = "Gadolinium";
constexpr static char esAtomName_Gadolinium[] = "Gadolinio";
constexpr static char deAtomName_Gadolinium[] = "Gadolinium";
constexpr static char ptAtomName_Gadolinium[] = "Gadolínio";
constexpr static char enAtomName_Gallium[] = "Gallium";
constexpr static char frAtomName_Gallium[] = "Gallium";
constexpr static char esAtomName_Gallium[] = "Galio";
constexpr static char deAtomName_Gallium[] = "Gallium";
constexpr static char ptAtomName_Gallium[] = "Gálio";
constexpr static char enAtomName_Germanium[] = "Germanium";
constexpr static char frAtomName_Germanium[] = "Germanium";
constexpr static char esAtomName_Germanium[] = "Germanio";
constexpr static char deAtomName_Germanium[] = "Germanium";
constexpr static char ptAtomName_Germanium[] = "Germânio";
constexpr static char enAtomName_Gold[] = "Gold";
constexpr static char frAtomName_Gold[] = "Or";
constexpr static char esAtomName_Gold[] = "Oro";
constexpr static char deAtomName_Gold[] = "Gold";
constexpr static char ptAtomName_Gold[] = "Ouro";
constexpr static char enAtomName_Hafnium[] = "Hafnium";
constexpr static char frAtomName_Hafnium[] = "Hafnium";
constexpr static char esAtomName_Hafnium[] = "Hafnio";
constexpr static char deAtomName_Hafnium[] = "Hafnium";
constexpr static char ptAtomName_Hafnium[] = "Háfnio";
constexpr static char enAtomName_Hassium[] = "Hassium";
constexpr static char frAtomName_Hassium[] = "Hassium";
constexpr static char esAtomName_Hassium[] = "Hassio";
constexpr static char deAtomName_Hassium[] = "Hassium";
constexpr static char ptAtomName_Hassium[] = "Hássio";
constexpr static char enAtomName_Helium[] = "Helium";
constexpr static char frAtomName_Helium[] = "Hélium";
constexpr static char esAtomName_Helium[] = "Helio";
constexpr static char deAtomName_Helium[] = "Helium";
constexpr static char ptAtomName_Helium[] = "Helio";
constexpr static char enAtomName_Holmium[] = "Holmium";
constexpr static char frAtomName_Holmium[] = "Holmium";
constexpr static char esAtomName_Holmium[] = "Holmio";
constexpr static char deAtomName_Holmium[] = "Holmium";
constexpr static char ptAtomName_Holmium[] = "Hólmio";
constexpr static char enAtomName_Hydrogen[] = "Hydrogen";
constexpr static char frAtomName_Hydrogen[] = "Hydrogène";
constexpr static char esAtomName_Hydrogen[] = "Hidrógeno";
constexpr static char deAtomName_Hydrogen[] = "Wasserstoff";
constexpr static char ptAtomName_Hydrogen[] = "Hidrógeno";
constexpr static char enAtomName_Indine[] = "Indine";
constexpr static char frAtomName_Indine[] = "Iode";
constexpr static char esAtomName_Indine[] = "Yodo";
constexpr static char deAtomName_Indine[] = "Iod";
constexpr static char ptAtomName_Indine[] = "Iodo";
constexpr static char enAtomName_Indium[] = "Indium";
constexpr static char frAtomName_Indium[] = "Indium";
constexpr static char esAtomName_Indium[] = "Indio";
constexpr static char deAtomName_Indium[] = "Indium";
constexpr static char ptAtomName_Indium[] = "Indio";
constexpr static char enAtomName_Iridium[] = "Iridium";
constexpr static char frAtomName_Iridium[] = "Iridium";
constexpr static char esAtomName_Iridium[] = "Iridio";
constexpr static char deAtomName_Iridium[] = "Iridium";
constexpr static char ptAtomName_Iridium[] = "Iridio";
constexpr static char enAtomName_Iron[] = "Iron";
constexpr static char frAtomName_Iron[] = "Fer";
constexpr static char esAtomName_Iron[] = "Hierro";
constexpr static char deAtomName_Iron[] = "Eisen";
constexpr static char ptAtomName_Iron[] = "Ferro";
constexpr static char enAtomName_Krypton[] = "Krypton";
constexpr static char frAtomName_Krypton[] = "Krypton";
constexpr static char esAtomName_Krypton[] = "Kriptón";
constexpr static char deAtomName_Krypton[] = "Krypton";
constexpr static char ptAtomName_Krypton[] = "Crípton";
constexpr static char enAtomName_Lanthanum[] = "Lanthanum";
constexpr static char frAtomName_Lanthanum[] = "Lanthane";
constexpr static char esAtomName_Lanthanum[] = "Lantano";
constexpr static char deAtomName_Lanthanum[] = "Lanthan";
constexpr static char ptAtomName_Lanthanum[] = "Lantânio";
constexpr static char enAtomName_Lawrencium[] = "Lawrencium";
constexpr static char frAtomName_Lawrencium[] = "Lawrencium";
constexpr static char esAtomName_Lawrencium[] = "Laurencio";
constexpr static char deAtomName_Lawrencium[] = "Lawrencium";
constexpr static char ptAtomName_Lawrencium[] = "Laurêncio";
constexpr static char enAtomName_Lead[] = "Lead";
constexpr static char frAtomName_Lead[] = "Plomb";
constexpr static char esAtomName_Lead[] = "Plomo";
constexpr static char deAtomName_Lead[] = "Blei";
constexpr static char ptAtomName_Lead[] = "Chumbo";
constexpr static char enAtomName_Lithium[] = "Lithium";
constexpr static char frAtomName_Lithium[] = "Lithium";
constexpr static char esAtomName_Lithium[] = "Litio";
constexpr static char deAtomName_Lithium[] = "Lithium";
constexpr static char ptAtomName_Lithium[] = "Litio";
constexpr static char enAtomName_Livermorium[] = "Livermorium";
constexpr static char frAtomName_Livermorium[] = "Livermorium";
constexpr static char esAtomName_Livermorium[] = "Livermorio";
constexpr static char deAtomName_Livermorium[] = "Livermorium";
constexpr static char ptAtomName_Livermorium[] = "Livermório";
constexpr static char enAtomName_Lutetium[] = "Lutetium";
constexpr static char frAtomName_Lutetium[] = "Lutécium";
constexpr static char esAtomName_Lutetium[] = "Lutecio";
constexpr static char deAtomName_Lutetium[] = "Lutetium";
constexpr static char ptAtomName_Lutetium[] = "Lutécio";
constexpr static char enAtomName_Magnesium[] = "Magnesium";
constexpr static char frAtomName_Magnesium[] = "Magnésium";
constexpr static char esAtomName_Magnesium[] = "Magnesio";
constexpr static char deAtomName_Magnesium[] = "Magnesium";
constexpr static char ptAtomName_Magnesium[] = "Magnésio";
constexpr static char enAtomName_Manganese[] = "Manganese";
constexpr static char frAtomName_Manganese[] = "Manganèse";
constexpr static char esAtomName_Manganese[] = "Manganeso";
constexpr static char deAtomName_Manganese[] = "Mangan";
constexpr static char ptAtomName_Manganese[] = "Manganês";
constexpr static char enAtomName_Meitnerium[] = "Meitnerium";
constexpr static char frAtomName_Meitnerium[] = "Meitnérium";
constexpr static char esAtomName_Meitnerium[] = "Meitnerio";
constexpr static char deAtomName_Meitnerium[] = "Meitnerium";
constexpr static char ptAtomName_Meitnerium[] = "Meitnério";
constexpr static char enAtomName_Mendelevium[] = "Mendelevium";
constexpr static char frAtomName_Mendelevium[] = "Mendélévium";
constexpr static char esAtomName_Mendelevium[] = "Mendelevio";
constexpr static char deAtomName_Mendelevium[] = "Mendelevium";
constexpr static char ptAtomName_Mendelevium[] = "Mendelévio";
constexpr static char enAtomName_Mercury[] = "Mercury";
constexpr static char frAtomName_Mercury[] = "Mercure";
constexpr static char esAtomName_Mercury[] = "Mercurio";
constexpr static char deAtomName_Mercury[] = "Quecksilber";
constexpr static char ptAtomName_Mercury[] = "Mercúrio";
constexpr static char enAtomName_Molybdenum[] = "Molybdenum";
constexpr static char frAtomName_Molybdenum[] = "Molybdène";
constexpr static char esAtomName_Molybdenum[] = "Molibdeno";
constexpr static char deAtomName_Molybdenum[] = "Molybdän";
constexpr static char ptAtomName_Molybdenum[] = "Molibdênio";
constexpr static char enAtomName_Moscovium[] = "Moscovium";
constexpr static char frAtomName_Moscovium[] = "Moscovium";
constexpr static char esAtomName_Moscovium[] = "Moscovio";
constexpr static char deAtomName_Moscovium[] = "Moscovium";
constexpr static char ptAtomName_Moscovium[] = "Moscóvio";
constexpr static char enAtomName_Neodymium[] = "Neodymium";
constexpr static char frAtomName_Neodymium[] = "Néodyme";
constexpr static char esAtomName_Neodymium[] = "Neodimio";
constexpr static char deAtomName_Neodymium[] = "Neodym";
constexpr static char ptAtomName_Neodymium[] = "Neodímio";
constexpr static char enAtomName_Neon[] = "Neon";
constexpr static char frAtomName_Neon[] = "Néon";
constexpr static char esAtomName_Neon[] = "Neón";
constexpr static char deAtomName_Neon[] = "Neon";
constexpr static char ptAtomName_Neon[] = "Neón";
constexpr static char enAtomName_Neptunium[] = "Neptunium";
constexpr static char frAtomName_Neptunium[] = "Neptunium";
constexpr static char esAtomName_Neptunium[] = "Neptunio";
constexpr static char deAtomName_Neptunium[] = "Neptunium";
constexpr static char ptAtomName_Neptunium[] = "Neptúnio";
constexpr static char enAtomName_Nickel[] = "Nickel";
constexpr static char frAtomName_Nickel[] = "Nickel";
constexpr static char esAtomName_Nickel[] = "Níquel";
constexpr static char deAtomName_Nickel[] = "Nickel";
constexpr static char ptAtomName_Nickel[] = "Níquel";
constexpr static char enAtomName_Nihonium[] = "Nihonium";
constexpr static char frAtomName_Nihonium[] = "Nihonium";
constexpr static char esAtomName_Nihonium[] = "Nihonio";
constexpr static char deAtomName_Nihonium[] = "Nihonium";
constexpr static char ptAtomName_Nihonium[] = "Nipónio";
constexpr static char enAtomName_Niobium[] = "Niobium";
constexpr static char frAtomName_Niobium[] = "Niobium";
constexpr static char esAtomName_Niobium[] = "Niobio";
constexpr static char deAtomName_Niobium[] = "Niob";
constexpr static char ptAtomName_Niobium[] = "Nióbio";
constexpr static char enAtomName_Nitrogen[] = "Nitrogen";
constexpr static char frAtomName_Nitrogen[] = "Azote";
constexpr static char esAtomName_Nitrogen[] = "Nitrógeno";
constexpr static char deAtomName_Nitrogen[] = "Stickstoff";
constexpr static char ptAtomName_Nitrogen[] = "Nitrógeno";
constexpr static char enAtomName_Nobelium[] = "Nobelium";
constexpr static char frAtomName_Nobelium[] = "Nobélium";
constexpr static char esAtomName_Nobelium[] = "Nobelio";
constexpr static char deAtomName_Nobelium[] = "Nobelium";
constexpr static char ptAtomName_Nobelium[] = "Nobélio";
constexpr static char enAtomName_Oganesson[] = "Oganesson";
constexpr static char frAtomName_Oganesson[] = "Oganesson";
constexpr static char esAtomName_Oganesson[] = "Oganesón";
constexpr static char deAtomName_Oganesson[] = "Oganesson";
constexpr static char ptAtomName_Oganesson[] = "Oganésson";
constexpr static char enAtomName_Osmium[] = "Osmium";
constexpr static char frAtomName_Osmium[] = "Osmium";
constexpr static char esAtomName_Osmium[] = "Osmio";
constexpr static char deAtomName_Osmium[] = "Osmium";
constexpr static char ptAtomName_Osmium[] = "Osmio";
constexpr static char enAtomName_Oxygen[] = "Oxygen";
constexpr static char frAtomName_Oxygen[] = "Oxygène";
constexpr static char esAtomName_Oxygen[] = "Oxígeno";
constexpr static char deAtomName_Oxygen[] = "Sauerstoff";
constexpr static char ptAtomName_Oxygen[] = "Oxígeno";
constexpr static char enAtomName_Palladium[] = "Palladium";
constexpr static char frAtomName_Palladium[] = "Palladium";
constexpr static char esAtomName_Palladium[] = "Paladio";
constexpr static char deAtomName_Palladium[] = "Palladium";
constexpr static char ptAtomName_Palladium[] = "Paládio";
constexpr static char enAtomName_Phosphorus[] = "Phosphorus";
constexpr static char frAtomName_Phosphorus[] = "Phosphore";
constexpr static char esAtomName_Phosphorus[] = "Fósforo";
constexpr static char deAtomName_Phosphorus[] = "Phosphor";
constexpr static char ptAtomName_Phosphorus[] = "Fósforo";
constexpr static char enAtomName_Platinum[] = "Platinum";
constexpr static char frAtomName_Platinum[] = "Platine";
constexpr static char esAtomName_Platinum[] = "Platino";
constexpr static char deAtomName_Platinum[] = "Platin";
constexpr static char ptAtomName_Platinum[] = "Platina";
constexpr static char enAtomName_Plutonium[] = "Plutonium";
constexpr static char frAtomName_Plutonium[] = "Plutonium";
constexpr static char esAtomName_Plutonium[] = "Plutonio";
constexpr static char deAtomName_Plutonium[] = "Plutonium";
constexpr static char ptAtomName_Plutonium[] = "Plutónio";
constexpr static char enAtomName_Polonium[] = "Polonium";
constexpr static char frAtomName_Polonium[] = "Polonium";
constexpr static char esAtomName_Polonium[] = "Polonio";
constexpr static char deAtomName_Polonium[] = "Polonium";
constexpr static char ptAtomName_Polonium[] = "Polônio";
constexpr static char enAtomName_Potassium[] = "Potassium";
constexpr static char frAtomName_Potassium[] = "Potassium";
constexpr static char esAtomName_Potassium[] = "Potasio";
constexpr static char deAtomName_Potassium[] = "Kalium";
constexpr static char ptAtomName_Potassium[] = "Potássio";
constexpr static char enAtomName_Praseodymium[] = "Praseodymium";
constexpr static char frAtomName_Praseodymium[] = "Praséodyme";
constexpr static char esAtomName_Praseodymium[] = "Praseodimio";
constexpr static char deAtomName_Praseodymium[] = "Praseodym";
constexpr static char ptAtomName_Praseodymium[] = "Praseodímio";
constexpr static char enAtomName_Promethium[] = "Promethium";
constexpr static char frAtomName_Promethium[] = "Prométhium";
constexpr static char esAtomName_Promethium[] = "Prometio";
constexpr static char deAtomName_Promethium[] = "Promethium";
constexpr static char ptAtomName_Promethium[] = "Promécio";
constexpr static char enAtomName_Protactinium[] = "Protactinium";
constexpr static char frAtomName_Protactinium[] = "Protactinium";
constexpr static char esAtomName_Protactinium[] = "Protactinio";
constexpr static char deAtomName_Protactinium[] = "Protactinium";
constexpr static char ptAtomName_Protactinium[] = "Protactínio";
constexpr static char enAtomName_Radium[] = "Radium";
constexpr static char frAtomName_Radium[] = "Radium";
constexpr static char esAtomName_Radium[] = "Radio";
constexpr static char deAtomName_Radium[] = "Radium";
constexpr static char ptAtomName_Radium[] = "Rádio";
constexpr static char enAtomName_Radon[] = "Radon";
constexpr static char frAtomName_Radon[] = "Radon";
constexpr static char esAtomName_Radon[] = "Radón";
constexpr static char deAtomName_Radon[] = "Radon";
constexpr static char ptAtomName_Radon[] = "Rádon";
constexpr static char enAtomName_Rhenium[] = "Rhenium";
constexpr static char frAtomName_Rhenium[] = "Rhénium";
constexpr static char esAtomName_Rhenium[] = "Renio";
constexpr static char deAtomName_Rhenium[] = "Rhenium";
constexpr static char ptAtomName_Rhenium[] = "Rênio";
constexpr static char enAtomName_Rhodium[] = "Rhodium";
constexpr static char frAtomName_Rhodium[] = "Rhodium";
constexpr static char esAtomName_Rhodium[] = "Rodio";
constexpr static char deAtomName_Rhodium[] = "Rhodium";
constexpr static char ptAtomName_Rhodium[] = "Ródio";
constexpr static char enAtomName_Roentgenium[] = "Roentgenium";
constexpr static char frAtomName_Roentgenium[] = "Roentgenium";
constexpr static char esAtomName_Roentgenium[] = "Roentgenio";
constexpr static char deAtomName_Roentgenium[] = "Roentgenium";
constexpr static char ptAtomName_Roentgenium[] = "Roentgênio";
constexpr static char enAtomName_Rubidium[] = "Rubidium";
constexpr static char frAtomName_Rubidium[] = "Rubidium";
constexpr static char esAtomName_Rubidium[] = "Rubidio";
constexpr static char deAtomName_Rubidium[] = "Rubidium";
constexpr static char ptAtomName_Rubidium[] = "Rubídio";
constexpr static char enAtomName_Ruthemium[] = "Ruthemium";
constexpr static char frAtomName_Ruthemium[] = "Ruthénium";
constexpr static char esAtomName_Ruthemium[] = "Rutenio";
constexpr static char deAtomName_Ruthemium[] = "Ruthemium";
constexpr static char ptAtomName_Ruthemium[] = "Rutênio";
constexpr static char enAtomName_Rutherfordium[] = "Rutherfordium";
constexpr static char frAtomName_Rutherfordium[] = "Rutherfordium";
constexpr static char esAtomName_Rutherfordium[] = "Rutherfordio";
constexpr static char deAtomName_Rutherfordium[] = "Rutherfordium";
constexpr static char ptAtomName_Rutherfordium[] = "Rutherfórdio";
constexpr static char enAtomName_Samarium[] = "Samarium";
constexpr static char frAtomName_Samarium[] = "Samarium";
constexpr static char esAtomName_Samarium[] = "Samario";
constexpr static char deAtomName_Samarium[] = "Samarium";
constexpr static char ptAtomName_Samarium[] = "Samário";
constexpr static char enAtomName_Scandium[] = "Scandium";
constexpr static char frAtomName_Scandium[] = "Scandium";
constexpr static char esAtomName_Scandium[] = "Escandio";
constexpr static char deAtomName_Scandium[] = "Scandium";
constexpr static char ptAtomName_Scandium[] = "Escândio";
constexpr static char enAtomName_Seaborgium[] = "Seaborgium";
constexpr static char frAtomName_Seaborgium[] = "Seaborgium";
constexpr static char esAtomName_Seaborgium[] = "Seaborgio";
constexpr static char deAtomName_Seaborgium[] = "Seaborgium";
constexpr static char ptAtomName_Seaborgium[] = "Seabórgio";
constexpr static char enAtomName_Selenium[] = "Selenium";
constexpr static char frAtomName_Selenium[] = "Sélénium";
constexpr static char esAtomName_Selenium[] = "Selenio";
constexpr static char deAtomName_Selenium[] = "Selen";
constexpr static char ptAtomName_Selenium[] = "Selênio";
constexpr static char enAtomName_Silicon[] = "Silicon";
constexpr static char frAtomName_Silicon[] = "Silicium";
constexpr static char esAtomName_Silicon[] = "Silicio";
constexpr static char deAtomName_Silicon[] = "Silicium";
constexpr static char ptAtomName_Silicon[] = "Silicio";
constexpr static char enAtomName_Silver[] = "Silver";
constexpr static char frAtomName_Silver[] = "Argent";
constexpr static char esAtomName_Silver[] = "Plata";
constexpr static char deAtomName_Silver[] = "Silber";
constexpr static char ptAtomName_Silver[] = "Prata";
constexpr static char enAtomName_Sodium[] = "Sodium";
constexpr static char frAtomName_Sodium[] = "Sodium";
constexpr static char esAtomName_Sodium[] = "Sodio";
constexpr static char deAtomName_Sodium[] = "Natrium";
constexpr static char ptAtomName_Sodium[] = "Sodio";
constexpr static char enAtomName_Strontium[] = "Strontium";
constexpr static char frAtomName_Strontium[] = "Strontium";
constexpr static char esAtomName_Strontium[] = "Estroncio";
constexpr static char deAtomName_Strontium[] = "Strontium";
constexpr static char ptAtomName_Strontium[] = "Estrôncio";
constexpr static char enAtomName_Sulfur[] = "Sulfur";
constexpr static char frAtomName_Sulfur[] = "Soufre";
constexpr static char esAtomName_Sulfur[] = "Azufre";
constexpr static char deAtomName_Sulfur[] = "Schwefel";
constexpr static char ptAtomName_Sulfur[] = "Enxofre";
constexpr static char enAtomName_Tantalum[] = "Tantalum";
constexpr static char frAtomName_Tantalum[] = "Tantale";
constexpr static char esAtomName_Tantalum[] = "Tantalio";
constexpr static char deAtomName_Tantalum[] = "Tantal";
constexpr static char ptAtomName_Tantalum[] = "Tântalo";
constexpr static char enAtomName_Technetium[] = "Technetium";
constexpr static char frAtomName_Technetium[] = "Technétium";
constexpr static char esAtomName_Technetium[] = "Tecnecio";
constexpr static char deAtomName_Technetium[] = "Technetium";
constexpr static char ptAtomName_Technetium[] = "Tecnécio";
constexpr static char enAtomName_Tellurium[] = "Tellurium";
constexpr static char frAtomName_Tellurium[] = "Tellure";
constexpr static char esAtomName_Tellurium[] = "Telurio";
constexpr static char deAtomName_Tellurium[] = "Tellur";
constexpr static char ptAtomName_Tellurium[] = "Telúrio";
constexpr static char enAtomName_Tennessine[] = "Tennessine";
constexpr static char frAtomName_Tennessine[] = "Tennessine";
constexpr static char esAtomName_Tennessine[] = "Teneso";
constexpr static char deAtomName_Tennessine[] = "Tenness";
constexpr static char ptAtomName_Tennessine[] = "Teneso";
constexpr static char enAtomName_Terbium[] = "Terbium";
constexpr static char frAtomName_Terbium[] = "Terbium";
constexpr static char esAtomName_Terbium[] = "Terbio";
constexpr static char deAtomName_Terbium[] = "Terbium";
constexpr static char ptAtomName_Terbium[] = "Térbio";
constexpr static char enAtomName_Thalium[] = "Thalium";
constexpr static char frAtomName_Thalium[] = "Thallium";
constexpr static char esAtomName_Thalium[] = "Talio";
constexpr static char deAtomName_Thalium[] = "Thallium";
constexpr static char ptAtomName_Thalium[] = "Tálio";
constexpr static char enAtomName_Thorium[] = "Thorium";
constexpr static char frAtomName_Thorium[] = "Thorium";
constexpr static char esAtomName_Thorium[] = "Torio";
constexpr static char deAtomName_Thorium[] = "Thorium";
constexpr static char ptAtomName_Thorium[] = "Tório";
constexpr static char enAtomName_Thulium[] = "Thulium";
constexpr static char frAtomName_Thulium[] = "Thulium";
constexpr static char esAtomName_Thulium[] = "Tulio";
constexpr static char deAtomName_Thulium[] = "Thulium";
constexpr static char ptAtomName_Thulium[] = "Túlio";
constexpr static char enAtomName_Tin[] = "Tin";
constexpr static char frAtomName_Tin[] = "Etain";
constexpr static char esAtomName_Tin[] = "Estaño";
constexpr static char deAtomName_Tin[] = "Zinn";
constexpr static char ptAtomName_Tin[] = "Estanho";
constexpr static char enAtomName_Titanium[] = "Titanium";
constexpr static char frAtomName_Titanium[] = "Titane";
constexpr static char esAtomName_Titanium[] = "Titanio";
constexpr static char deAtomName_Titanium[] = "Titan";
constexpr static char ptAtomName_Titanium[] = "Titânio";
constexpr static char enAtomName_Tungsten[] = "Tungsten";
constexpr static char frAtomName_Tungsten[] = "Tungstène";
constexpr static char esAtomName_Tungsten[] = "Wolframio";
constexpr static char deAtomName_Tungsten[] = "Wolfram";
constexpr static char ptAtomName_Tungsten[] = "Tungstênio";
constexpr static char enAtomName_Uranium[] = "Uranium";
constexpr static char frAtomName_Uranium[] = "Uranium";
constexpr static char esAtomName_Uranium[] = "Uranio";
constexpr static char deAtomName_Uranium[] = "Uran";
constexpr static char ptAtomName_Uranium[] = "Urânio";
constexpr static char enAtomName_Vanadium[] = "Vanadium";
constexpr static char frAtomName_Vanadium[] = "Vanadium";
constexpr static char esAtomName_Vanadium[] = "Vanadio";
constexpr static char deAtomName_Vanadium[] = "Vanadium";
constexpr static char ptAtomName_Vanadium[] = "Vanádio";
constexpr static char enAtomName_Xenon[] = "Xenon";
constexpr static char frAtomName_Xenon[] = "Xénon";
constexpr static char esAtomName_Xenon[] = "Xenón";
constexpr static char deAtomName_Xenon[] = "Xenon";
constexpr static char ptAtomName_Xenon[] = "Xenônio";
constexpr static char enAtomName_Ytterbium[] = "Ytterbium";
constexpr static char frAtomName_Ytterbium[] = "Ytterbium";
constexpr static char esAtomName_Ytterbium[] = "Iterbio";
constexpr static char deAtomName_Ytterbium[] = "Ytterbium";
constexpr static char ptAtomName_Ytterbium[] = "Itérbio";
constexpr static char enAtomName_Yttrium[] = "Yttrium";
constexpr static char frAtomName_Yttrium[] = "Yttrium";
constexpr static char esAtomName_Yttrium[] = "Itrio";
constexpr static char deAtomName_Yttrium[] = "Yttrium";
constexpr static char ptAtomName_Yttrium[] = "Itrio";
constexpr static char enAtomName_Zinc[] = "Zinc";
constexpr static char frAtomName_Zinc[] = "Zinc";
constexpr static char esAtomName_Zinc[] = "Zinc";
constexpr static char deAtomName_Zinc[] = "Zink";
constexpr static char ptAtomName_Zinc[] = "Zinco";
constexpr static char enAtomName_Zirconium[] = "Zirconium";
constexpr static char frAtomName_Zirconium[] = "Zirconium";
constexpr static char esAtomName_Zirconium[] = "Zirconio";
constexpr static char deAtomName_Zirconium[] = "Zirconium";
constexpr static char ptAtomName_Zirconium[] = "Zircônio";
constexpr static char enAutoImportScript[] = "Auto import in shell";
constexpr static char frAutoImportScript[] = "Importation auto dans la console";
constexpr static char esAutoImportScript[] = "Importación auto en intérprete";
constexpr static char deAutoImportScript[] = "Automatischer Import in Konsole";
constexpr static char ptAutoImportScript[] = "Importação auto no interpretador";
constexpr static char enAvogadroTag[] = "Avogadro constant (mol^-1)";
constexpr static char frAvogadroTag[] = "Const d'Avogadro (mol^-1)";
constexpr static char esAvogadroTag[] = "Constante de Avogadro (mol^-1)";
constexpr static char deAvogadroTag[] = "Avogadro-Konstante (mol^-1)";
constexpr static char ptAvogadroTag[] = "Constante Avogadro (mol^-1)";
constexpr static char enAxis[] = "Axes";
constexpr static char frAxis[] = "Axes";
constexpr static char esAxis[] = "Ejes";
constexpr static char deAxis[] = "Achsen";
constexpr static char ptAxis[] = "Eixos";
constexpr static char enBarStart[] = "X start";
constexpr static char frBarStart[] = "Début de la série";
constexpr static char esBarStart[] = "Principio de la serie";
constexpr static char deBarStart[] = "Beginn der Serie";
constexpr static char ptBarStart[] = "Início da série";
constexpr static char enBasedLogarithm[] = "Logarithm to base a";
constexpr static char frBasedLogarithm[] = "Logarithme base a";
constexpr static char esBasedLogarithm[] = "Logaritmo en base a";
constexpr static char deBasedLogarithm[] = "Logarithmus zur Basis a";
constexpr static char ptBasedLogarithm[] = "Logaritmo na base a";
constexpr static char enBetaPopUp[] = "Beta pop-up";
constexpr static char frBetaPopUp[] = "Rappel version bêta";
constexpr static char esBetaPopUp[] = "Beta pop-up";
constexpr static char deBetaPopUp[] = "Beta pop-up";
constexpr static char ptBetaPopUp[] = "Beta pop-up";
constexpr static char enBetaVersion[] = "BETA VERSION";
constexpr static char frBetaVersion[] = "VERSION BETA";
constexpr static char esBetaVersion[] = "BETA VERSION";
constexpr static char deBetaVersion[] = "BETA VERSION";
constexpr static char ptBetaVersion[] = "BETA VERSION";
constexpr static char enBetaVersionMessage1[] = "";
constexpr static char frBetaVersionMessage1[] = "Votre appareil dispose d'une version bêta";
constexpr static char esBetaVersionMessage1[] = "";
constexpr static char deBetaVersionMessage1[] = "";
constexpr static char ptBetaVersionMessage1[] = "";
constexpr static char enBetaVersionMessage2[] = "Your device runs a beta software.";
constexpr static char frBetaVersionMessage2[] = "du logiciel. Il est possible que certains";
constexpr static char esBetaVersionMessage2[] = "Your device runs a beta software.";
constexpr static char deBetaVersionMessage2[] = "Your device runs a beta software.";
constexpr static char ptBetaVersionMessage2[] = "Your device runs a beta software.";
constexpr static char enBetaVersionMessage3[] = "You might run into bugs or glitches.";
constexpr static char frBetaVersionMessage3[] = "bugs apparaissent.";
constexpr static char esBetaVersionMessage3[] = "You might run into bugs or glitches.";
constexpr static char deBetaVersionMessage3[] = "You might run into bugs or glitches.";
constexpr static char ptBetaVersionMessage3[] = "You might run into bugs or glitches.";
constexpr static char enBetaVersionMessage4[] = "";
constexpr static char frBetaVersionMessage4[] = "Vous pouvez nous écrire pour nous";
constexpr static char esBetaVersionMessage4[] = "";
constexpr static char deBetaVersionMessage4[] = "";
constexpr static char ptBetaVersionMessage4[] = "";
constexpr static char enBetaVersionMessage5[] = "Please send any feedback to";
constexpr static char frBetaVersionMessage5[] = "faire part de vos retours à";
constexpr static char esBetaVersionMessage5[] = "Please send any feedback to";
constexpr static char deBetaVersionMessage5[] = "Please send any feedback to";
constexpr static char ptBetaVersionMessage5[] = "Please send any feedback to";
constexpr static char enBetaVersionMessage6[] = "contact@numworks.com";
constexpr static char frBetaVersionMessage6[] = "contact@numworks.com";
constexpr static char esBetaVersionMessage6[] = "contact@numworks.com";
constexpr static char deBetaVersionMessage6[] = "contact@numworks.com";
constexpr static char ptBetaVersionMessage6[] = "contact@numworks.com";
constexpr static char enBinomial[] = "Binomial";
constexpr static char frBinomial[] = "Binomiale";
constexpr static char esBinomial[] = "Binomial";
constexpr static char deBinomial[] = "Binomial";
constexpr static char ptBinomial[] = "Binomial";
constexpr static char enBinomialCDF[] = "P(X<=m) where X follows B(n,p)";
constexpr static char frBinomialCDF[] = "P(X<=m) où X suit B(n,p)";
constexpr static char esBinomialCDF[] = "P(X<=m) donde X sigue B(n,p)";
constexpr static char deBinomialCDF[] = "P(X<=m) wo X folgt B(n,p)";
constexpr static char ptBinomialCDF[] = "P(X<=m) onde X segue B(n,p)";
constexpr static char enBinomialDistribution[] = "Binomial distribution";
constexpr static char frBinomialDistribution[] = "Loi binomiale";
constexpr static char esBinomialDistribution[] = "Distribución binomial";
constexpr static char deBinomialDistribution[] = "Binomialverteilung";
constexpr static char ptBinomialDistribution[] = "Distribuição binomial";
constexpr static char enBinomialPDF[] = "P(X=m) where X follows B(n,p)";
constexpr static char frBinomialPDF[] = "P(X=m) où X suit B(n,p)";
constexpr static char esBinomialPDF[] = "P(X=m) donde X sigue B(n,p)";
constexpr static char deBinomialPDF[] = "P(X=m) wo X folgt B(n,p)";
constexpr static char ptBinomialPDF[] = "P(X=m) onde X segue B(n,p)";
constexpr static char enBoltzmannTag[] = "Boltzmann constant (J·K^-1)";
constexpr static char frBoltzmannTag[] = "Const de Boltzmann (J·K^-1)";
constexpr static char esBoltzmannTag[] = "Constante Boltzmann (J·K^-1)";
constexpr static char deBoltzmannTag[] = "Boltzmann Konstante (J·K^-1)";
constexpr static char ptBoltzmannTag[] = "Constante Boltzmann (J·K^-1)";
constexpr static char enBoxTab[] = "Box";
constexpr static char frBoxTab[] = "Boîte";
constexpr static char esBoxTab[] = "Caja";
constexpr static char deBoxTab[] = "Boxplot";
constexpr static char ptBoxTab[] = "Caixa";
constexpr static char enBrightness[] = "Brightness";
constexpr static char frBrightness[] = "Luminosité";
constexpr static char esBrightness[] = "Brillo";
constexpr static char deBrightness[] = "Helligkeit";
constexpr static char ptBrightness[] = "Brilho";
constexpr static char enCalculApp[] = "Calculation";
constexpr static char frCalculApp[] = "Calculs";
constexpr static char esCalculApp[] = "Cálculo";
constexpr static char deCalculApp[] = "Berechnung";
constexpr static char ptCalculApp[] = "Cálculo";
constexpr static char enCalculAppCapital[] = "CALCULATION";
constexpr static char frCalculAppCapital[] = "CALCULS";
constexpr static char esCalculAppCapital[] = "CALCULO";
constexpr static char deCalculAppCapital[] = "BERECHNUNG";
constexpr static char ptCalculAppCapital[] = "CALCULO";
constexpr static char enCalculation[] = "Calculation";
constexpr static char frCalculation[] = "Calcul";
constexpr static char esCalculation[] = "Cálculos";
constexpr static char deCalculation[] = "Berechnung";
constexpr static char ptCalculation[] = "Cálculo";
constexpr static char enCancel[] = "Cancel";
constexpr static char frCancel[] = "Annuler";
constexpr static char esCancel[] = "Cancelar";
constexpr static char deCancel[] = "Abbrechen";
constexpr static char ptCancel[] = "Cancelar";
constexpr static char enCartesian[] = "Cartesian ";
constexpr static char frCartesian[] = "Algébrique ";
constexpr static char esCartesian[] = "Binómica ";
constexpr static char deCartesian[] = "Algebraische ";
constexpr static char ptCartesian[] = "Cartesiana ";
constexpr static char enCartesianType[] = "Cartesian ";
constexpr static char frCartesianType[] = "Cartésien ";
constexpr static char esCartesianType[] = "Cartesiano ";
constexpr static char deCartesianType[] = "Kartesisch ";
constexpr static char ptCartesianType[] = "Cartesiano ";
constexpr static char enCatalog[] = "Catalog";
constexpr static char frCatalog[] = "Catalogue";
constexpr static char esCatalog[] = "Catalog";
constexpr static char deCatalog[] = "Katalog";
constexpr static char ptCatalog[] = "Catalog";
constexpr static char enCeiling[] = "Ceiling";
constexpr static char frCeiling[] = "Plafond";
constexpr static char esCeiling[] = "Techo";
constexpr static char deCeiling[] = "Obergrenze";
constexpr static char ptCeiling[] = "Tecto";
constexpr static char enChemistry[] = "Chemistry";
constexpr static char frChemistry[] = "Chimie";
constexpr static char esChemistry[] = "Química";
constexpr static char deChemistry[] = "Chemie";
constexpr static char ptChemistry[] = "Química";
constexpr static char enChiSquared[] = "Chi-squared";
constexpr static char frChiSquared[] = "Chi2";
constexpr static char esChiSquared[] = "Chi-cuadrado";
constexpr static char deChiSquared[] = "Chi-Quadrat";
constexpr static char ptChiSquared[] = "Qui-quadrado";
constexpr static char enChiSquaredDistribution[] = "Chi-squared distribution";
constexpr static char frChiSquaredDistribution[] = "Loi du chi2";
constexpr static char esChiSquaredDistribution[] = "Distribución chi-cuadrado";
constexpr static char deChiSquaredDistribution[] = "Chi-Quadrat-Verteilung";
constexpr static char ptChiSquaredDistribution[] = "Distribuição qui-quadrado";
constexpr static char enChooseDistribution[] = "Choose the distribution";
constexpr static char frChooseDistribution[] = "Choisir le type de loi";
constexpr static char esChooseDistribution[] = "Seleccionar la distribución";
constexpr static char deChooseDistribution[] = "Wählen Sie eine Verteilung";
constexpr static char ptChooseDistribution[] = "Selecionar a distribuição";
constexpr static char enChooseParameters[] = "Choose parameters";
constexpr static char frChooseParameters[] = "Choisir les paramètres";
constexpr static char esChooseParameters[] = "Seleccionar parámetros";
constexpr static char deChooseParameters[] = "Parameter auswählen";
constexpr static char ptChooseParameters[] = "Selecionar os parâmetros";
constexpr static char enChooseSequenceType[] = "Choose sequence type";
constexpr static char frChooseSequenceType[] = "Choisir le type de suite";
constexpr static char esChooseSequenceType[] = "Seleccionar el tipo de sucesión";
constexpr static char deChooseSequenceType[] = "Das Bildungsgesetz der Folge auswählen";
constexpr static char ptChooseSequenceType[] = "Escolha o tipo de sequência";
constexpr static char enClearColumn[] = "Clear column";
constexpr static char frClearColumn[] = "Effacer la colonne";
constexpr static char esClearColumn[] = "Borrar la columna";
constexpr static char deClearColumn[] = "Spalte löschen";
constexpr static char ptClearColumn[] = "Excluir coluna";
constexpr static char enColorBlue[] = "Blue ";
constexpr static char frColorBlue[] = "Bleu ";
constexpr static char esColorBlue[] = "Azul ";
constexpr static char deColorBlue[] = "Blau ";
constexpr static char ptColorBlue[] = "Azul ";
constexpr static char enColorGreen[] = "Green ";
constexpr static char frColorGreen[] = "Vert ";
constexpr static char esColorGreen[] = "Verde ";
constexpr static char deColorGreen[] = "Grün ";
constexpr static char ptColorGreen[] = "Verde ";
constexpr static char enColorWhite[] = "White ";
constexpr static char frColorWhite[] = "Blanc ";
constexpr static char esColorWhite[] = "Blanco ";
constexpr static char deColorWhite[] = "Weiss ";
constexpr static char ptColorWhite[] = "Branco ";
constexpr static char enColorYellow[] = "Yellow ";
constexpr static char frColorYellow[] = "Jaune ";
constexpr static char esColorYellow[] = "Amarillo ";
constexpr static char deColorYellow[] = "Gelb ";
constexpr static char ptColorYellow[] = "Amarelo ";
constexpr static char enColumnOptions[] = "Column options";
constexpr static char frColumnOptions[] = "Options de la colonne";
constexpr static char esColumnOptions[] = "Opciones de la columna";
constexpr static char deColumnOptions[] = "Optionen der Spalte";
constexpr static char ptColumnOptions[] = "Opções de coluna";
constexpr static char enCombination[] = "Combination";
constexpr static char frCombination[] = "k parmi n";
constexpr static char esCombination[] = "Combinación";
constexpr static char deCombination[] = "Kombination";
constexpr static char ptCombination[] = "Combinação";
constexpr static char enCombinatorics[] = "Combinatorics";
constexpr static char frCombinatorics[] = "Dénombrement";
constexpr static char esCombinatorics[] = "Combinatoria";
constexpr static char deCombinatorics[] = "Kombinatorik";
constexpr static char ptCombinatorics[] = "Combinatoria";
constexpr static char enComplexAbsoluteValue[] = "Absolute value";
constexpr static char frComplexAbsoluteValue[] = "Module";
constexpr static char esComplexAbsoluteValue[] = "Modulo";
constexpr static char deComplexAbsoluteValue[] = "Betrag";
constexpr static char ptComplexAbsoluteValue[] = "Módulo";
constexpr static char enComplexFormat[] = "Complex format";
constexpr static char frComplexFormat[] = "Forme complexe";
constexpr static char esComplexFormat[] = "Forma compleja";
constexpr static char deComplexFormat[] = "Komplex";
constexpr static char ptComplexFormat[] = "Complexos";
constexpr static char enComplexNumber[] = "Complex numbers";
constexpr static char frComplexNumber[] = "Nombres complexes";
constexpr static char esComplexNumber[] = "Números complejos";
constexpr static char deComplexNumber[] = "Komplexe Zahlen";
constexpr static char ptComplexNumber[] = "Números complexos";
constexpr static char enCompute[] = "Calculate";
constexpr static char frCompute[] = "Calculer";
constexpr static char esCompute[] = "Calcular";
constexpr static char deCompute[] = "Berechnen";
constexpr static char ptCompute[] = "Calcular";
constexpr static char enComputeProbability[] = "Calculate probabilities";
constexpr static char frComputeProbability[] = "Calculer les probabilités";
constexpr static char esComputeProbability[] = "Calcular las probabilidades";
constexpr static char deComputeProbability[] = "Wahrscheinlichkeit berechnen";
constexpr static char ptComputeProbability[] = "Calcular probabilidades";
constexpr static char enConfidence[] = "Confidence interval";
constexpr static char frConfidence[] = "Intervalle de confiance";
constexpr static char esConfidence[] = "Intervalo de confianza";
constexpr static char deConfidence[] = "Konfidenzintervall";
constexpr static char ptConfidence[] = "Intervalo de confiança";
constexpr static char enConjugate[] = "Conjugate";
constexpr static char frConjugate[] = "Conjugué";
constexpr static char esConjugate[] = "Conjugado";
constexpr static char deConjugate[] = "Konjugiert";
constexpr static char ptConjugate[] = "Conjugado";
constexpr static char enConnectedMessage1[] = "To transfer data, browse";
constexpr static char frConnectedMessage1[] = "Pour transférer des données, connectez-";
constexpr static char esConnectedMessage1[] = "Para transferir datos, visite";
constexpr static char deConnectedMessage1[] = "Um Daten zu übertragen, verbinden";
constexpr static char ptConnectedMessage1[] = "Para transferir dados, navegue";
constexpr static char enConnectedMessage2[] = "our page from your computer";
constexpr static char frConnectedMessage2[] = "vous depuis votre ordinateur sur le site";
constexpr static char esConnectedMessage2[] = "nuestra página desde su ordenador";
constexpr static char deConnectedMessage2[] = "Sie Sich von Ihrem Computer aus mit";
constexpr static char ptConnectedMessage2[] = "na nossa pagina no seu computador";
constexpr static char enConnectedMessage3[] = "workshop.numworks.com";
constexpr static char frConnectedMessage3[] = "workshop.numworks.com";
constexpr static char esConnectedMessage3[] = "workshop.numworks.com";
constexpr static char deConnectedMessage3[] = "workshop.numworks.com.";
constexpr static char ptConnectedMessage3[] = "workshop.numworks.com";
constexpr static char enConnectedMessage4[] = "Press the BACK key of your";
constexpr static char frConnectedMessage4[] = "Appuyez sur la touche RETOUR de la";
constexpr static char esConnectedMessage4[] = "Pulse el botón RETURN de la";
constexpr static char deConnectedMessage4[] = "Drücken Sie die RETURN-Taste am";
constexpr static char ptConnectedMessage4[] = "Pressione o botão RETURN na";
constexpr static char enConnectedMessage5[] = "calculator or unplug it to";
constexpr static char frConnectedMessage5[] = "calculatrice ou débranchez-la pour la";
constexpr static char esConnectedMessage5[] = "calculadora o desenchúfela para";
constexpr static char deConnectedMessage5[] = "Taschenrechner oder ziehen Sie das Kabel,";
constexpr static char ptConnectedMessage5[] = "calculadora ou desligue-la para";
constexpr static char enConnectedMessage6[] = "disconnect it.";
constexpr static char frConnectedMessage6[] = "déconnecter.";
constexpr static char esConnectedMessage6[] = "desconectarla.";
constexpr static char deConnectedMessage6[] = "um die Verbindung zu trennen.";
constexpr static char ptConnectedMessage6[] = "desconectar-la.";
constexpr static char enConsole[] = "Python shell";
constexpr static char frConsole[] = "Console d'exécution";
constexpr static char esConsole[] = "Interprete de comandos";
constexpr static char deConsole[] = "Interaktive Konsole";
constexpr static char ptConsole[] = "Interpretador interativo";
constexpr static char enContributors[] = "Contributors";
constexpr static char frContributors[] = "Contributeurs";
constexpr static char esContributors[] = "Contribuyentes";
constexpr static char deContributors[] = "Beiträger";
constexpr static char ptContributors[] = "Contribuidores";
constexpr static char enCopyColumnInList[] = "Export the column to a list";
constexpr static char frCopyColumnInList[] = "Copier la colonne dans une liste";
constexpr static char esCopyColumnInList[] = "Copiar la columna en una lista";
constexpr static char deCopyColumnInList[] = "Die Spalte in einer Liste kopieren";
constexpr static char ptCopyColumnInList[] = "Copie a coluna em uma lista";
constexpr static char enCoulombTag[] = "Coulomb constant (N·m^2·C^-2)";
constexpr static char frCoulombTag[] = "Const de Coulomb (N·m^2·C^-2)";
constexpr static char esCoulombTag[] = "Constante de Coulomb (N·m^2·C^-2)";
constexpr static char deCoulombTag[] = "Coulomb-Konstante (N·m^2·C^-2)";
constexpr static char ptCoulombTag[] = "Constante de Coulomb (N·m^2·C^-2)";
constexpr static char enCovariance[] = "Covariance";
constexpr static char frCovariance[] = "Covariance";
constexpr static char esCovariance[] = "Covarianza";
constexpr static char deCovariance[] = "Kovarianz";
constexpr static char ptCovariance[] = "Covariancia";
constexpr static char enCubic[] = "Cubic";
constexpr static char frCubic[] = "Cubique";
constexpr static char esCubic[] = "Cúbica";
constexpr static char deCubic[] = "Kubische";
constexpr static char ptCubic[] = "Cúbica";
constexpr static char enCurveType[] = "Curve type";
constexpr static char frCurveType[] = "Type de courbe";
constexpr static char esCurveType[] = "Tipo de curva";
constexpr static char deCurveType[] = "Bildungsgesetz der Kurve";
constexpr static char ptCurveType[] = "Tipo de curva";
constexpr static char enCustomSoftwareVersion[] = "Omega version";
constexpr static char frCustomSoftwareVersion[] = "Version d'Omega";
constexpr static char esCustomSoftwareVersion[] = "Versión de Omega";
constexpr static char deCustomSoftwareVersion[] = "Omega version";
constexpr static char ptCustomSoftwareVersion[] = "Versão do Omega";
constexpr static char enDataNotSuitable[] = "Data not suitable";
constexpr static char frDataNotSuitable[] = "Les données ne conviennent pas";
constexpr static char esDataNotSuitable[] = "Datos no adecuados";
constexpr static char deDataNotSuitable[] = "Daten nicht geeignet";
constexpr static char ptDataNotSuitable[] = "Dados não adequados";
constexpr static char enDataNotSuitableForRegression[] = " Data not suitable for this regression model";
constexpr static char frDataNotSuitableForRegression[] = "Les données ne conviennent pas";
constexpr static char esDataNotSuitableForRegression[] = "Datos no adecuados";
constexpr static char deDataNotSuitableForRegression[] = "Daten sind nicht geeignet";
constexpr static char ptDataNotSuitableForRegression[] = "Dados não adequados";
constexpr static char enDataTab[] = "Data";
constexpr static char frDataTab[] = "Données";
constexpr static char esDataTab[] = "Datos";
constexpr static char deDataTab[] = "Daten";
constexpr static char ptDataTab[] = "Dados";
constexpr static char enDecimal[] = "Decimal ";
constexpr static char frDecimal[] = "Décimal ";
constexpr static char esDecimal[] = "Decimal ";
constexpr static char deDecimal[] = "Dezimal ";
constexpr static char ptDecimal[] = "Decimal ";
constexpr static char enDefaultSetting[] = "Basic settings";
constexpr static char frDefaultSetting[] = "Réglages de base";
constexpr static char esDefaultSetting[] = "Ajustes básicos";
constexpr static char deDefaultSetting[] = "Grundeinstellung";
constexpr static char ptDefaultSetting[] = "Configurações basicas";
constexpr static char enDeg[] = "deg";
constexpr static char frDeg[] = "deg";
constexpr static char esDeg[] = "gra";
constexpr static char deDeg[] = "gra";
constexpr static char ptDeg[] = "gra";
constexpr static char enDegrees[] = "Degrees ";
constexpr static char frDegrees[] = "Degrés ";
constexpr static char esDegrees[] = "Grados ";
constexpr static char deDegrees[] = "Grad ";
constexpr static char ptDegrees[] = "Graus ";
constexpr static char enDegreesOfFreedomDefinition[] = "k: Degrees of freedom";
constexpr static char frDegreesOfFreedomDefinition[] = "k : Degrés de liberté";
constexpr static char esDegreesOfFreedomDefinition[] = "k : Grados de libertad";
constexpr static char deDegreesOfFreedomDefinition[] = "k: Anzahl der Freiheitsgrade";
constexpr static char ptDegreesOfFreedomDefinition[] = "k : Graus de liberdade";
constexpr static char enDeleteFunction[] = "Delete function";
constexpr static char frDeleteFunction[] = "Supprimer la fonction";
constexpr static char esDeleteFunction[] = "Eliminar la función";
constexpr static char deDeleteFunction[] = "Funktion löschen";
constexpr static char ptDeleteFunction[] = "Eliminar a função";
constexpr static char enDeleteScript[] = "Delete script";
constexpr static char frDeleteScript[] = "Supprimer le script";
constexpr static char esDeleteScript[] = "Eliminar el archivo";
constexpr static char deDeleteScript[] = "Skript löschen";
constexpr static char ptDeleteScript[] = "Eliminar o script";
constexpr static char enDeleteSequence[] = "Delete sequence";
constexpr static char frDeleteSequence[] = "Supprimer la suite";
constexpr static char esDeleteSequence[] = "Eliminar la sucesión";
constexpr static char deDeleteSequence[] = "Folge löschen";
constexpr static char ptDeleteSequence[] = "Eliminar a sequência";
constexpr static char enDerivateNumber[] = "Derivative";
constexpr static char frDerivateNumber[] = "Nombre derivé";
constexpr static char esDerivateNumber[] = "Derivada";
constexpr static char deDerivateNumber[] = "Ableitung";
constexpr static char ptDerivateNumber[] = "Derivada";
constexpr static char enDerivativeFunctionColumn[] = "Derivative function column";
constexpr static char frDerivativeFunctionColumn[] = "Colonne de la fonction dérivée";
constexpr static char esDerivativeFunctionColumn[] = "Columna de la derivada";
constexpr static char deDerivativeFunctionColumn[] = "Spalte der Ableitungsfunktion";
constexpr static char ptDerivativeFunctionColumn[] = "Coluna da função derivada";
constexpr static char enDeterminant[] = "Determinant";
constexpr static char frDeterminant[] = "Déterminant";
constexpr static char esDeterminant[] = "Determinante";
constexpr static char deDeterminant[] = "Determinante";
constexpr static char ptDeterminant[] = "Determinante";
constexpr static char enDeviation[] = "Variance";
constexpr static char frDeviation[] = "Variance";
constexpr static char esDeviation[] = "Varianza";
constexpr static char deDeviation[] = "Varianz";
constexpr static char ptDeviation[] = "Variancia";
constexpr static char enDeviationDefinition[] = "σ: Standard deviation";
constexpr static char frDeviationDefinition[] = "σ : Ecart type";
constexpr static char esDeviationDefinition[] = "σ : Desviación típica";
constexpr static char deDeviationDefinition[] = "σ: Standardabweichung";
constexpr static char ptDeviationDefinition[] = "σ : Desvio padrão";
constexpr static char enDimension[] = "Size";
constexpr static char frDimension[] = "Taille";
constexpr static char esDimension[] = "Tamaño";
constexpr static char deDimension[] = "Größe";
constexpr static char ptDimension[] = "Tamanho";
constexpr static char enDisplayMode[] = "Result format";
constexpr static char frDisplayMode[] = "Format résultat";
constexpr static char esDisplayMode[] = "Formato resultado";
constexpr static char deDisplayMode[] = "Zahlenformat";
constexpr static char ptDisplayMode[] = "Formato numérico";
constexpr static char enDisplayValues[] = "Display values";
constexpr static char frDisplayValues[] = "Afficher les valeurs";
constexpr static char esDisplayValues[] = "Visualizar los valores";
constexpr static char deDisplayValues[] = "Werte anzeigen";
constexpr static char ptDisplayValues[] = "Exibir os valores";
constexpr static char enDoubleRecurrence[] = "Recursive second order";
constexpr static char frDoubleRecurrence[] = "Récurrente d'ordre 2";
constexpr static char esDoubleRecurrence[] = "Recurrencia de orden dos";
constexpr static char deDoubleRecurrence[] = "Rekursion 2. Ordnung";
constexpr static char ptDoubleRecurrence[] = "Recorrência de Segunda Ordem";
constexpr static char enEdition2D[] = "Natural ";
constexpr static char frEdition2D[] = "Naturelle ";
constexpr static char esEdition2D[] = "Natural ";
constexpr static char deEdition2D[] = "Natürlich ";
constexpr static char ptEdition2D[] = "Natural ";
constexpr static char enEditionLinear[] = "Linear ";
constexpr static char frEditionLinear[] = "En ligne ";
constexpr static char esEditionLinear[] = "En línea ";
constexpr static char deEditionLinear[] = "Linear ";
constexpr static char ptEditionLinear[] = "Em linha ";
constexpr static char enEditionMode[] = "Writing format";
constexpr static char frEditionMode[] = "Format écriture";
constexpr static char esEditionMode[] = "Formato escritura";
constexpr static char deEditionMode[] = "Eingabe";
constexpr static char ptEditionMode[] = "Formato escrita ";
constexpr static char enElectromagnetism[] = "Electromagnetism";
constexpr static char frElectromagnetism[] = "Electromagnétisme";
constexpr static char esElectromagnetism[] = "Electromagnetismo";
constexpr static char deElectromagnetism[] = "Elektromagnetismus";
constexpr static char ptElectromagnetism[] = "Eletromagnetismo";
constexpr static char enElectronMassTag[] = "Mass of an electron (kg)";
constexpr static char frElectronMassTag[] = "Masse d'un électron (kg)";
constexpr static char esElectronMassTag[] = "Masa de un electrón (kg)";
constexpr static char deElectronMassTag[] = "Masse eines Elektrons (kg)";
constexpr static char ptElectronMassTag[] = "Massa de um elétron (kg)";
constexpr static char enElementalChargeTag[] = "Elemental Charge (C)";
constexpr static char frElementalChargeTag[] = "Charge élémentaire (C)";
constexpr static char esElementalChargeTag[] = "Carga elemental (C)";
constexpr static char deElementalChargeTag[] = "Elementarladung (C)";
constexpr static char ptElementalChargeTag[] = "Carga elementar (C)";
constexpr static char enEmpty[] = "Empty";
constexpr static char frEmpty[] = "Vide";
constexpr static char esEmpty[] = "Vacio";
constexpr static char deEmpty[] = "Leer";
constexpr static char ptEmpty[] = "Vácuo";
constexpr static char enEmptyExpressionBox0[] = "You have not defined any variables.";
constexpr static char frEmptyExpressionBox0[] = "Vous n'avez défini aucune variable.";
constexpr static char esEmptyExpressionBox0[] = "Ninguna variable definida.";
constexpr static char deEmptyExpressionBox0[] = "Sie haben keine Variable definiert.";
constexpr static char ptEmptyExpressionBox0[] = "Nenhuma variável definida.";
constexpr static char enEmptyExpressionBox1[] = "To define a variable, type:";
constexpr static char frEmptyExpressionBox1[] = "Pour définir une variable, tapez :";
constexpr static char esEmptyExpressionBox1[] = "Para definir una, teclear :";
constexpr static char deEmptyExpressionBox1[] = "Um eine Variable zu definieren:";
constexpr static char ptEmptyExpressionBox1[] = "Para definir uma, digite :";
constexpr static char enEmptyExpressionBox2[] = "The variable name can contain:";
constexpr static char frEmptyExpressionBox2[] = "Le nom de la variable peut contenir :";
constexpr static char esEmptyExpressionBox2[] = "El nombre de variable debe contener :";
constexpr static char deEmptyExpressionBox2[] = "Erlaubte Zeichen im Namen:";
constexpr static char ptEmptyExpressionBox2[] = "O nome da variável pode conter:";
constexpr static char enEmptyFunctionBox0[] = "You have not defined any functions.";
constexpr static char frEmptyFunctionBox0[] = "Vous n'avez défini aucune fonction.";
constexpr static char esEmptyFunctionBox0[] = "Ninguna función definida.";
constexpr static char deEmptyFunctionBox0[] = "Sie haben keine Funktion definiert.";
constexpr static char ptEmptyFunctionBox0[] = "Nenhuma função definida.";
constexpr static char enEmptyFunctionBox1[] = "To define a function, type:";
constexpr static char frEmptyFunctionBox1[] = "Pour définir une fonction, tapez :";
constexpr static char esEmptyFunctionBox1[] = "Para definir una, teclear :";
constexpr static char deEmptyFunctionBox1[] = "Um eine Funktion zu definieren:";
constexpr static char ptEmptyFunctionBox1[] = "Para definir uma, digite :";
constexpr static char enEmptyFunctionBox2[] = "The function name can contain:";
constexpr static char frEmptyFunctionBox2[] = "Le nom de la fonction peut contenir :";
constexpr static char esEmptyFunctionBox2[] = "El nombre de función debe contener : ";
constexpr static char deEmptyFunctionBox2[] = "Erlaubte Zeichen im Namen:";
constexpr static char ptEmptyFunctionBox2[] = "O nome da função pode conter:";
constexpr static char enEnableCharacters[] = "A..Z, a..z, 0..9 and _";
constexpr static char frEnableCharacters[] = "A..Z, a..z, 0..9 et _";
constexpr static char esEnableCharacters[] = "A..Z, a..z, 0..9 y _";
constexpr static char deEnableCharacters[] = "A..Z, a..z, 0..9 und _";
constexpr static char ptEnableCharacters[] = "A..Z, a..z, 0..9 y _";
constexpr static char enEng[] = "eng";
constexpr static char frEng[] = "ing";
constexpr static char esEng[] = "ing";
constexpr static char deEng[] = "tech";
constexpr static char ptEng[] = "eng";
constexpr static char enEngineering[] = "Engineering ";
constexpr static char frEngineering[] = "Ingénieur ";
constexpr static char esEngineering[] = "Ingeniería ";
constexpr static char deEngineering[] = "Technisch ";
constexpr static char ptEngineering[] = "Engenharia ";
constexpr static char enEnterEquation[] = "Enter an equation";
constexpr static char frEnterEquation[] = "Entrez une équation";
constexpr static char esEnterEquation[] = "Escribe una ecuación";
constexpr static char deEnterEquation[] = "Geben Sie eine Gleichung ein";
constexpr static char ptEnterEquation[] = "Digite uma equação";
constexpr static char enExamMode[] = "Exam mode";
constexpr static char frExamMode[] = "Mode examen";
constexpr static char esExamMode[] = "Modo examen";
constexpr static char deExamMode[] = "Testmodus";
constexpr static char ptExamMode[] = "Modo de exame";
constexpr static char enExamModeActive[] = "Reactivate exam mode";
constexpr static char frExamModeActive[] = "Réactiver le mode examen";
constexpr static char esExamModeActive[] = "Reactivar el modo examen";
constexpr static char deExamModeActive[] = "Wieder starten Testmodus";
constexpr static char ptExamModeActive[] = "Reativar o modo de exame";
constexpr static char enExamModeMode[] = "Mode";
constexpr static char frExamModeMode[] = "Mode";
constexpr static char esExamModeMode[] = "Modo";
constexpr static char deExamModeMode[] = "Modus";
constexpr static char ptExamModeMode[] = "Modo";
constexpr static char enExamModeModeDutch[] = "Dutch ";
constexpr static char frExamModeModeDutch[] = "Néerlandais ";
constexpr static char esExamModeModeDutch[] = "Holandés ";
constexpr static char deExamModeModeDutch[] = "Niederländisch ";
constexpr static char ptExamModeModeDutch[] = "Holandês ";
constexpr static char enExamModeModeNoSym[] = "No sym ";
constexpr static char frExamModeModeNoSym[] = "Sans symbolique ";
constexpr static char esExamModeModeNoSym[] = "Sin simbólico ";
constexpr static char deExamModeModeNoSym[] = "Ohne symbolisch ";
constexpr static char ptExamModeModeNoSym[] = "Sem simbólico ";
constexpr static char enExamModeModeStandard[] = "Standard ";
constexpr static char frExamModeModeStandard[] = "Standard ";
constexpr static char esExamModeModeStandard[] = "Estándar ";
constexpr static char deExamModeModeStandard[] = "Standard ";
constexpr static char ptExamModeModeStandard[] = "Padrão ";
constexpr static char enExecuteScript[] = "Execute script";
constexpr static char frExecuteScript[] = "Exécuter le script";
constexpr static char esExecuteScript[] = "Ejecutar el archivo";
constexpr static char deExecuteScript[] = "Skript ausführen";
constexpr static char ptExecuteScript[] = "Executar o script";
constexpr static char enExitExamMode1[] = "Exit the exam ";
constexpr static char frExitExamMode1[] = "Voulez-vous sortir ";
constexpr static char esExitExamMode1[] = "Salir del modo ";
constexpr static char deExitExamMode1[] = "Möchten Sie den Testmodus ";
constexpr static char ptExitExamMode1[] = "Você quer sair do modo de ";
constexpr static char enExitExamMode2[] = "mode?";
constexpr static char frExitExamMode2[] = "du mode examen ?";
constexpr static char esExitExamMode2[] = "examen ?";
constexpr static char deExitExamMode2[] = "verlassen?";
constexpr static char ptExitExamMode2[] = "exame ?";
constexpr static char enExplicit[] = "Explicit expression";
constexpr static char frExplicit[] = "Explicite";
constexpr static char esExplicit[] = "Fórmula explícita";
constexpr static char deExplicit[] = "Explizit";
constexpr static char ptExplicit[] = "Explícita";
constexpr static char enExponential[] = "Exponential";
constexpr static char frExponential[] = "Exponentielle";
constexpr static char esExponential[] = "Exponencial";
constexpr static char deExponential[] = "Exponentielle";
constexpr static char ptExponential[] = "Exponencial";
constexpr static char enExponentialDistribution[] = "Exponential distribution";
constexpr static char frExponentialDistribution[] = "Loi exponentielle";
constexpr static char esExponentialDistribution[] = "Distribución exponencial";
constexpr static char deExponentialDistribution[] = "Exponentialverteilung";
constexpr static char ptExponentialDistribution[] = "Distribuição exponencial";
constexpr static char enExpressions[] = "Expressions";
constexpr static char frExpressions[] = "Expressions";
constexpr static char esExpressions[] = "Expresiones";
constexpr static char deExpressions[] = "Ausdrücke";
constexpr static char ptExpressions[] = "Expressões";
constexpr static char enExternalApp[] = "External";
constexpr static char frExternalApp[] = "External";
constexpr static char esExternalApp[] = "External";
constexpr static char deExternalApp[] = "External";
constexpr static char ptExternalApp[] = "External";
constexpr static char enExternalAppApiMismatch[] = "API mismatch";
constexpr static char frExternalAppApiMismatch[] = "API mismatch";
constexpr static char esExternalAppApiMismatch[] = "API mismatch";
constexpr static char deExternalAppApiMismatch[] = "API mismatch";
constexpr static char ptExternalAppApiMismatch[] = "API mismatch";
constexpr static char enExternalAppCapital[] = "EXTERNAL";
constexpr static char frExternalAppCapital[] = "EXTERNAL";
constexpr static char esExternalAppCapital[] = "EXTERNAL";
constexpr static char deExternalAppCapital[] = "EXTERNAL";
constexpr static char ptExternalAppCapital[] = "EXTERNAL";
constexpr static char enExternalAppExecError[] = "Cannot execute file";
constexpr static char frExternalAppExecError[] = "Cannot execute file";
constexpr static char esExternalAppExecError[] = "Cannot execute file";
constexpr static char deExternalAppExecError[] = "Cannot execute file";
constexpr static char ptExternalAppExecError[] = "Cannot execute file";
constexpr static char enFillWithFormula[] = "Fill with a formula";
constexpr static char frFillWithFormula[] = "Remplir avec une formule";
constexpr static char esFillWithFormula[] = "Rellenar con una fórmula";
constexpr static char deFillWithFormula[] = "Mit einer Formel füllen";
constexpr static char ptFillWithFormula[] = "Preencher com uma fórmula";
constexpr static char enFirstQuartile[] = "First quartile";
constexpr static char frFirstQuartile[] = "Premier quartile";
constexpr static char esFirstQuartile[] = "Primer cuartil";
constexpr static char deFirstQuartile[] = "Unteres Quartil";
constexpr static char ptFirstQuartile[] = "Quartil inferior";
constexpr static char enFirstTermIndex[] = "First term index";
constexpr static char frFirstTermIndex[] = "Indice premier terme";
constexpr static char esFirstTermIndex[] = "Indice del primer término";
constexpr static char deFirstTermIndex[] = "Anfangsindex";
constexpr static char ptFirstTermIndex[] = "Indice do primeiro termo";
constexpr static char enFloor[] = "Floor";
constexpr static char frFloor[] = "Partie entière";
constexpr static char esFloor[] = "Parte entera";
constexpr static char deFloor[] = "Untergrenze";
constexpr static char ptFloor[] = "Parte inteira";
constexpr static char enFluctuation[] = "Prediction Interval";
constexpr static char frFluctuation[] = "Intervalle de fluctuation";
constexpr static char esFluctuation[] = "Interval de predicción";
constexpr static char deFluctuation[] = "Konfidenzintervall";
constexpr static char ptFluctuation[] = "Intervalo de confiança";
constexpr static char enForbiddenValue[] = "Forbidden value";
constexpr static char frForbiddenValue[] = "Valeur interdite";
constexpr static char esForbiddenValue[] = "Valor prohibido";
constexpr static char deForbiddenValue[] = "Verbotener Wert";
constexpr static char ptForbiddenValue[] = "Valor proibido";
constexpr static char enForbidenAppInExamMode1[] = "This application is";
constexpr static char frForbidenAppInExamMode1[] = "This application is";
constexpr static char esForbidenAppInExamMode1[] = "This application is";
constexpr static char deForbidenAppInExamMode1[] = "This application is";
constexpr static char ptForbidenAppInExamMode1[] = "This application is";
constexpr static char enForbidenAppInExamMode2[] = "forbidden in exam mode";
constexpr static char frForbidenAppInExamMode2[] = "forbidden in exam mode";
constexpr static char esForbidenAppInExamMode2[] = "forbidden in exam mode";
constexpr static char deForbidenAppInExamMode2[] = "forbidden in exam mode";
constexpr static char ptForbidenAppInExamMode2[] = "forbidden in exam mode";
constexpr static char enFracPart[] = "Fractional part";
constexpr static char frFracPart[] = "Partie fractionnaire";
constexpr static char esFracPart[] = "Parte fraccionaria";
constexpr static char deFracPart[] = "Bruchteil";
constexpr static char ptFracPart[] = "Parte fraccionaria";
constexpr static char enFrequency[] = "Frequency";
constexpr static char frFrequency[] = "Fréquence";
constexpr static char esFrequency[] = "Relativa";
constexpr static char deFrequency[] = "Relative";
constexpr static char ptFrequency[] = "Relativa";
constexpr static char enFunctionApp[] = "Functions";
constexpr static char frFunctionApp[] = "Fonctions";
constexpr static char esFunctionApp[] = "Función";
constexpr static char deFunctionApp[] = "Funktionen";
constexpr static char ptFunctionApp[] = "Função";
constexpr static char enFunctionAppCapital[] = "FUNCTIONS";
constexpr static char frFunctionAppCapital[] = "FONCTIONS";
constexpr static char esFunctionAppCapital[] = "FUNCION";
constexpr static char deFunctionAppCapital[] = "FUNKTIONEN";
constexpr static char ptFunctionAppCapital[] = "FUNCAO";
constexpr static char enFunctionColor[] = "Function color";
constexpr static char frFunctionColor[] = "Couleur de la fonction";
constexpr static char esFunctionColor[] = "Color de la funcion";
constexpr static char deFunctionColor[] = "Farbe der Funktion";
constexpr static char ptFunctionColor[] = "Cor da função";
constexpr static char enFunctionColumn[] = "0(0) column";
constexpr static char frFunctionColumn[] = "Colonne 0(0)";
constexpr static char esFunctionColumn[] = "Columna 0(0)";
constexpr static char deFunctionColumn[] = "0(0) Spalte";
constexpr static char ptFunctionColumn[] = "Coluna 0(0)";
constexpr static char enFunctionDomain[] = "Plot range";
constexpr static char frFunctionDomain[] = "Domaine de tracé";
constexpr static char esFunctionDomain[] = "Rango del gráfico";
constexpr static char deFunctionDomain[] = "Plot-Bereich";
constexpr static char ptFunctionDomain[] = "Intervalo do gráfico";
constexpr static char enFunctionOptions[] = "Function options";
constexpr static char frFunctionOptions[] = "Options de la fonction";
constexpr static char esFunctionOptions[] = "Opciones de la función";
constexpr static char deFunctionOptions[] = "Funktionsoptionen";
constexpr static char ptFunctionOptions[] = "Opções de função";
constexpr static char enFunctionTab[] = "Functions";
constexpr static char frFunctionTab[] = "Fonctions";
constexpr static char esFunctionTab[] = "Funciones";
constexpr static char deFunctionTab[] = "Funktionen";
constexpr static char ptFunctionTab[] = "Funções";
constexpr static char enFunctions[] = "Functions";
constexpr static char frFunctions[] = "Fonctions";
constexpr static char esFunctions[] = "Funciones";
constexpr static char deFunctions[] = "Funktionen";
constexpr static char ptFunctions[] = "Funções";
constexpr static char enFunctionsAndVariables[] = "Functions and variables";
constexpr static char frFunctionsAndVariables[] = "Fonctions et variables";
constexpr static char esFunctionsAndVariables[] = "Funciones y variables";
constexpr static char deFunctionsAndVariables[] = "Funktionen und Variablen";
constexpr static char ptFunctionsAndVariables[] = "Funções e variáveis";
constexpr static char enGAccelerationTag[] = "Acceleration (m·s^-2)";
constexpr static char frGAccelerationTag[] = "Accélération (m·s^-2)";
constexpr static char esGAccelerationTag[] = "Aceleración (m·s^-2)";
constexpr static char deGAccelerationTag[] = "Beschleunigung (m·s^-2)";
constexpr static char ptGAccelerationTag[] = "Aceleração (m·s^-2)";
constexpr static char enGConstantTag[] = "Constant (m^3·kg^-1·s^-2)";
constexpr static char frGConstantTag[] = "Constante (m^3·kg^-1·s^-2)";
constexpr static char esGConstantTag[] = "Constante (m^3·kg^-1·s^-2)";
constexpr static char deGConstantTag[] = "Konstant (m^3·kg^-1·s^-2)";
constexpr static char ptGConstantTag[] = "Constante (m^3·kg^-1·s^-2)";
constexpr static char enGasTag[] = "Gas constant (kJ·K^-1·mol^-1)";
constexpr static char frGasTag[] = "Const des gaz pfts(kJ·K^-1·mol^-1)";
constexpr static char esGasTag[] = "Constante de gas (kJ.K^-1·mol^-1)";
constexpr static char deGasTag[] = "Gaskonstante (kJ·K^-1·mol^-1)";
constexpr static char ptGasTag[] = "Constante de gás (kJ·K^-1·mol^-1)";
constexpr static char enGeometric[] = "Geometric";
constexpr static char frGeometric[] = "Géométrique";
constexpr static char esGeometric[] = "Geométrica";
constexpr static char deGeometric[] = "Geometrische";
constexpr static char ptGeometric[] = "Geométrica";
constexpr static char enGeometricDistribution[] = "Geometric distribution";
constexpr static char frGeometricDistribution[] = "Loi géométrique";
constexpr static char esGeometricDistribution[] = "Distribución geométrica";
constexpr static char deGeometricDistribution[] = "Geometrischeverteilung";
constexpr static char ptGeometricDistribution[] = "Distribuição geométrica";
constexpr static char enGoto[] = "Go to";
constexpr static char frGoto[] = "Aller à";
constexpr static char esGoto[] = "Ir a";
constexpr static char deGoto[] = "Gehe zu";
constexpr static char ptGoto[] = "Ir a";
constexpr static char enGradians[] = "Gradians ";
constexpr static char frGradians[] = "Grades ";
constexpr static char esGradians[] = "Gradianes ";
constexpr static char deGradians[] = "Gone ";
constexpr static char ptGradians[] = "Grados ";
constexpr static char enGraphTab[] = "Graph";
constexpr static char frGraphTab[] = "Graphique";
constexpr static char esGraphTab[] = "Gráfico";
constexpr static char deGraphTab[] = "Graph";
constexpr static char ptGraphTab[] = "Gráfico";
constexpr static char enGravitation[] = "Gravitation";
constexpr static char frGravitation[] = "Gravitation";
constexpr static char esGravitation[] = "Gravitación";
constexpr static char deGravitation[] = "Gravitation";
constexpr static char ptGravitation[] = "Gravitação";
constexpr static char enGreatCommonDivisor[] = "GCD";
constexpr static char frGreatCommonDivisor[] = "PGCD";
constexpr static char esGreatCommonDivisor[] = "MCD";
constexpr static char deGreatCommonDivisor[] = "ggT";
constexpr static char ptGreatCommonDivisor[] = "MDC";
constexpr static char enHardwareTestLaunch1[] = "You are starting the hardware";
constexpr static char frHardwareTestLaunch1[] = "Vous allez lancer le test usine.";
constexpr static char esHardwareTestLaunch1[] = "Esta iniciando la prueba de";
constexpr static char deHardwareTestLaunch1[] = "Sie sind dabei den Hardwaretest zu";
constexpr static char ptHardwareTestLaunch1[] = "Você vai executar o teste da planta.";
constexpr static char enHardwareTestLaunch2[] = " test. At the end of the test, you";
constexpr static char frHardwareTestLaunch2[] = "Pour en sortir vous devrez";
constexpr static char esHardwareTestLaunch2[] = "fabrica. Para quitar la prueba,";
constexpr static char deHardwareTestLaunch2[] = "starten. Um ihn wieder zu verlassen,";
constexpr static char ptHardwareTestLaunch2[] = "Para sair você tem que executar";
constexpr static char enHardwareTestLaunch3[] = "will have to reset the device and";
constexpr static char frHardwareTestLaunch3[] = "appuyer sur le bouton reset";
constexpr static char esHardwareTestLaunch3[] = "debera resetear su equipo.";
constexpr static char deHardwareTestLaunch3[] = "müssen Sie einen Reset durchfuhren,";
constexpr static char ptHardwareTestLaunch3[] = "uma redefinição, que ira apagar";
constexpr static char enHardwareTestLaunch4[] = "all your data will be deleted.";
constexpr static char frHardwareTestLaunch4[] = "ce qui supprimera vos données.";
constexpr static char esHardwareTestLaunch4[] = "";
constexpr static char deHardwareTestLaunch4[] = "der Ihre Daten löschen wird.";
constexpr static char ptHardwareTestLaunch4[] = "seus dados.";
constexpr static char enHideDerivativeColumn[] = "Hide the derivative function";
constexpr static char frHideDerivativeColumn[] = "Masquer la fonction dérivée";
constexpr static char esHideDerivativeColumn[] = "Ocultar la derivada";
constexpr static char deHideDerivativeColumn[] = "Ableitungsfunktion ausblenden";
constexpr static char ptHideDerivativeColumn[] = "Esconder função derivada";
constexpr static char enHistogramSet[] = "Histogram settings";
constexpr static char frHistogramSet[] = "Réglage de l'histogramme";
constexpr static char esHistogramSet[] = "Parámetros del histograma";
constexpr static char deHistogramSet[] = "Einstellung des Histogramms";
constexpr static char ptHistogramSet[] = "Configurando o histograma";
constexpr static char enHistogramTab[] = "Histogram";
constexpr static char frHistogramTab[] = "Histogramme";
constexpr static char esHistogramTab[] = "Histograma";
constexpr static char deHistogramTab[] = "Histogramm";
constexpr static char ptHistogramTab[] = "Histograma";
constexpr static char enHyperbolicCosine[] = "Hyperbolic cosine";
constexpr static char frHyperbolicCosine[] = "Cosinus hyperbolique";
constexpr static char esHyperbolicCosine[] = "Coseno hiperbólico";
constexpr static char deHyperbolicCosine[] = "Kosinus hyperbolicus";
constexpr static char ptHyperbolicCosine[] = "Cosseno hiperbólico";
constexpr static char enHyperbolicSine[] = "Hyperbolic sine";
constexpr static char frHyperbolicSine[] = "Sinus hyperbolique";
constexpr static char esHyperbolicSine[] = "Seno hiperbólico";
constexpr static char deHyperbolicSine[] = "Sinus hyperbolicus";
constexpr static char ptHyperbolicSine[] = "Seno hiperbólico";
constexpr static char enHyperbolicTangent[] = "Hyperbolic tangent";
constexpr static char frHyperbolicTangent[] = "Tangente hyperbolique";
constexpr static char esHyperbolicTangent[] = "Tangente hiperbòlica";
constexpr static char deHyperbolicTangent[] = "Tangens hyperbolicus";
constexpr static char ptHyperbolicTangent[] = "Tangente hiperbólica";
constexpr static char enHyperbolicTrigonometry[] = "Hyperbolic trigonometry";
constexpr static char frHyperbolicTrigonometry[] = "Trigonométrie hyperbolique";
constexpr static char esHyperbolicTrigonometry[] = "Trigonometría hiperbólica";
constexpr static char deHyperbolicTrigonometry[] = "Hyperbelfunktionen";
constexpr static char ptHyperbolicTrigonometry[] = "Funções hiperbólicas";
constexpr static char enIdentity[] = "Identity matrix of size n";
constexpr static char frIdentity[] = "Matrice identité de taille n";
constexpr static char esIdentity[] = "Matriz identidad de tamaño n";
constexpr static char deIdentity[] = "Einheitsmatrix der Größe n";
constexpr static char ptIdentity[] = "Matriz identidade de ordem n";
constexpr static char enImaginaryPart[] = "Imaginary part";
constexpr static char frImaginaryPart[] = "Partie imaginaire";
constexpr static char esImaginaryPart[] = "Parte imaginaria";
constexpr static char deImaginaryPart[] = "Imaginärteil";
constexpr static char ptImaginaryPart[] = "Parte imaginária";
constexpr static char enImportList[] = "Import from a list";
constexpr static char frImportList[] = "Importer une liste";
constexpr static char esImportList[] = "Importar una lista";
constexpr static char deImportList[] = "Laden einer Liste";
constexpr static char ptImportList[] = "Importar de uma lista";
constexpr static char enInfiniteNumberOfSolutions[] = "There are an infinite number of solutions";
constexpr static char frInfiniteNumberOfSolutions[] = "Le système admet une infinité de solutions";
constexpr static char esInfiniteNumberOfSolutions[] = "Hay un número infinito de soluciones";
constexpr static char deInfiniteNumberOfSolutions[] = "Es gibt unendlich viele Lösungen";
constexpr static char ptInfiniteNumberOfSolutions[] = "Existe uma infinidade de soluções";
constexpr static char enInitialization[] = "Preadjustment";
constexpr static char frInitialization[] = "Initialisation";
constexpr static char esInitialization[] = "Inicialización";
constexpr static char deInitialization[] = "Initialisierung";
constexpr static char ptInitialization[] = "Inicialização";
constexpr static char enIntegral[] = "Integral";
constexpr static char frIntegral[] = "Intégrale";
constexpr static char esIntegral[] = "Integral";
constexpr static char deIntegral[] = "Integral";
constexpr static char ptIntegral[] = "Integral";
constexpr static char enInterquartileRange[] = "Interquartile range";
constexpr static char frInterquartileRange[] = "Ecart interquartile";
constexpr static char esInterquartileRange[] = "Rango intercuartilo";
constexpr static char deInterquartileRange[] = "Interquartilsabstand";
constexpr static char ptInterquartileRange[] = "Interquartil";
constexpr static char enIntersection[] = "Intersection";
constexpr static char frIntersection[] = "Intersection";
constexpr static char esIntersection[] = "Intersección";
constexpr static char deIntersection[] = "Schnittmenge";
constexpr static char ptIntersection[] = "Intersecção";
constexpr static char enInterval[] = " Interval ";
constexpr static char frInterval[] = " Intervalle ";
constexpr static char esInterval[] = " Intervalo";
constexpr static char deInterval[] = " Intervall";
constexpr static char ptInterval[] = " Intervalo";
constexpr static char enIntervalDefinition[] = "[a,b]: Interval";
constexpr static char frIntervalDefinition[] = "[a,b] : Intervalle";
constexpr static char esIntervalDefinition[] = "[a,b] : Intervalo";
constexpr static char deIntervalDefinition[] = "[a,b]: Intervall";
constexpr static char ptIntervalDefinition[] = "[a,b] : Intervalo";
constexpr static char enIntervalSet[] = "Set the interval";
constexpr static char frIntervalSet[] = "Régler l'intervalle";
constexpr static char esIntervalSet[] = "Ajustar el intervalo";
constexpr static char deIntervalSet[] = "Intervall einstellen";
constexpr static char ptIntervalSet[] = "Ajustar o intervalo";
constexpr static char enIntervalT[] = "t interval";
constexpr static char frIntervalT[] = "Intervalle t";
constexpr static char esIntervalT[] = "Intervalo t";
constexpr static char deIntervalT[] = "t-te Intervall";
constexpr static char ptIntervalT[] = "Intervalo t";
constexpr static char enIntervalTheta[] = "θ interval";
constexpr static char frIntervalTheta[] = "Intervalle θ";
constexpr static char esIntervalTheta[] = "Intervalo θ";
constexpr static char deIntervalTheta[] = "θ-te Intervall";
constexpr static char ptIntervalTheta[] = "Intervalo θ";
constexpr static char enIntervalX[] = "x interval";
constexpr static char frIntervalX[] = "Intervalle x";
constexpr static char esIntervalX[] = "Intervalo x";
constexpr static char deIntervalX[] = "x-te Intervall";
constexpr static char ptIntervalX[] = "Intervalo x";
constexpr static char enInvBinomial[] = "m where P(X<=m)=a, X follows B(n,p)";
constexpr static char frInvBinomial[] = "m où P(X<=m)=a et X suit B(n,p)";
constexpr static char esInvBinomial[] = "m donde P(X<=m)=a y X sigue B(n,p)";
constexpr static char deInvBinomial[] = "m wo P(X<=m)=a und X folgt B(n,p)";
constexpr static char ptInvBinomial[] = "m onde P(X<=m)=a e X segue B(n,p)";
constexpr static char enInvNorm[] = "m where P(X<m)=a, X follows N(μ,σ2)";
constexpr static char frInvNorm[] = "m où P(X<m)=a et X suit N(μ,σ2)";
constexpr static char esInvNorm[] = "m donde P(X<m)=a y X sigue N(μ,σ2)";
constexpr static char deInvNorm[] = "m wo P(X<m)=a und X folgt N(μ,σ2)";
constexpr static char ptInvNorm[] = "m onde P(X<m)=a e X segue N(μ,σ2)";
constexpr static char enInvSort[] = "Sort descending";
constexpr static char frInvSort[] = "Tri décroissant";
constexpr static char esInvSort[] = "Clasificación descendente";
constexpr static char deInvSort[] = "Sortieren absteigend";
constexpr static char ptInvSort[] = "Ordem decrescente";
constexpr static char enInverse[] = "Inverse";
constexpr static char frInverse[] = "Inverse";
constexpr static char esInverse[] = "Inversa";
constexpr static char deInverse[] = "Inverse";
constexpr static char ptInverse[] = "Matriz inversa";
constexpr static char enInverseHyperbolicCosine[] = "Inverse hyperbolic cosine";
constexpr static char frInverseHyperbolicCosine[] = "Argument cosinus hyperbolique";
constexpr static char esInverseHyperbolicCosine[] = "Argumento coseno hiperbólico";
constexpr static char deInverseHyperbolicCosine[] = "Areakosinus hyperbolicus";
constexpr static char ptInverseHyperbolicCosine[] = "Arco cosseno hiperbólico";
constexpr static char enInverseHyperbolicSine[] = "Inverse hyperbolic sine";
constexpr static char frInverseHyperbolicSine[] = "Argument sinus hyperbolique";
constexpr static char esInverseHyperbolicSine[] = "Argumento seno hiperbólico";
constexpr static char deInverseHyperbolicSine[] = "Areasinus hyperbolicus";
constexpr static char ptInverseHyperbolicSine[] = "Arco seno hiperbólico";
constexpr static char enInverseHyperbolicTangent[] = "Inverse hyperbolic tangent";
constexpr static char frInverseHyperbolicTangent[] = "Argument tangente hyperbolique";
constexpr static char esInverseHyperbolicTangent[] = "Argumento tangente hiperbólica";
constexpr static char deInverseHyperbolicTangent[] = "Areatangens hyperbolicus";
constexpr static char ptInverseHyperbolicTangent[] = "Arco tangente hiperbólica";
constexpr static char enLEDColor[] = "LED color";
constexpr static char frLEDColor[] = "Couleur LED";
constexpr static char esLEDColor[] = "Color del LED";
constexpr static char deLEDColor[] = "LEDs farbe";
constexpr static char ptLEDColor[] = "Cor LED";
constexpr static char enLambdaExponentialDefinition[] = "λ: Rate parameter";
constexpr static char frLambdaExponentialDefinition[] = "λ : Paramètre";
constexpr static char esLambdaExponentialDefinition[] = "λ : Parámetro";
constexpr static char deLambdaExponentialDefinition[] = "λ: Parameter";
constexpr static char ptLambdaExponentialDefinition[] = "λ : Parâmetro";
constexpr static char enLambdaPoissonDefinition[] = "λ: Parameter";
constexpr static char frLambdaPoissonDefinition[] = "λ : Paramètre";
constexpr static char esLambdaPoissonDefinition[] = "λ : Parámetro";
constexpr static char deLambdaPoissonDefinition[] = "λ: Parameter";
constexpr static char ptLambdaPoissonDefinition[] = "λ : Parâmetro";
constexpr static char enLanguage[] = "Language";
constexpr static char frLanguage[] = "Langue";
constexpr static char esLanguage[] = "Idioma";
constexpr static char deLanguage[] = "Sprache";
constexpr static char ptLanguage[] = "Idioma";
constexpr static char enLeastCommonMultiple[] = "LCM";
constexpr static char frLeastCommonMultiple[] = "PPCM";
constexpr static char esLeastCommonMultiple[] = "MCM";
constexpr static char deLeastCommonMultiple[] = "kgV";
constexpr static char ptLeastCommonMultiple[] = "MMC";
constexpr static char enLinear[] = "Linear";
constexpr static char frLinear[] = "Linéaire";
constexpr static char esLinear[] = "Lineal";
constexpr static char deLinear[] = "Lineare";
constexpr static char ptLinear[] = "Linear";
constexpr static char enLists[] = "List";
constexpr static char frLists[] = "Listes";
constexpr static char esLists[] = "Listas";
constexpr static char deLists[] = "Listen";
constexpr static char ptLists[] = "Listas";
constexpr static char enLogarithmic[] = "Logarithmic";
constexpr static char frLogarithmic[] = "Logarithmique";
constexpr static char esLogarithmic[] = "Logarítmica";
constexpr static char deLogarithmic[] = "Logarithmische";
constexpr static char ptLogarithmic[] = "Logarítmica";
constexpr static char enLogistic[] = "Logistic";
constexpr static char frLogistic[] = "Logistique";
constexpr static char esLogistic[] = "Logística";
constexpr static char deLogistic[] = "Logistische";
constexpr static char ptLogistic[] = "Logística";
constexpr static char enLoopsAndTests[] = "Loops and tests";
constexpr static char frLoopsAndTests[] = "Boucles et tests";
constexpr static char esLoopsAndTests[] = "Loops and tests";
constexpr static char deLoopsAndTests[] = "Schleifen und Tests";
constexpr static char ptLoopsAndTests[] = "Loops and tests";
constexpr static char enLowBattery[] = "Low battery";
constexpr static char frLowBattery[] = "Batterie faible";
constexpr static char esLowBattery[] = "Batería baja";
constexpr static char deLowBattery[] = "Batterie erschöpft";
constexpr static char ptLowBattery[] = "Bateria fraca";
constexpr static char enMathOptions[] = "Math options";
constexpr static char frMathOptions[] = "Math";
constexpr static char esMathOptions[] = "Matemáticas";
constexpr static char deMathOptions[] = "Mathe-optionen";
constexpr static char ptMathOptions[] = "Matemática";
constexpr static char enMatrices[] = "Matrix";
constexpr static char frMatrices[] = "Matrices";
constexpr static char esMatrices[] = "Matriz";
constexpr static char deMatrices[] = "Matrizen";
constexpr static char ptMatrices[] = "Matrizes";
constexpr static char enMaximum[] = "Maximum";
constexpr static char frMaximum[] = "Maximum";
constexpr static char esMaximum[] = "Máximo";
constexpr static char deMaximum[] = "Maximalwert";
constexpr static char ptMaximum[] = "Máximo";
constexpr static char enMean[] = "Mean";
constexpr static char frMean[] = "Moyenne";
constexpr static char esMean[] = "Media";
constexpr static char deMean[] = "Mittelwert";
constexpr static char ptMean[] = "Média";
constexpr static char enMeanDefinition[] = "μ: Mean";
constexpr static char frMeanDefinition[] = "μ : Espérance ou moyenne";
constexpr static char esMeanDefinition[] = "μ : Media";
constexpr static char deMeanDefinition[] = "μ: Erwartungswert";
constexpr static char ptMeanDefinition[] = "μ : Média";
constexpr static char enMeanDot[] = "mean";
constexpr static char frMeanDot[] = "moyen";
constexpr static char esMeanDot[] = "media";
constexpr static char deMeanDot[] = "mittel";
constexpr static char ptMeanDot[] = "media";
constexpr static char enMedian[] = "Median";
constexpr static char frMedian[] = "Médiane";
constexpr static char esMedian[] = "Mediana";
constexpr static char deMedian[] = "Median";
constexpr static char ptMedian[] = "Mediana";
constexpr static char enMicroPythonVersion[] = "μPython version";
constexpr static char frMicroPythonVersion[] = "Version de μPython";
constexpr static char esMicroPythonVersion[] = "Version de μPython";
constexpr static char deMicroPythonVersion[] = "μPythonversion";
constexpr static char ptMicroPythonVersion[] = "Versao do μPython";
constexpr static char enMinimum[] = "Minimum";
constexpr static char frMinimum[] = "Minimum";
constexpr static char esMinimum[] = "Mínimo";
constexpr static char deMinimum[] = "Mindestwert";
constexpr static char ptMinimum[] = "Mínimo";
constexpr static char enModules[] = "Modules";
constexpr static char frModules[] = "Modules";
constexpr static char esModules[] = "Modules";
constexpr static char deModules[] = "Module";
constexpr static char ptModules[] = "Modules";
constexpr static char enMolarMassesByAlpha[] = "Molar masses (A,B...)";
constexpr static char frMolarMassesByAlpha[] = "Masses molaires (A,B...)";
constexpr static char esMolarMassesByAlpha[] = "Masas molares (A,B...)";
constexpr static char deMolarMassesByAlpha[] = "Molmassen (A,B...)";
constexpr static char ptMolarMassesByAlpha[] = "Massas molares (A,B...)";
constexpr static char enMolarMassesByNumber[] = "Molar masses (1,2...)";
constexpr static char frMolarMassesByNumber[] = "Masses molaires (1,2...)";
constexpr static char esMolarMassesByNumber[] = "Masas molares (1,2...)";
constexpr static char deMolarMassesByNumber[] = "Molmassen (1,2...)";
constexpr static char ptMolarMassesByNumber[] = "Massas molares (1,2...)";
constexpr static char enMove[] = " Move: ";
constexpr static char frMove[] = " Déplacer : ";
constexpr static char esMove[] = " Mover : ";
constexpr static char deMove[] = " Verschieben: ";
constexpr static char ptMove[] = " Mover : ";
constexpr static char enNColumn[] = "n column";
constexpr static char frNColumn[] = "Colonne n";
constexpr static char esNColumn[] = "Columna n";
constexpr static char deNColumn[] = "n-te Spalte";
constexpr static char ptNColumn[] = "Coluna n";
constexpr static char enNEnd[] = "N end";
constexpr static char frNEnd[] = "N fin";
constexpr static char esNEnd[] = "N fin";
constexpr static char deNEnd[] = "N Endwert";
constexpr static char ptNEnd[] = "N fim";
constexpr static char enNStart[] = "N start";
constexpr static char frNStart[] = "N début";
constexpr static char esNStart[] = "N inicio";
constexpr static char deNStart[] = "N Startwert";
constexpr static char ptNStart[] = "N inicio";
constexpr static char enNameCannotStartWithNumber[] = "A name cannot start with a number";
constexpr static char frNameCannotStartWithNumber[] = "Un nom ne peut pas commencer par un chiffre";
constexpr static char esNameCannotStartWithNumber[] = "Un nombre no puede empezar con un número";
constexpr static char deNameCannotStartWithNumber[] = "Ein Name darf nicht mit einer Zahl beginnen";
constexpr static char ptNameCannotStartWithNumber[] = "Um nome não pode começar com um número";
constexpr static char enNameTaken[] = "This name has already been taken";
constexpr static char frNameTaken[] = "Ce nom est déjà utilisé";
constexpr static char esNameTaken[] = "Este nombre ya está en uso";
constexpr static char deNameTaken[] = "Dieser Name ist bereits vergeben";
constexpr static char ptNameTaken[] = "Este nome é já usado";
constexpr static char enNameTooLong[] = "This name is too long";
constexpr static char frNameTooLong[] = "Ce nom est trop long";
constexpr static char esNameTooLong[] = "Este nombre es demasiado largo";
constexpr static char deNameTooLong[] = "Der Name ist zu lang";
constexpr static char ptNameTooLong[] = "Este nome é muito longo";
constexpr static char enNeutronMassTag[] = "Mass of a neutron (kg)";
constexpr static char frNeutronMassTag[] = "Masse d'un neutron (kg)";
constexpr static char esNeutronMassTag[] = "Masa de un neutrón (kg)";
constexpr static char deNeutronMassTag[] = "Masse eines Neutrons (kg)";
constexpr static char ptNeutronMassTag[] = "Massa de um nêutron (kg)";
constexpr static char enNewMatrix[] = "New matrix";
constexpr static char frNewMatrix[] = "Nouvelle matrice";
constexpr static char esNewMatrix[] = "Nueva matriz";
constexpr static char deNewMatrix[] = "Neue Matrix";
constexpr static char ptNewMatrix[] = "Nova matriz";
constexpr static char enNext[] = "Next";
constexpr static char frNext[] = "Suivant";
constexpr static char esNext[] = "Siguiente";
constexpr static char deNext[] = "Nächste";
constexpr static char ptNext[] = "Seguinte";
constexpr static char enNoActivatedFunction[] = "No function is turned on";
constexpr static char frNoActivatedFunction[] = "Aucune fonction activée";
constexpr static char esNoActivatedFunction[] = "Ninguna función activada";
constexpr static char deNoActivatedFunction[] = "Keine aktive Funktion";
constexpr static char ptNoActivatedFunction[] = "Sem função ativada";
constexpr static char enNoActivatedSequence[] = "No sequence is turned on";
constexpr static char frNoActivatedSequence[] = "Aucune suite activée";
constexpr static char esNoActivatedSequence[] = "Ninguna sucesión activada";
constexpr static char deNoActivatedSequence[] = "Keine aktive Folge";
constexpr static char ptNoActivatedSequence[] = "Sem sequência ativada";
constexpr static char enNoDataToPlot[] = "No data to draw";
constexpr static char frNoDataToPlot[] = "Aucune donnée à tracer";
constexpr static char esNoDataToPlot[] = "Ningunos datos que dibujar";
constexpr static char deNoDataToPlot[] = "Keine Daten zum Zeichnen";
constexpr static char ptNoDataToPlot[] = "Não ha dados para desenhar";
constexpr static char enNoFunction[] = "No function";
constexpr static char frNoFunction[] = "Aucune fonction";
constexpr static char esNoFunction[] = "Ninguna función";
constexpr static char deNoFunction[] = "Keine Funktion";
constexpr static char ptNoFunction[] = "Nenhuma função";
constexpr static char enNoFunctionToDelete[] = "No function to delete";
constexpr static char frNoFunctionToDelete[] = "Pas de fonction à supprimer";
constexpr static char esNoFunctionToDelete[] = "Ninguna función que eliminar";
constexpr static char deNoFunctionToDelete[] = "Keine Funktion zum Löschen";
constexpr static char ptNoFunctionToDelete[] = "Sem função para eliminar";
constexpr static char enNoIntersectionFound[] = "No intersection found";
constexpr static char frNoIntersectionFound[] = "Aucune intersection trouvée";
constexpr static char esNoIntersectionFound[] = "Ninguna intersección encontrada";
constexpr static char deNoIntersectionFound[] = "Kein Schnittpunkt gefunden";
constexpr static char ptNoIntersectionFound[] = "Nenhuma intersecção encontrada";
constexpr static char enNoMaximumFound[] = "No maximum found";
constexpr static char frNoMaximumFound[] = "Aucun maximum trouvé";
constexpr static char esNoMaximumFound[] = "Níngun máximo encontrado";
constexpr static char deNoMaximumFound[] = "Kein Maximalwert gefunden";
constexpr static char ptNoMaximumFound[] = "Nenhum máximo encontrado";
constexpr static char enNoMinimumFound[] = "No minimum found";
constexpr static char frNoMinimumFound[] = "Aucun minimum trouvé";
constexpr static char esNoMinimumFound[] = "Níngun mínimo encontrado";
constexpr static char deNoMinimumFound[] = "Kein Mindestwert gefunden";
constexpr static char ptNoMinimumFound[] = "Nenhum mínimo encontrado";
constexpr static char enNoPreimageFound[] = "No inverse image found";
constexpr static char frNoPreimageFound[] = "Aucun antécédent trouvé";
constexpr static char esNoPreimageFound[] = "Ninguna imagen inversa encontrada";
constexpr static char deNoPreimageFound[] = "Kein Urbild gefunden";
constexpr static char ptNoPreimageFound[] = "Nenhuma imagem inversa encontrada";
constexpr static char enNoSequence[] = "No sequence";
constexpr static char frNoSequence[] = "Aucune suite";
constexpr static char esNoSequence[] = "Ninguna sucesión";
constexpr static char deNoSequence[] = "Keine Folge";
constexpr static char ptNoSequence[] = "Sem sequência";
constexpr static char enNoSolutionEquation[] = "The equation has no solution";
constexpr static char frNoSolutionEquation[] = "L'équation n'admet aucune solution";
constexpr static char esNoSolutionEquation[] = "La ecuación no tiene solución";
constexpr static char deNoSolutionEquation[] = "Die Gleichung hat keine Lösung";
constexpr static char ptNoSolutionEquation[] = "A equação não tem solução";
constexpr static char enNoSolutionInterval[] = "No solution found in the interval";
constexpr static char frNoSolutionInterval[] = "Aucune solution trouvée dans cet intervalle";
constexpr static char esNoSolutionInterval[] = "Ninguna solución encontrada en el intervalo";
constexpr static char deNoSolutionInterval[] = "Keine Lösung im Intervall gefunden";
constexpr static char ptNoSolutionInterval[] = "Nenhuma solução encontrada em el intervalo";
constexpr static char enNoSolutionSystem[] = "The system has no solution";
constexpr static char frNoSolutionSystem[] = "Le système n'admet aucune solution";
constexpr static char esNoSolutionSystem[] = "El sistema no tiene solución";
constexpr static char deNoSolutionSystem[] = "Das System hat keine Lösung";
constexpr static char ptNoSolutionSystem[] = "O sistema não tem solução";
constexpr static char enNoValueToCompute[] = "No values to calculate";
constexpr static char frNoValueToCompute[] = "Aucune grandeur à calculer";
constexpr static char esNoValueToCompute[] = "Ninguna medida que calcular";
constexpr static char deNoValueToCompute[] = "Keine Größe zum Berechnen";
constexpr static char ptNoValueToCompute[] = "Nenhuma quantidade para calcular";
constexpr static char enNoZeroFound[] = "No zero found";
constexpr static char frNoZeroFound[] = "Aucun zéro trouvé";
constexpr static char esNoZeroFound[] = "Ninguna raíz encontrada";
constexpr static char deNoZeroFound[] = "Keine Nullstelle gefunden";
constexpr static char ptNoZeroFound[] = "Nenhuma raiz encontrada";
constexpr static char enNonLinearSystem[] = "The system is not linear";
constexpr static char frNonLinearSystem[] = "Le système n'est pas linéaire";
constexpr static char esNonLinearSystem[] = "El sistema no es lineal";
constexpr static char deNonLinearSystem[] = "Das System ist nicht linear";
constexpr static char ptNonLinearSystem[] = "O sistema não é linear";
constexpr static char enNormCDF[] = "P(X<a) where X follows N(μ,σ2)";
constexpr static char frNormCDF[] = "P(X<a) où X suit N(μ,σ2)";
constexpr static char esNormCDF[] = "P(X<a) donde X sigue N(μ,σ2)";
constexpr static char deNormCDF[] = "P(X<a) wo X folgt N(μ,σ2)";
constexpr static char ptNormCDF[] = "P(X<a) onde X segue N(μ,σ2)";
constexpr static char enNormCDF2[] = "P(a<X<b) where X follows N(μ,σ2)";
constexpr static char frNormCDF2[] = "P(a<X<b) où X suit N(μ,σ2)";
constexpr static char esNormCDF2[] = "P(a<X<b) donde X sigue N(μ,σ2)";
constexpr static char deNormCDF2[] = "P(a<X<b) wo X folgt N(μ,σ2)";
constexpr static char ptNormCDF2[] = "P(a<X<b) onde X segue N(μ,σ2)";
constexpr static char enNormPDF[] = "Probability density of N(μ,σ2)";
constexpr static char frNormPDF[] = "Fonction densité N(μ,σ2)";
constexpr static char esNormPDF[] = "Densidad de probabilidad de N(μ,σ2)";
constexpr static char deNormPDF[] = "Wahrscheinlichkeitsdichte N(μ,σ2)";
constexpr static char ptNormPDF[] = "Densidade de probabilidade de N(μ,σ2)";
constexpr static char enNormal[] = "Normal";
constexpr static char frNormal[] = "Normale";
constexpr static char esNormal[] = "Normal";
constexpr static char deNormal[] = "Normal";
constexpr static char ptNormal[] = "Normal";
constexpr static char enNormalDistribution[] = "Normal distribution";
constexpr static char frNormalDistribution[] = "Loi normale";
constexpr static char esNormalDistribution[] = "Distribución normal";
constexpr static char deNormalDistribution[] = "Normalverteilung";
constexpr static char ptNormalDistribution[] = "Distribuição normal";
constexpr static char enNthRoot[] = "nth-root";
constexpr static char frNthRoot[] = "Racine n-ième";
constexpr static char esNthRoot[] = "Raíz enesima";
constexpr static char deNthRoot[] = "n-te Wurzel";
constexpr static char ptNthRoot[] = "Radiciacao";
constexpr static char enNumberElementAc[] = "89 - Actinium (Ac)";
constexpr static char frNumberElementAc[] = "89 - Actinium (Ac)";
constexpr static char esNumberElementAc[] = "89 - Actinio (Ac)";
constexpr static char deNumberElementAc[] = "89 - Aktinium (Ac)";
constexpr static char ptNumberElementAc[] = "89 - Actínio (Ac)";
constexpr static char enNumberElementAg[] = "47 - Money (Ag)";
constexpr static char frNumberElementAg[] = "47 - Argent (Ag)";
constexpr static char esNumberElementAg[] = "47 - Dinero (Ag)";
constexpr static char deNumberElementAg[] = "47 - Geld (Ag)";
constexpr static char ptNumberElementAg[] = "47 - Dinheiro (Ag)";
constexpr static char enNumberElementAl[] = "13 - Aluminum (Al)";
constexpr static char frNumberElementAl[] = "13 - Aluminium (Al)";
constexpr static char esNumberElementAl[] = "13 - Aluminio (Al)";
constexpr static char deNumberElementAl[] = "13 - Aluminium (Al)";
constexpr static char ptNumberElementAl[] = "13 - Alumínio (Al)";
constexpr static char enNumberElementAm[] = "95 - Americium (Am)";
constexpr static char frNumberElementAm[] = "95 - Américium (Am)";
constexpr static char esNumberElementAm[] = "95 - Americio (Am)";
constexpr static char deNumberElementAm[] = "95 - Americium (Am)";
constexpr static char ptNumberElementAm[] = "95 - Amerício (Am)";
constexpr static char enNumberElementAr[] = "18 - Argon (Ar)";
constexpr static char frNumberElementAr[] = "18 - Argon (Ar)";
constexpr static char esNumberElementAr[] = "18 - Argón (Ar)";
constexpr static char deNumberElementAr[] = "18 - Argon (Ar)";
constexpr static char ptNumberElementAr[] = "18 - Argão (Ar)";
constexpr static char enNumberElementAs[] = "33 - Arsenic (As)";
constexpr static char frNumberElementAs[] = "33 - Arsenic (As)";
constexpr static char esNumberElementAs[] = "33 - Arsénico (As)";
constexpr static char deNumberElementAs[] = "33 - Arsen (As)";
constexpr static char ptNumberElementAs[] = "33 - Arsênico (As)";
constexpr static char enNumberElementAt[] = "85 - astatine (At)";
constexpr static char frNumberElementAt[] = "85 - Astate (At)";
constexpr static char esNumberElementAt[] = "85 - Astato (At)";
constexpr static char deNumberElementAt[] = "85 - Astat (At)";
constexpr static char ptNumberElementAt[] = "85 - Astatine (At)";
constexpr static char enNumberElementAu[] = "79 - Gold (Au)";
constexpr static char frNumberElementAu[] = "79 - Or (O)";
constexpr static char esNumberElementAu[] = "79 - Oro (O)";
constexpr static char deNumberElementAu[] = "79 - Gold (O)";
constexpr static char ptNumberElementAu[] = "79 - Ouro (O)";
constexpr static char enNumberElementB[] = "5 - Boron (B)";
constexpr static char frNumberElementB[] = "5 - Bore (B)";
constexpr static char esNumberElementB[] = "5 - Boro (B)";
constexpr static char deNumberElementB[] = "5 - Bor (B)";
constexpr static char ptNumberElementB[] = "5 - Boro (B)";
constexpr static char enNumberElementBa[] = "56 - Barium (Ba)";
constexpr static char frNumberElementBa[] = "56 - Baryum (Ba)";
constexpr static char esNumberElementBa[] = "56 - Bario (Ba)";
constexpr static char deNumberElementBa[] = "56 - Barium (Ba)";
constexpr static char ptNumberElementBa[] = "56 - Bário (Ba)";
constexpr static char enNumberElementBe[] = "4 - Beryllium (Be)";
constexpr static char frNumberElementBe[] = "4 - Béryllium (Be)";
constexpr static char esNumberElementBe[] = "4 - Berilio (Be)";
constexpr static char deNumberElementBe[] = "4 - Beryllium (Be)";
constexpr static char ptNumberElementBe[] = "4 - Berílio (Be)";
constexpr static char enNumberElementBh[] = "107 - Bohrium (Bh)";
constexpr static char frNumberElementBh[] = "107 - Bohrium (Bh)";
constexpr static char esNumberElementBh[] = "107 - Bohrio (Bh)";
constexpr static char deNumberElementBh[] = "107 - Bohrium (Bh)";
constexpr static char ptNumberElementBh[] = "107 - Bohrium (Bh)";
constexpr static char enNumberElementBi[] = "83 - Bismuth (Bi)";
constexpr static char frNumberElementBi[] = "83 - Bismuth (Bi)";
constexpr static char esNumberElementBi[] = "83 - Bismuto (Bi)";
constexpr static char deNumberElementBi[] = "83 - Wismut (Bi)";
constexpr static char ptNumberElementBi[] = "83 - Bismuto (Bi)";
constexpr static char enNumberElementBk[] = "97 - Berkelium (Bk)";
constexpr static char frNumberElementBk[] = "97 - Berkélium (Bk)";
constexpr static char esNumberElementBk[] = "97 - Berkelio (Bk)";
constexpr static char deNumberElementBk[] = "97 - Berkelium (Bk)";
constexpr static char ptNumberElementBk[] = "97 - Berkelium (Bk)";
constexpr static char enNumberElementBr[] = "35 - Bromine (Br)";
constexpr static char frNumberElementBr[] = "35 - Brome (Br)";
constexpr static char esNumberElementBr[] = "35 - Bromo (Br)";
constexpr static char deNumberElementBr[] = "35 - Brom (Br)";
constexpr static char ptNumberElementBr[] = "35 - Bromo (Br)";
constexpr static char enNumberElementC[] = "6 - Carbon (C)";
constexpr static char frNumberElementC[] = "6 - Carbone (C)";
constexpr static char esNumberElementC[] = "6 - Carbono (C)";
constexpr static char deNumberElementC[] = "6 - Kohlenstoff (C)";
constexpr static char ptNumberElementC[] = "6 - Carbono (C)";
constexpr static char enNumberElementCa[] = "20 - Calcium (Ca)";
constexpr static char frNumberElementCa[] = "20 - Calcium (Ca)";
constexpr static char esNumberElementCa[] = "20 - Calcio (Ca)";
constexpr static char deNumberElementCa[] = "20 - Kalzium (Ca)";
constexpr static char ptNumberElementCa[] = "20 - Cálcio (Ca)";
constexpr static char enNumberElementCd[] = "48 - Cadmium (Cd)";
constexpr static char frNumberElementCd[] = "48 - Cadmium (Cd)";
constexpr static char esNumberElementCd[] = "48 - Cadmio (Cd)";
constexpr static char deNumberElementCd[] = "48 - Cadmium (Cd)";
constexpr static char ptNumberElementCd[] = "48 - Cádmio (Cd)";
constexpr static char enNumberElementCe[] = "58 - Cerium (Ce)";
constexpr static char frNumberElementCe[] = "58 - Cérium (Ce)";
constexpr static char esNumberElementCe[] = "58 - Cerio (Ce)";
constexpr static char deNumberElementCe[] = "58 - Cer (Ce)";
constexpr static char ptNumberElementCe[] = "58 - Cério (Ce)";
constexpr static char enNumberElementCf[] = "98 - Californium (Cf)";
constexpr static char frNumberElementCf[] = "98 - Californium (Cf)";
constexpr static char esNumberElementCf[] = "98 - Californio (Cf)";
constexpr static char deNumberElementCf[] = "98 - Californium (Cf)";
constexpr static char ptNumberElementCf[] = "98 - Californium (Cf)";
constexpr static char enNumberElementCl[] = "17 - Chlorine (Cl)";
constexpr static char frNumberElementCl[] = "17 - Chlore (Cl)";
constexpr static char esNumberElementCl[] = "17 - Cloro (Cl)";
constexpr static char deNumberElementCl[] = "17 - Chlor (Cl)";
constexpr static char ptNumberElementCl[] = "17 - Cloro (Cl)";
constexpr static char enNumberElementCm[] = "96 - Curium (Cm)";
constexpr static char frNumberElementCm[] = "96 - Curium (Cm)";
constexpr static char esNumberElementCm[] = "96 - Curio (Cm)";
constexpr static char deNumberElementCm[] = "96 - Curium (Cm)";
constexpr static char ptNumberElementCm[] = "96 - Curandeiro (Cm)";
constexpr static char enNumberElementCn[] = "112 - Copernicium (Cn)";
constexpr static char frNumberElementCn[] = "112 - Copernicium (Cn)";
constexpr static char esNumberElementCn[] = "112 - Copernicio (Cn)";
constexpr static char deNumberElementCn[] = "112 - Copernicium (Cn)";
constexpr static char ptNumberElementCn[] = "112 - Copernicium (Cn)";
constexpr static char enNumberElementCo[] = "27 - Cobalt (Co)";
constexpr static char frNumberElementCo[] = "27 - Cobalt (Co)";
constexpr static char esNumberElementCo[] = "27 - Cobalto (Co)";
constexpr static char deNumberElementCo[] = "27 - Kobalt (Co)";
constexpr static char ptNumberElementCo[] = "27 - Cobalto (Co)";
constexpr static char enNumberElementCr[] = "24 - Chromium (Cr)";
constexpr static char frNumberElementCr[] = "24 - Chrome (Cr)";
constexpr static char esNumberElementCr[] = "24 - Cromo (Cr)";
constexpr static char deNumberElementCr[] = "24 - Chrom (Cr)";
constexpr static char ptNumberElementCr[] = "24 - Crômio (Cr)";
constexpr static char enNumberElementCs[] = "55 - cesium (Cs)";
constexpr static char frNumberElementCs[] = "55 - Césium (Cs)";
constexpr static char esNumberElementCs[] = "55 - Cesio (Cs)";
constexpr static char deNumberElementCs[] = "55 - Cäsium (Cs)";
constexpr static char ptNumberElementCs[] = "55 - Césio (Cs)";
constexpr static char enNumberElementCu[] = "29 - Copper (Cu)";
constexpr static char frNumberElementCu[] = "29 - Cuivre (Cu)";
constexpr static char esNumberElementCu[] = "29 - Cobre (Cu)";
constexpr static char deNumberElementCu[] = "29 - Kupfer (Cu)";
constexpr static char ptNumberElementCu[] = "29 - Cobre (Cu)";
constexpr static char enNumberElementDb[] = "105 - Dubnium (Db)";
constexpr static char frNumberElementDb[] = "105 - Dubnium (Db)";
constexpr static char esNumberElementDb[] = "105 - dubnio (Db)";
constexpr static char deNumberElementDb[] = "105 - Dubnium (Db)";
constexpr static char ptNumberElementDb[] = "105 - Dubnium (Db)";
constexpr static char enNumberElementDs[] = "110 - Darmstadtium (Ds)";
constexpr static char frNumberElementDs[] = "110 - Darmstadtium (Ds)";
constexpr static char esNumberElementDs[] = "110 - Darmstadtium (Ds)";
constexpr static char deNumberElementDs[] = "110 - Darmstadtium (Ds)";
constexpr static char ptNumberElementDs[] = "110 - Darmstadtium (Ds)";
constexpr static char enNumberElementDy[] = "66 - Dysprosium (Dy)";
constexpr static char frNumberElementDy[] = "66 - Dysprosium (Dy)";
constexpr static char esNumberElementDy[] = "66 - Disprosio (Dy)";
constexpr static char deNumberElementDy[] = "66 - Dysprosium (Dy)";
constexpr static char ptNumberElementDy[] = "66 - Disprósio (Dy)";
constexpr static char enNumberElementEr[] = "68 - Erbium (Er)";
constexpr static char frNumberElementEr[] = "68 - Erbium (Er)";
constexpr static char esNumberElementEr[] = "68 - Erbio (Er)";
constexpr static char deNumberElementEr[] = "68 - Erbium (Er)";
constexpr static char ptNumberElementEr[] = "68 - Erbium (Er)";
constexpr static char enNumberElementEs[] = "99 - Einsteinium (Es)";
constexpr static char frNumberElementEs[] = "99 - Einsteinium (Es)";
constexpr static char esNumberElementEs[] = "99 - Einstenio (Es)";
constexpr static char deNumberElementEs[] = "99 - Einsteinium (Es)";
constexpr static char ptNumberElementEs[] = "99 - Einsteinium (Es)";
constexpr static char enNumberElementEu[] = "63 - Europium (Eu)";
constexpr static char frNumberElementEu[] = "63 - Europium (Eu)";
constexpr static char esNumberElementEu[] = "63 - Europio (Eu)";
constexpr static char deNumberElementEu[] = "63 - Europium (Eu)";
constexpr static char ptNumberElementEu[] = "63 - Európio (Eu)";
constexpr static char enNumberElementF[] = "9 - Fluorine (F)";
constexpr static char frNumberElementF[] = "9 - Fluor (F)";
constexpr static char esNumberElementF[] = "9 - Flúor (F)";
constexpr static char deNumberElementF[] = "9 - Fluor (F)";
constexpr static char ptNumberElementF[] = "9 - Flúor (F)";
constexpr static char enNumberElementFe[] = "26 - Iron (Fe)";
constexpr static char frNumberElementFe[] = "26 - Fer (Fe)";
constexpr static char esNumberElementFe[] = "26 - Hierro (Fe)";
constexpr static char deNumberElementFe[] = "26 - Eisen (Fe)";
constexpr static char ptNumberElementFe[] = "26 - Ferro (Fe)";
constexpr static char enNumberElementFl[] = "114 - Flerovium (Fl)";
constexpr static char frNumberElementFl[] = "114 - Flérovium (Fl)";
constexpr static char esNumberElementFl[] = "114 - Flerovium (Fl)";
constexpr static char deNumberElementFl[] = "114 - Flerovium (Fl)";
constexpr static char ptNumberElementFl[] = "114 - Fleróvio (Fl)";
constexpr static char enNumberElementFm[] = "100 - Fermium (Fm)";
constexpr static char frNumberElementFm[] = "100 - Fermium (Fm)";
constexpr static char esNumberElementFm[] = "100 - Fermio (Fm)";
constexpr static char deNumberElementFm[] = "100 - Fermium (Fm)";
constexpr static char ptNumberElementFm[] = "100 - Fermium (Fm)";
constexpr static char enNumberElementFr[] = "87 - francium (Fr)";
constexpr static char frNumberElementFr[] = "87 - Francium (Fr)";
constexpr static char esNumberElementFr[] = "87 - Francio (Fr)";
constexpr static char deNumberElementFr[] = "87 - Francium (Fr)";
constexpr static char ptNumberElementFr[] = "87 - Francium (Fr)";
constexpr static char enNumberElementGa[] = "31 - Gallium (Ga)";
constexpr static char frNumberElementGa[] = "31 - Gallium (Ga)";
constexpr static char esNumberElementGa[] = "31 - Galio (Ga)";
constexpr static char deNumberElementGa[] = "31 - Gallium (Ga)";
constexpr static char ptNumberElementGa[] = "31 - Gálio (Ga)";
constexpr static char enNumberElementGd[] = "64 - Gadolinium (Gd)";
constexpr static char frNumberElementGd[] = "64 - Gadolinium (Gd)";
constexpr static char esNumberElementGd[] = "64 - Gadolinio (Gd)";
constexpr static char deNumberElementGd[] = "64 - Gadolinium (Gd)";
constexpr static char ptNumberElementGd[] = "64 - Gadolínio (Gd)";
constexpr static char enNumberElementGe[] = "32 - Germanium (Ge)";
constexpr static char frNumberElementGe[] = "32 - Germanium (Ge)";
constexpr static char esNumberElementGe[] = "32 - Germanio (Ge)";
constexpr static char deNumberElementGe[] = "32 - Germanium (Ge)";
constexpr static char ptNumberElementGe[] = "32 - Germânio (Ge)";
constexpr static char enNumberElementH[] = "1 - Hydrogen (H)";
constexpr static char frNumberElementH[] = "1 - Hydrogène (H)";
constexpr static char esNumberElementH[] = "1 - Hidrógeno (H)";
constexpr static char deNumberElementH[] = "1 - Wasserstoff (H)";
constexpr static char ptNumberElementH[] = "1 - Hidrogênio (H)";
constexpr static char enNumberElementHe[] = "2 - Helium (He)";
constexpr static char frNumberElementHe[] = "2 - Hélium (He)";
constexpr static char esNumberElementHe[] = "2 - Helio (He)";
constexpr static char deNumberElementHe[] = "2 - Helium (He)";
constexpr static char ptNumberElementHe[] = "2 - Hélio (He)";
constexpr static char enNumberElementHf[] = "72 - Hafnium (Hf)";
constexpr static char frNumberElementHf[] = "72 - Hafnium (Hf)";
constexpr static char esNumberElementHf[] = "72 - Hafnio (Hf)";
constexpr static char deNumberElementHf[] = "72 - Hafnium (Hf)";
constexpr static char ptNumberElementHf[] = "72 - Háfnio (Hf)";
constexpr static char enNumberElementHg[] = "80 - Mercury (Hg)";
constexpr static char frNumberElementHg[] = "80 - Mercure (Hg)";
constexpr static char esNumberElementHg[] = "80 - Mercurio (Hg)";
constexpr static char deNumberElementHg[] = "80 - Quecksilber (Hg)";
constexpr static char ptNumberElementHg[] = "80 - Mercúrio (Hg)";
constexpr static char enNumberElementHo[] = "67 - holmium (Ho)";
constexpr static char frNumberElementHo[] = "67 - Holmium (Ho)";
constexpr static char esNumberElementHo[] = "67 - Holmio (Ho)";
constexpr static char deNumberElementHo[] = "67 - Holmium (Ho)";
constexpr static char ptNumberElementHo[] = "67 - Holmium (Ho)";
constexpr static char enNumberElementHs[] = "108 - Hassium (Hs)";
constexpr static char frNumberElementHs[] = "108 - Hassium (Hs)";
constexpr static char esNumberElementHs[] = "108 - Hassio (Hs)";
constexpr static char deNumberElementHs[] = "108 - Hassium (Hs)";
constexpr static char ptNumberElementHs[] = "108 - Hassium (Hs)";
constexpr static char enNumberElementI[] = "53 - Iodine (I)";
constexpr static char frNumberElementI[] = "53 - Iode (I)";
constexpr static char esNumberElementI[] = "53 - Yodo (I)";
constexpr static char deNumberElementI[] = "53 - Jod (I)";
constexpr static char ptNumberElementI[] = "53 - Iodo (I)";
constexpr static char enNumberElementIn[] = "49 - Indium (In)";
constexpr static char frNumberElementIn[] = "49 - Indium (In)";
constexpr static char esNumberElementIn[] = "49 - Indio (In)";
constexpr static char deNumberElementIn[] = "49 - Indium (In)";
constexpr static char ptNumberElementIn[] = "49 - Indio (In)";
constexpr static char enNumberElementIr[] = "77 - Iridium (Ir)";
constexpr static char frNumberElementIr[] = "77 - Iridium (Ir)";
constexpr static char esNumberElementIr[] = "77 - Iridio (Ir)";
constexpr static char deNumberElementIr[] = "77 - Iridium (Ir)";
constexpr static char ptNumberElementIr[] = "77 - Irídio (Ir)";
constexpr static char enNumberElementK[] = "19 - Potassium (K)";
constexpr static char frNumberElementK[] = "19 - Potassium (K)";
constexpr static char esNumberElementK[] = "19 - Potasio (K)";
constexpr static char deNumberElementK[] = "19 - Kalium (K)";
constexpr static char ptNumberElementK[] = "19 - Potássio (K)";
constexpr static char enNumberElementKr[] = "36 - Krypton (Kr)";
constexpr static char frNumberElementKr[] = "36 - Krypton (Kr)";
constexpr static char esNumberElementKr[] = "36 - Criptón (Kr)";
constexpr static char deNumberElementKr[] = "36 - Krypton (Kr)";
constexpr static char ptNumberElementKr[] = "36 - Criptônio (Kr)";
constexpr static char enNumberElementLa[] = "57 - Lanthanum (La)";
constexpr static char frNumberElementLa[] = "57 - Lanthane (La)";
constexpr static char esNumberElementLa[] = "57 - Lantano (La)";
constexpr static char deNumberElementLa[] = "57 - Lanthan (La)";
constexpr static char ptNumberElementLa[] = "57 - Lantânio (La)";
constexpr static char enNumberElementLi[] = "3 - Lithium (Li)";
constexpr static char frNumberElementLi[] = "3 - Lithium (Li)";
constexpr static char esNumberElementLi[] = "3 - Litio (Li)";
constexpr static char deNumberElementLi[] = "3 - Lithium (Li)";
constexpr static char ptNumberElementLi[] = "3 - Lítio (Li)";
constexpr static char enNumberElementLr[] = "103 - Lawrencium (Lr)";
constexpr static char frNumberElementLr[] = "103 - Lawrencium (Lr)";
constexpr static char esNumberElementLr[] = "103 - Lawrencio (Lr)";
constexpr static char deNumberElementLr[] = "103 - lawrencium (Lr)";
constexpr static char ptNumberElementLr[] = "103 - Lawrencium (Lr)";
constexpr static char enNumberElementLu[] = "71 - Lutecium (Lu)";
constexpr static char frNumberElementLu[] = "71 - Lutécium (Lu)";
constexpr static char esNumberElementLu[] = "71 - Lutecio (Lu)";
constexpr static char deNumberElementLu[] = "71 - Lutetium (Lu)";
constexpr static char ptNumberElementLu[] = "71 - Lutécio (Lu)";
constexpr static char enNumberElementLv[] = "116 - Livermorium (Lv)";
constexpr static char frNumberElementLv[] = "116 - Livermorium (Lv)";
constexpr static char esNumberElementLv[] = "116 - Livermorium (Lv)";
constexpr static char deNumberElementLv[] = "116 - Livermorium (Lv)";
constexpr static char ptNumberElementLv[] = "116 - Livermorium (Lv)";
constexpr static char enNumberElementMc[] = "115 - Moscovium (Mc)";
constexpr static char frNumberElementMc[] = "115 - Moscovium (Mc)";
constexpr static char esNumberElementMc[] = "115 - Moscovium (Mc)";
constexpr static char deNumberElementMc[] = "115 - Moscovium (Mc)";
constexpr static char ptNumberElementMc[] = "115 - Moscovium (Mc)";
constexpr static char enNumberElementMd[] = "101 - Mendélévium (Md)";
constexpr static char frNumberElementMd[] = "101 - Mendélévium (Md)";
constexpr static char esNumberElementMd[] = "101 - Mendelevio (Md)";
constexpr static char deNumberElementMd[] = "101 - Mendelevium (Md)";
constexpr static char ptNumberElementMd[] = "101 - Mendelevium (Md)";
constexpr static char enNumberElementMg[] = "12 - Magnesium (Mg)";
constexpr static char frNumberElementMg[] = "12 - Magnésium (Mg)";
constexpr static char esNumberElementMg[] = "12 - Magnesio (Mg)";
constexpr static char deNumberElementMg[] = "12 - Magnesium (Mg)";
constexpr static char ptNumberElementMg[] = "12 - Magnésio (Mg)";
constexpr static char enNumberElementMn[] = "25 - Manganese (Mn)";
constexpr static char frNumberElementMn[] = "25 - Manganèse (Mn)";
constexpr static char esNumberElementMn[] = "25 - Manganeso (Mn)";
constexpr static char deNumberElementMn[] = "25 - Mangan (Mn)";
constexpr static char ptNumberElementMn[] = "25 - Manganês (Mn)";
constexpr static char enNumberElementMo[] = "42 - Molybdenum (Mo)";
constexpr static char frNumberElementMo[] = "42 - Molybdène (Mo)";
constexpr static char esNumberElementMo[] = "42 - Molibdeno (Mo)";
constexpr static char deNumberElementMo[] = "42 - Molybdän (Mo)";
constexpr static char ptNumberElementMo[] = "42 - Molibdênio (Mo)";
constexpr static char enNumberElementMt[] = "109 - Meitnerium (Mt)";
constexpr static char frNumberElementMt[] = "109 - Meitnérium (Mt)";
constexpr static char esNumberElementMt[] = "109 - Meitnerio (Mt)";
constexpr static char deNumberElementMt[] = "109 - Meitnerium (Mt)";
constexpr static char ptNumberElementMt[] = "109 - Meitnerium (Mt)";
constexpr static char enNumberElementN[] = "7 - Nitrogen (N)";
constexpr static char frNumberElementN[] = "7 - Azote (N)";
constexpr static char esNumberElementN[] = "7 - Nitrógeno (N)";
constexpr static char deNumberElementN[] = "7 - Stickstoff (N)";
constexpr static char ptNumberElementN[] = "7 - Azoto (N)";
constexpr static char enNumberElementNa[] = "11 - Sodium (Na)";
constexpr static char frNumberElementNa[] = "11 - Sodium (Na)";
constexpr static char esNumberElementNa[] = "11 - Sodio (Na)";
constexpr static char deNumberElementNa[] = "11 - Natrium (Na)";
constexpr static char ptNumberElementNa[] = "11 - Sódio (Na)";
constexpr static char enNumberElementNb[] = "41 - Niobium (Nb)";
constexpr static char frNumberElementNb[] = "41 - Niobium (Nb)";
constexpr static char esNumberElementNb[] = "41 - Niobio (Nb)";
constexpr static char deNumberElementNb[] = "41 - Niob (Nb)";
constexpr static char ptNumberElementNb[] = "41 - Nióbio (Nb)";
constexpr static char enNumberElementNd[] = "60 - Neodymium (Nd)";
constexpr static char frNumberElementNd[] = "60 - Néodyme (Nd)";
constexpr static char esNumberElementNd[] = "60 - Neodimio (Nd)";
constexpr static char deNumberElementNd[] = "60 - Neodym (Nd)";
constexpr static char ptNumberElementNd[] = "60 - Neodímio (Nd)";
constexpr static char enNumberElementNe[] = "10 - Neon (Ne)";
constexpr static char frNumberElementNe[] = "10 - Néon (Ne)";
constexpr static char esNumberElementNe[] = "10 - Neón (Ne)";
constexpr static char deNumberElementNe[] = "10 - Neon (Ne)";
constexpr static char ptNumberElementNe[] = "10 - Néon (Ne)";
constexpr static char enNumberElementNh[] = "113 - Nihonium (Nh)";
constexpr static char frNumberElementNh[] = "113 - Nihonium (Nh)";
constexpr static char esNumberElementNh[] = "113 - Nihonium (Nh)";
constexpr static char deNumberElementNh[] = "113 - Nihonium (Nh)";
constexpr static char ptNumberElementNh[] = "113 - Nihonium (Nh)";
constexpr static char enNumberElementNi[] = "28 - Nickel (Ni)";
constexpr static char frNumberElementNi[] = "28 - Nickel (Ni)";
constexpr static char esNumberElementNi[] = "28 - Níquel (Ni)";
constexpr static char deNumberElementNi[] = "28 - Nickel (Ni)";
constexpr static char ptNumberElementNi[] = "28 - Níquel (Ni)";
constexpr static char enNumberElementNo[] = "102 - Nobelium (No)";
constexpr static char frNumberElementNo[] = "102 - Nobélium (No)";
constexpr static char esNumberElementNo[] = "102 - Nobelio (No)";
constexpr static char deNumberElementNo[] = "102 - nobelium (No)";
constexpr static char ptNumberElementNo[] = "102 - Nobelium (No)";
constexpr static char enNumberElementNp[] = "93 - Neptunium (Np)";
constexpr static char frNumberElementNp[] = "93 - Neptunium (Np)";
constexpr static char esNumberElementNp[] = "93 - Neptunio (Np)";
constexpr static char deNumberElementNp[] = "93 - Neptunium (Np)";
constexpr static char ptNumberElementNp[] = "93 - Neptúnio (Np)";
constexpr static char enNumberElementO[] = "8 - Oxygen (O)";
constexpr static char frNumberElementO[] = "8 - Oxygène (O)";
constexpr static char esNumberElementO[] = "8 - Oxígeno (O)";
constexpr static char deNumberElementO[] = "8 - Sauerstoff (O)";
constexpr static char ptNumberElementO[] = "8 - Oxigênio (O)";
constexpr static char enNumberElementOg[] = "118 - Oganesson (Og)";
constexpr static char frNumberElementOg[] = "118 - Oganesson (Og)";
constexpr static char esNumberElementOg[] = "118 - Oganesson (Og)";
constexpr static char deNumberElementOg[] = "118 - Oganesson (Og)";
constexpr static char ptNumberElementOg[] = "118 - Oganesson (Og)";
constexpr static char enNumberElementOs[] = "76 - Osmium (Os)";
constexpr static char frNumberElementOs[] = "76 - Osmium (Os)";
constexpr static char esNumberElementOs[] = "76 - Osmio (Os)";
constexpr static char deNumberElementOs[] = "76 - Osmium (Os)";
constexpr static char ptNumberElementOs[] = "76 - Osmio (Os)";
constexpr static char enNumberElementP[] = "15 - Phosphorus (P)";
constexpr static char frNumberElementP[] = "15 - Phosphore (P)";
constexpr static char esNumberElementP[] = "15 - Fósforo (P)";
constexpr static char deNumberElementP[] = "15 - Phosphor (P)";
constexpr static char ptNumberElementP[] = "15 - Fósforo (P)";
constexpr static char enNumberElementPa[] = "91 - Protactinium (Pa)";
constexpr static char frNumberElementPa[] = "91 - Protactinium (Pa)";
constexpr static char esNumberElementPa[] = "91 - Protactinio (Pa)";
constexpr static char deNumberElementPa[] = "91 - Protaktinium (Pa)";
constexpr static char ptNumberElementPa[] = "91 - Protactínio (Pa)";
constexpr static char enNumberElementPb[] = "82 - Lead (Pb)";
constexpr static char frNumberElementPb[] = "82 - Plomb (Pb)";
constexpr static char esNumberElementPb[] = "82 - Conducir (Pb)";
constexpr static char deNumberElementPb[] = "82 - führen (Pb)";
constexpr static char ptNumberElementPb[] = "82 - Levar (Pb)";
constexpr static char enNumberElementPd[] = "46 - Palladium (Pd)";
constexpr static char frNumberElementPd[] = "46 - Palladium (Pd)";
constexpr static char esNumberElementPd[] = "46 - Paladio (Pd)";
constexpr static char deNumberElementPd[] = "46 - Palladium (Pd)";
constexpr static char ptNumberElementPd[] = "46 - Paládio (Pd)";
constexpr static char enNumberElementPm[] = "61 - Promethium (Pm)";
constexpr static char frNumberElementPm[] = "61 - Prométhium (Pm)";
constexpr static char esNumberElementPm[] = "61 - Prometeo (Pm)";
constexpr static char deNumberElementPm[] = "61 - Promethium (Pm)";
constexpr static char ptNumberElementPm[] = "61 - Promécio (Pm)";
constexpr static char enNumberElementPo[] = "84 - Polonium (Po)";
constexpr static char frNumberElementPo[] = "84 - Polonium (Po)";
constexpr static char esNumberElementPo[] = "84 - Polonio (Po)";
constexpr static char deNumberElementPo[] = "84 - Polonium (Po)";
constexpr static char ptNumberElementPo[] = "84 - Polônio (Po)";
constexpr static char enNumberElementPr[] = "59 - praseodymium (Pr)";
constexpr static char frNumberElementPr[] = "59 - Praséodyme (Pr)";
constexpr static char esNumberElementPr[] = "59 - Praseodimio (Pr)";
constexpr static char deNumberElementPr[] = "59 - Praseodym (Pr)";
constexpr static char ptNumberElementPr[] = "59 - Praseodímio (Pr)";
constexpr static char enNumberElementPt[] = "78 - Platinum (Pt)";
constexpr static char frNumberElementPt[] = "78 - Platine (Pt)";
constexpr static char esNumberElementPt[] = "78 - Platino (Pt)";
constexpr static char deNumberElementPt[] = "78 - Platin (Pt)";
constexpr static char ptNumberElementPt[] = "78 - Platina (Pt)";
constexpr static char enNumberElementPu[] = "94 - Plutonium (Pu)";
constexpr static char frNumberElementPu[] = "94 - Plutonium (Pu)";
constexpr static char esNumberElementPu[] = "94 - Plutonio (Pu)";
constexpr static char deNumberElementPu[] = "94 - Plutonium (Pu)";
constexpr static char ptNumberElementPu[] = "94 - Plutônio (Pu)";
constexpr static char enNumberElementRa[] = "88 - Radium (Ra)";
constexpr static char frNumberElementRa[] = "88 - Radium (Ra)";
constexpr static char esNumberElementRa[] = "88 - Radio (Ra)";
constexpr static char deNumberElementRa[] = "88 - Radium (Ra)";
constexpr static char ptNumberElementRa[] = "88 - Rádio (Ra)";
constexpr static char enNumberElementRb[] = "37 - Rubidium (Rb)";
constexpr static char frNumberElementRb[] = "37 - Rubidium (Rb)";
constexpr static char esNumberElementRb[] = "37 - Rubidio (Rb)";
constexpr static char deNumberElementRb[] = "37 - Rubidium (Rb)";
constexpr static char ptNumberElementRb[] = "37 - Rubídio (Rb)";
constexpr static char enNumberElementRe[] = "75 - Rhenium (Re)";
constexpr static char frNumberElementRe[] = "75 - Rhénium (Re)";
constexpr static char esNumberElementRe[] = "75 - Renio (Re)";
constexpr static char deNumberElementRe[] = "75 - Rhenium (Re)";
constexpr static char ptNumberElementRe[] = "75 - Rênio (Re)";
constexpr static char enNumberElementRf[] = "104 - Rutherfordium (Rf)";
constexpr static char frNumberElementRf[] = "104 - Rutherfordium (Rf)";
constexpr static char esNumberElementRf[] = "104 - Rutherfordio (Rf)";
constexpr static char deNumberElementRf[] = "104 - rutherfordium (Rf)";
constexpr static char ptNumberElementRf[] = "104 - Rutherfordium (Rf)";
constexpr static char enNumberElementRg[] = "111 - Roentgenium (Rg)";
constexpr static char frNumberElementRg[] = "111 - Roentgenium (Rg)";
constexpr static char esNumberElementRg[] = "111 - Roentgenio (Rg)";
constexpr static char deNumberElementRg[] = "111 - Roentgenium (Rg)";
constexpr static char ptNumberElementRg[] = "111 - Roentgenium (Rg)";
constexpr static char enNumberElementRh[] = "45 - rhodium (Rh)";
constexpr static char frNumberElementRh[] = "45 - Rhodium (Rh)";
constexpr static char esNumberElementRh[] = "45 - Rodio (Rh)";
constexpr static char deNumberElementRh[] = "45 - Rhodium (Rh)";
constexpr static char ptNumberElementRh[] = "45 - Ródio (Rh)";
constexpr static char enNumberElementRn[] = "86 - Radon (Rn)";
constexpr static char frNumberElementRn[] = "86 - Radon (Rn)";
constexpr static char esNumberElementRn[] = "86 - Radón (Rn)";
constexpr static char deNumberElementRn[] = "86 - Radon (Rn)";
constexpr static char ptNumberElementRn[] = "86 - Radão (Rn)";
constexpr static char enNumberElementRu[] = "44 - Ruthenium (Ru)";
constexpr static char frNumberElementRu[] = "44 - Ruthénium (Ru)";
constexpr static char esNumberElementRu[] = "44 - Rutenio (Ru)";
constexpr static char deNumberElementRu[] = "44 - Ruthenium (Ru)";
constexpr static char ptNumberElementRu[] = "44 - Rutênio (Ru)";
constexpr static char enNumberElementS[] = "16 - Sulfur (S)";
constexpr static char frNumberElementS[] = "16 - Soufre (S)";
constexpr static char esNumberElementS[] = "16 - Azufre (S)";
constexpr static char deNumberElementS[] = "16 - Schwefel (S)";
constexpr static char ptNumberElementS[] = "16 - Enxofre (S)";
constexpr static char enNumberElementSb[] = "51 - Antimony (Sb)";
constexpr static char frNumberElementSb[] = "51 - Antimoine (Sb)";
constexpr static char esNumberElementSb[] = "51 - Antimonio (Sb)";
constexpr static char deNumberElementSb[] = "51 - Antimon (Sb)";
constexpr static char ptNumberElementSb[] = "51 - Antimônio (Sb)";
constexpr static char enNumberElementSc[] = "21 - Scandium (Sc)";
constexpr static char frNumberElementSc[] = "21 - Scandium (Sc)";
constexpr static char esNumberElementSc[] = "21 - Escandio (Sc)";
constexpr static char deNumberElementSc[] = "21 - Scandium (Sc)";
constexpr static char ptNumberElementSc[] = "21 - Escândio (Sc)";
constexpr static char enNumberElementSe[] = "34 - Selenium (Se)";
constexpr static char frNumberElementSe[] = "34 - Sélénium (Se)";
constexpr static char esNumberElementSe[] = "34 - Selenio (Se)";
constexpr static char deNumberElementSe[] = "34 - Selen (Se)";
constexpr static char ptNumberElementSe[] = "34 - Selênio (Se)";
constexpr static char enNumberElementSg[] = "106 - Seaborgium (Sg)";
constexpr static char frNumberElementSg[] = "106 - Seaborgium (Sg)";
constexpr static char esNumberElementSg[] = "106 - Seaborgio (Sg)";
constexpr static char deNumberElementSg[] = "106 - Seaborgium (Sg)";
constexpr static char ptNumberElementSg[] = "106 - Seaborgium (Sg)";
constexpr static char enNumberElementSi[] = "14 - Silicon (Si)";
constexpr static char frNumberElementSi[] = "14 - Silicium (Si)";
constexpr static char esNumberElementSi[] = "14 - Silicio (Si)";
constexpr static char deNumberElementSi[] = "14 - Silizium (Si)";
constexpr static char ptNumberElementSi[] = "14 - Silício (Si)";
constexpr static char enNumberElementSm[] = "62 - Samarium (Sm)";
constexpr static char frNumberElementSm[] = "62 - Samarium (Sm)";
constexpr static char esNumberElementSm[] = "62 - Samario (Sm)";
constexpr static char deNumberElementSm[] = "62 - Samarium (Sm)";
constexpr static char ptNumberElementSm[] = "62 - Samário (Sm)";
constexpr static char enNumberElementSn[] = "50 - Tin (Sn)";
constexpr static char frNumberElementSn[] = "50 - Etain (Sn)";
constexpr static char esNumberElementSn[] = "50 - Estaño (Sn)";
constexpr static char deNumberElementSn[] = "50 - Zinn (Sn)";
constexpr static char ptNumberElementSn[] = "50 - Estanho (Sn)";
constexpr static char enNumberElementSr[] = "38 - Strontium (Sr)";
constexpr static char frNumberElementSr[] = "38 - Strontium (Sr)";
constexpr static char esNumberElementSr[] = "38 - Estroncio (Sr)";
constexpr static char deNumberElementSr[] = "38 - Strontium (Sr)";
constexpr static char ptNumberElementSr[] = "38 - Estrôncio (Sr)";
constexpr static char enNumberElementTa[] = "73 - Tantalum (Ta)";
constexpr static char frNumberElementTa[] = "73 - Tantale (Ta)";
constexpr static char esNumberElementTa[] = "73 - Tantalio (Ta)";
constexpr static char deNumberElementTa[] = "73 - Tantal (Ta)";
constexpr static char ptNumberElementTa[] = "73 - Tântalo (Ta)";
constexpr static char enNumberElementTb[] = "65 - Terbium (Tb)";
constexpr static char frNumberElementTb[] = "65 - Terbium (Tb)";
constexpr static char esNumberElementTb[] = "65 - Terbio (Tb)";
constexpr static char deNumberElementTb[] = "65 - Terbium (Tb)";
constexpr static char ptNumberElementTb[] = "65 - Térbio (Tb)";
constexpr static char enNumberElementTc[] = "43 - Technetium (Tc)";
constexpr static char frNumberElementTc[] = "43 - Technétium (Tc)";
constexpr static char esNumberElementTc[] = "43 - Tecnecio (Tc)";
constexpr static char deNumberElementTc[] = "43 - Technetium (Tc)";
constexpr static char ptNumberElementTc[] = "43 - Tecnécio (Tc)";
constexpr static char enNumberElementTe[] = "52 - Tellurium (Te)";
constexpr static char frNumberElementTe[] = "52 - Tellure (Te)";
constexpr static char esNumberElementTe[] = "52 - Telurio (Te)";
constexpr static char deNumberElementTe[] = "52 - Tellur (Te)";
constexpr static char ptNumberElementTe[] = "52 - Telúrio (Te)";
constexpr static char enNumberElementTh[] = "90 - Thorium (Th)";
constexpr static char frNumberElementTh[] = "90 - Thorium (Th)";
constexpr static char esNumberElementTh[] = "90 - Torio (Th)";
constexpr static char deNumberElementTh[] = "90 - Thorium (Th)";
constexpr static char ptNumberElementTh[] = "90 - Tório (Th)";
constexpr static char enNumberElementTi[] = "22 - Titanium (Ti)";
constexpr static char frNumberElementTi[] = "22 - Titane (Ti)";
constexpr static char esNumberElementTi[] = "22 - Titanio (Ti)";
constexpr static char deNumberElementTi[] = "22 - Titan (Ti)";
constexpr static char ptNumberElementTi[] = "22 - Titânio (Ti)";
constexpr static char enNumberElementTl[] = "81 - Thallium (Tl)";
constexpr static char frNumberElementTl[] = "81 - Thallium (Tl)";
constexpr static char esNumberElementTl[] = "81 - Talio (Tl)";
constexpr static char deNumberElementTl[] = "81 - Thallium (Tl)";
constexpr static char ptNumberElementTl[] = "81 - Tálio (Tl)";
constexpr static char enNumberElementTm[] = "69 - Thulium (Tm)";
constexpr static char frNumberElementTm[] = "69 - Thulium (Tm)";
constexpr static char esNumberElementTm[] = "69 - Tulio (Tm)";
constexpr static char deNumberElementTm[] = "69 - Thulium (Tm)";
constexpr static char ptNumberElementTm[] = "69 - Túlio (Tm)";
constexpr static char enNumberElementTs[] = "117 - Tennesse (Ts)";
constexpr static char frNumberElementTs[] = "117 - Tennesse (Ts)";
constexpr static char esNumberElementTs[] = "117 - Tennesse (Ts)";
constexpr static char deNumberElementTs[] = "117 - Tennesse (Ts)";
constexpr static char ptNumberElementTs[] = "117 - Tennesse (Ts)";
constexpr static char enNumberElementU[] = "92 - Uranium (U)";
constexpr static char frNumberElementU[] = "92 - Uranium (U)";
constexpr static char esNumberElementU[] = "92 - Uranio (U)";
constexpr static char deNumberElementU[] = "92 - Uran (U)";
constexpr static char ptNumberElementU[] = "92 - Urânio (U)";
constexpr static char enNumberElementUbn[] = "120 - Unbinilium (Ubn)";
constexpr static char frNumberElementUbn[] = "120 - Unbinilium (Ubn)";
constexpr static char esNumberElementUbn[] = "120 - Unbinilio (Ubn)";
constexpr static char deNumberElementUbn[] = "120 - Unbinilium (Ubn)";
constexpr static char ptNumberElementUbn[] = "120 - Unbinílio (Ubn)";
constexpr static char enNumberElementUue[] = "119 - Ununennium (Uue)";
constexpr static char frNumberElementUue[] = "119 - Ununennium (Uue)";
constexpr static char esNumberElementUue[] = "119 - Ununennio (Uue)";
constexpr static char deNumberElementUue[] = "119 - Ununennium (Uue)";
constexpr static char ptNumberElementUue[] = "119 - Ununénnio (Uue)";
constexpr static char enNumberElementV[] = "23 - Vanadium (V)";
constexpr static char frNumberElementV[] = "23 - Vanadium (V)";
constexpr static char esNumberElementV[] = "23 - Vanadio (V)";
constexpr static char deNumberElementV[] = "23 - Vanadium (V)";
constexpr static char ptNumberElementV[] = "23 - Vanádio (V)";
constexpr static char enNumberElementW[] = "74 - Tungsten (W)";
constexpr static char frNumberElementW[] = "74 - Tungstène (W)";
constexpr static char esNumberElementW[] = "74 - Tungsteno (W)";
constexpr static char deNumberElementW[] = "74 - Wolfram (W)";
constexpr static char ptNumberElementW[] = "74 - Tungstênio (W)";
constexpr static char enNumberElementXe[] = "54 - Xenon (Xe)";
constexpr static char frNumberElementXe[] = "54 - Xénon (Xe)";
constexpr static char esNumberElementXe[] = "54 - Cenón (Xe)";
constexpr static char deNumberElementXe[] = "54 - Xenon (Xe)";
constexpr static char ptNumberElementXe[] = "54 - Xênon (Xe)";
constexpr static char enNumberElementY[] = "39 - Yttrium (Y)";
constexpr static char frNumberElementY[] = "39 - Yttrium (Y)";
constexpr static char esNumberElementY[] = "39 - Itrio (Y)";
constexpr static char deNumberElementY[] = "39 - Yttrium (Y)";
constexpr static char ptNumberElementY[] = "39 - Itrio (Y)";
constexpr static char enNumberElementYb[] = "70 - Ytterbium (Yb)";
constexpr static char frNumberElementYb[] = "70 - Ytterbium (Yb)";
constexpr static char esNumberElementYb[] = "70 - Iterbio (Yb)";
constexpr static char deNumberElementYb[] = "70 - Ytterbium (Yb)";
constexpr static char ptNumberElementYb[] = "70 - Itérbio (Yb)";
constexpr static char enNumberElementZn[] = "30 - Zinc (Zn)";
constexpr static char frNumberElementZn[] = "30 - Zinc (Zn)";
constexpr static char esNumberElementZn[] = "30 - Zinc (Zn)";
constexpr static char deNumberElementZn[] = "30 - Zink (Zn)";
constexpr static char ptNumberElementZn[] = "30 - Zinco (Zn)";
constexpr static char enNumberElementZr[] = "40 - Zirconium (Zr)";
constexpr static char frNumberElementZr[] = "40 - Zirconium (Zr)";
constexpr static char esNumberElementZr[] = "40 - Circonio (Zr)";
constexpr static char deNumberElementZr[] = "40 - Zirkonium (Zr)";
constexpr static char ptNumberElementZr[] = "40 - Zircônio (Zr)";
constexpr static char enNumberOfDots[] = "Number of points";
constexpr static char frNumberOfDots[] = "Nombre de points";
constexpr static char esNumberOfDots[] = "Número de puntos";
constexpr static char deNumberOfDots[] = "Punktanzahl";
constexpr static char ptNumberOfDots[] = "Número de pontos";
constexpr static char enOk[] = "Confirm";
constexpr static char frOk[] = "Valider";
constexpr static char esOk[] = "Confirmar";
constexpr static char deOk[] = "Bestätigen";
constexpr static char ptOk[] = "Confirmar";
constexpr static char enOnlyFirstSolutionsDisplayed0[] = "Only the first 10 solutions";
constexpr static char frOnlyFirstSolutionsDisplayed0[] = "Seulement les 10 premières";
constexpr static char esOnlyFirstSolutionsDisplayed0[] = "Sólo se muestran las";
constexpr static char deOnlyFirstSolutionsDisplayed0[] = "Es werden nur die ersten";
constexpr static char ptOnlyFirstSolutionsDisplayed0[] = "Somente as 10 primeiras";
constexpr static char enOnlyFirstSolutionsDisplayed1[] = "are displayed";
constexpr static char frOnlyFirstSolutionsDisplayed1[] = "solutions sont affichées";
constexpr static char esOnlyFirstSolutionsDisplayed1[] = "10 primeras soluciones";
constexpr static char deOnlyFirstSolutionsDisplayed1[] = "zehn Lösungen angezeigt.";
constexpr static char ptOnlyFirstSolutionsDisplayed1[] = "soluções são exibidas";
constexpr static char enOr[] = " or ";
constexpr static char frOr[] = " ou ";
constexpr static char esOr[] = " o ";
constexpr static char deOr[] = " oder ";
constexpr static char ptOr[] = " ou ";
constexpr static char enOrthonormal[] = "Orthonormal";
constexpr static char frOrthonormal[] = "Orthonormé";
constexpr static char esOrthonormal[] = "Ortonormal";
constexpr static char deOrthonormal[] = "Orthonormal";
constexpr static char ptOrthonormal[] = "Ortonormado";
constexpr static char enParametricType[] = "Parametric ";
constexpr static char frParametricType[] = "Paramétrique ";
constexpr static char esParametricType[] = "Paramétrico ";
constexpr static char deParametricType[] = "Parameter ";
constexpr static char ptParametricType[] = "Paramétrico ";
constexpr static char enPermutation[] = "Permutation";
constexpr static char frPermutation[] = "Arrangement";
constexpr static char esPermutation[] = "Variación";
constexpr static char dePermutation[] = "Permutation";
constexpr static char ptPermutation[] = "Permutação";
constexpr static char enPhysics[] = "Physics";
constexpr static char frPhysics[] = "Physique";
constexpr static char esPhysics[] = "Físico";
constexpr static char dePhysics[] = "Physikalisch";
constexpr static char ptPhysics[] = "Físico";
constexpr static char enPlanckTag[] = "Planck constant (m^2·kg·s^-1)";
constexpr static char frPlanckTag[] = "Const de Planck (m^2·kg·s^-1)";
constexpr static char esPlanckTag[] = "Constante de Planck (m^2·kg·s^-1)";
constexpr static char dePlanckTag[] = "Planck - Konstante (m^2·kg·s^-1)";
constexpr static char ptPlanckTag[] = "Constante de Planck (m^2·kg·s^-1)";
constexpr static char enPlot[] = "Plot graph";
constexpr static char frPlot[] = "Tracer le graphique";
constexpr static char esPlot[] = "Dibujar el gráfico";
constexpr static char dePlot[] = "Graphen zeichnen";
constexpr static char ptPlot[] = "Traçar o gráfico";
constexpr static char enPlotOptions[] = "Plot options";
constexpr static char frPlotOptions[] = "Options de la courbe";
constexpr static char esPlotOptions[] = "Opciones de la curva";
constexpr static char dePlotOptions[] = "Plotoptionen";
constexpr static char ptPlotOptions[] = "Opções da curva";
constexpr static char enPoisson[] = "Poisson";
constexpr static char frPoisson[] = "Poisson";
constexpr static char esPoisson[] = "Poisson";
constexpr static char dePoisson[] = "Poisson";
constexpr static char ptPoisson[] = "Poisson";
constexpr static char enPoissonDistribution[] = "Poisson distribution";
constexpr static char frPoissonDistribution[] = "Loi de Poisson";
constexpr static char esPoissonDistribution[] = "Distribución de Poisson";
constexpr static char dePoissonDistribution[] = "Poisson-Verteilung";
constexpr static char ptPoissonDistribution[] = "Distribuição de Poisson";
constexpr static char enPolar[] = "Polar ";
constexpr static char frPolar[] = "Exponentielle ";
constexpr static char esPolar[] = "Polar ";
constexpr static char dePolar[] = "Polar ";
constexpr static char ptPolar[] = "Polar ";
constexpr static char enPolarType[] = "Polar ";
constexpr static char frPolarType[] = "Polaire ";
constexpr static char esPolarType[] = "Polar ";
constexpr static char dePolarType[] = "Polar ";
constexpr static char ptPolarType[] = "Polar ";
constexpr static char enPolynomeHasNoRealSolution0[] = "The polynomial has no";
constexpr static char frPolynomeHasNoRealSolution0[] = "Le polynôme n'admet pas";
constexpr static char esPolynomeHasNoRealSolution0[] = "El polinomio no tiene";
constexpr static char dePolynomeHasNoRealSolution0[] = "Das Polynom hat";
constexpr static char ptPolynomeHasNoRealSolution0[] = "O polinômio não tem";
constexpr static char enPolynomeHasNoRealSolution1[] = "real root";
constexpr static char frPolynomeHasNoRealSolution1[] = "de racine réelle";
constexpr static char esPolynomeHasNoRealSolution1[] = "ninguna raíz real";
constexpr static char dePolynomeHasNoRealSolution1[] = "keine reelle Nullstelle";
constexpr static char ptPolynomeHasNoRealSolution1[] = "nenhuma raiz real";
constexpr static char enPoolMemoryFull1[] = "The working memory is full.";
constexpr static char frPoolMemoryFull1[] = "La mémoire de travail est pleine.";
constexpr static char esPoolMemoryFull1[] = "La memoria de trabajo está llena.";
constexpr static char dePoolMemoryFull1[] = "Der Arbeitsspeicher ist voll.";
constexpr static char ptPoolMemoryFull1[] = "A memória de trabalho está cheia.";
constexpr static char enPoolMemoryFull2[] = "Try again.";
constexpr static char frPoolMemoryFull2[] = "Réessayez.";
constexpr static char esPoolMemoryFull2[] = "Intente de nuevo.";
constexpr static char dePoolMemoryFull2[] = "Versuchen Sie es erneut.";
constexpr static char ptPoolMemoryFull2[] = "Tente novamente.";
constexpr static char enPower[] = "Power";
constexpr static char frPower[] = "Puissance";
constexpr static char esPower[] = "Potencial";
constexpr static char dePower[] = "Potenz";
constexpr static char ptPower[] = "Potência";
constexpr static char enPrediction[] = "Simple prediction interval";
constexpr static char frPrediction[] = "Intervalle fluctuation simple (2de)";
constexpr static char esPrediction[] = "Intervalo de predicción simple";
constexpr static char dePrediction[] = "Einfacher Schwankungsbereich";
constexpr static char ptPrediction[] = "Intervalo de previsão simples";
constexpr static char enPrediction95[] = "Prediction interval 95%";
constexpr static char frPrediction95[] = "Intervalle fluctuation 95% (Term)";
constexpr static char esPrediction95[] = "Intervalo de predicción 95%";
constexpr static char dePrediction95[] = "Schwankungsbereich 95%";
constexpr static char ptPrediction95[] = "Intervalo de previsão 95%";
constexpr static char enPreimage[] = "Inverse image";
constexpr static char frPreimage[] = "Antécédent";
constexpr static char esPreimage[] = "Imagen inversa";
constexpr static char dePreimage[] = "Urbild";
constexpr static char ptPreimage[] = "Imagem inversa";
constexpr static char enPrimeFactorDecomposition[] = "Integer factorization";
constexpr static char frPrimeFactorDecomposition[] = "Décomposition en facteurs premiers";
constexpr static char esPrimeFactorDecomposition[] = "Factorización de enteros";
constexpr static char dePrimeFactorDecomposition[] = "Primfaktorzerlegung";
constexpr static char ptPrimeFactorDecomposition[] = "Fatorização de inteiros";
constexpr static char enProbaApp[] = "Probability";
constexpr static char frProbaApp[] = "Probabilités";
constexpr static char esProbaApp[] = "Probabilidad";
constexpr static char deProbaApp[] = "Wahrsch.";
constexpr static char ptProbaApp[] = "Probabilidade";
constexpr static char enProbaAppCapital[] = "PROBABILITY";
constexpr static char frProbaAppCapital[] = "PROBABILITES";
constexpr static char esProbaAppCapital[] = "PROBABILIDAD";
constexpr static char deProbaAppCapital[] = "WAHRSCHEINLICHKEIT";
constexpr static char ptProbaAppCapital[] = "PROBABILIDADE";
constexpr static char enProbability[] = "Probability";
constexpr static char frProbability[] = "Probabilités";
constexpr static char esProbability[] = "Probabilidad";
constexpr static char deProbability[] = "Wahrscheinlichkeit";
constexpr static char ptProbability[] = "Probabilidade";
constexpr static char enProduct[] = "Product";
constexpr static char frProduct[] = "Produit";
constexpr static char esProduct[] = "Productorio";
constexpr static char deProduct[] = "Produkt";
constexpr static char ptProduct[] = "Produto";
constexpr static char enProtonMassTag[] = "Mass of a proton (kg)";
constexpr static char frProtonMassTag[] = "Masse d'un proton (kg)";
constexpr static char esProtonMassTag[] = "Masa de un protón (kg)";
constexpr static char deProtonMassTag[] = "Masse eines Protons (kg)";
constexpr static char ptProtonMassTag[] = "Massa de um próton (kg)";
constexpr static char enPython1J[] = "Imaginary i";
constexpr static char frPython1J[] = "i complexe";
constexpr static char esPython1J[] = "Imaginary i";
constexpr static char dePython1J[] = "Imaginäres i";
constexpr static char ptPython1J[] = "Imaginary i";
constexpr static char enPythonAbs[] = "Absolute value/Magnitude";
constexpr static char frPythonAbs[] = "Valeur absolue/Module";
constexpr static char esPythonAbs[] = "Absolute value/Magnitude";
constexpr static char dePythonAbs[] = "Absolute/r Wert/Größe";
constexpr static char ptPythonAbs[] = "Absolute value/Magnitude";
constexpr static char enPythonAcos[] = "Arc cosine";
constexpr static char frPythonAcos[] = "Arc cosinus";
constexpr static char esPythonAcos[] = "Arc cosine";
constexpr static char dePythonAcos[] = "Arkuskosinus";
constexpr static char ptPythonAcos[] = "Arc cosine";
constexpr static char enPythonAcosh[] = "Arc hyperbolic cosine";
constexpr static char frPythonAcosh[] = "Arc cosinus hyperbolique";
constexpr static char esPythonAcosh[] = "Arc hyperbolic cosine";
constexpr static char dePythonAcosh[] = "Hyperbelkosinus";
constexpr static char ptPythonAcosh[] = "Arc hyperbolic cosine";
constexpr static char enPythonAmpersand[] = "Bitwise and";
constexpr static char frPythonAmpersand[] = "Et logique";
constexpr static char esPythonAmpersand[] = "Bitwise and";
constexpr static char dePythonAmpersand[] = "Bitweise und";
constexpr static char ptPythonAmpersand[] = "Bitwise and";
constexpr static char enPythonAsin[] = "Arc sine";
constexpr static char frPythonAsin[] = "Arc sinus";
constexpr static char esPythonAsin[] = "Arc sine";
constexpr static char dePythonAsin[] = "Arkussinus";
constexpr static char ptPythonAsin[] = "Arc sine";
constexpr static char enPythonAsinh[] = "Arc hyperbolic sine";
constexpr static char frPythonAsinh[] = "Arc sinus hyperbolique";
constexpr static char esPythonAsinh[] = "Arc hyperbolic sine";
constexpr static char dePythonAsinh[] = "Hyperbelsinus";
constexpr static char ptPythonAsinh[] = "Arc hyperbolic sine";
constexpr static char enPythonAtan[] = "Arc tangent";
constexpr static char frPythonAtan[] = "Arc tangente";
constexpr static char esPythonAtan[] = "Arc tangent";
constexpr static char dePythonAtan[] = "Arkustangens";
constexpr static char ptPythonAtan[] = "Arc tangent";
constexpr static char enPythonAtan2[] = "Return atan(y/x)";
constexpr static char frPythonAtan2[] = "Calcul de atan(y/x)";
constexpr static char esPythonAtan2[] = "Return atan(y/x)";
constexpr static char dePythonAtan2[] = "Gib atan(y/x)";
constexpr static char ptPythonAtan2[] = "Return atan(y/x)";
constexpr static char enPythonAtanh[] = "Arc hyperbolic tangent";
constexpr static char frPythonAtanh[] = "Arc tangente hyperbolique";
constexpr static char esPythonAtanh[] = "Arc hyperbolic tangent";
constexpr static char dePythonAtanh[] = "Hyperbeltangens";
constexpr static char ptPythonAtanh[] = "Arc hyperbolic tangent";
constexpr static char enPythonBin[] = "Convert integer to binary";
constexpr static char frPythonBin[] = "Conversion d'un entier en binaire";
constexpr static char esPythonBin[] = "Convert integer to binary";
constexpr static char dePythonBin[] = "Ganzzahl nach binär konvertieren";
constexpr static char ptPythonBin[] = "Convert integer to binary";
constexpr static char enPythonCeil[] = "Ceiling";
constexpr static char frPythonCeil[] = "Plafond";
constexpr static char esPythonCeil[] = "Ceiling";
constexpr static char dePythonCeil[] = "Aufrundung";
constexpr static char ptPythonCeil[] = "Ceiling";
constexpr static char enPythonChoice[] = "Random number in the list";
constexpr static char frPythonChoice[] = "Nombre aléatoire dans la liste";
constexpr static char esPythonChoice[] = "Random number in the list";
constexpr static char dePythonChoice[] = "Zufallszahl aus der Liste";
constexpr static char ptPythonChoice[] = "Random number in the list";
constexpr static char enPythonCmathFunction[] = "cmath module function prefix";
constexpr static char frPythonCmathFunction[] = "Préfixe fonction du module cmath";
constexpr static char esPythonCmathFunction[] = "cmath module function prefix";
constexpr static char dePythonCmathFunction[] = "cmath-Modul-Funktionspräfix";
constexpr static char ptPythonCmathFunction[] = "cmath module function prefix";
constexpr static char enPythonColor[] = "Define a rgb color";
constexpr static char frPythonColor[] = "Définit une couleur rvb";
constexpr static char esPythonColor[] = "Define a rgb color";
constexpr static char dePythonColor[] = "Definiere eine RGB-Farbe";
constexpr static char ptPythonColor[] = "Define a rgb color";
constexpr static char enPythonComplex[] = "Return a+ib";
constexpr static char frPythonComplex[] = "Renvoie a+ib";
constexpr static char esPythonComplex[] = "Return a+ib";
constexpr static char dePythonComplex[] = "a+ib zurückgeben";
constexpr static char ptPythonComplex[] = "Return a+ib";
constexpr static char enPythonConstantE[] = "2.718281828459046";
constexpr static char frPythonConstantE[] = "2.718281828459045";
constexpr static char esPythonConstantE[] = "2.718281828459046";
constexpr static char dePythonConstantE[] = "2.718281828459046";
constexpr static char ptPythonConstantE[] = "2.718281828459046";
constexpr static char enPythonConstantPi[] = "3.141592653589794";
constexpr static char frPythonConstantPi[] = "3.141592653589793";
constexpr static char esPythonConstantPi[] = "3.141592653589794";
constexpr static char dePythonConstantPi[] = "3.141592653589794";
constexpr static char ptPythonConstantPi[] = "3.141592653589794";
constexpr static char enPythonCopySign[] = "Return x with the sign of y";
constexpr static char frPythonCopySign[] = "Renvoie x avec le signe de y";
constexpr static char esPythonCopySign[] = "Return x with the sign of y";
constexpr static char dePythonCopySign[] = "Return x with the sign of y";
constexpr static char ptPythonCopySign[] = "Return x with the sign of y";
constexpr static char enPythonCos[] = "Cosine";
constexpr static char frPythonCos[] = "Cosinus";
constexpr static char esPythonCos[] = "Cosine";
constexpr static char dePythonCos[] = "Kosinus";
constexpr static char ptPythonCos[] = "Cosine";
constexpr static char enPythonCosh[] = "Hyperbolic cosine";
constexpr static char frPythonCosh[] = "Cosinus hyperbolique";
constexpr static char esPythonCosh[] = "Hyperbolic cosine";
constexpr static char dePythonCosh[] = "Hyperbolic cosine";
constexpr static char ptPythonCosh[] = "Hyperbolic cosine";
constexpr static char enPythonDegrees[] = "Convert x from radians to degrees";
constexpr static char frPythonDegrees[] = "Conversion de radians en degrés";
constexpr static char esPythonDegrees[] = "Convert x from radians to degrees";
constexpr static char dePythonDegrees[] = "Convert x from radians to degrees";
constexpr static char ptPythonDegrees[] = "Convert x from radians to degrees";
constexpr static char enPythonDivMod[] = "Quotient and remainder";
constexpr static char frPythonDivMod[] = "Quotient et reste";
constexpr static char esPythonDivMod[] = "Quotient and remainder";
constexpr static char dePythonDivMod[] = "Quotient and remainder";
constexpr static char ptPythonDivMod[] = "Quotient and remainder";
constexpr static char enPythonDrawString[] = "Display a text from pixel (x,y)";
constexpr static char frPythonDrawString[] = "Affiche un texte au pixel (x,y)";
constexpr static char esPythonDrawString[] = "Display a text from pixel (x,y)";
constexpr static char dePythonDrawString[] = "Display a text from pixel (x,y)";
constexpr static char ptPythonDrawString[] = "Display a text from pixel (x,y)";
constexpr static char enPythonErf[] = "Error function";
constexpr static char frPythonErf[] = "Fonction d'erreur";
constexpr static char esPythonErf[] = "Error function";
constexpr static char dePythonErf[] = "Error function";
constexpr static char ptPythonErf[] = "Error function";
constexpr static char enPythonErfc[] = "Complementary error function";
constexpr static char frPythonErfc[] = "Fonction d'erreur complémentaire";
constexpr static char esPythonErfc[] = "Complementary error function";
constexpr static char dePythonErfc[] = "Complementary error function";
constexpr static char ptPythonErfc[] = "Complementary error function";
constexpr static char enPythonEval[] = "Returns the evaluated expression";
constexpr static char frPythonEval[] = "Evalue l'expression en argument ";
constexpr static char esPythonEval[] = "Returns the evaluated expression";
constexpr static char dePythonEval[] = "Returns the evaluated expression";
constexpr static char ptPythonEval[] = "Returns the evaluated expression";
constexpr static char enPythonExp[] = "Exponential function";
constexpr static char frPythonExp[] = "Fonction exponentielle";
constexpr static char esPythonExp[] = "Exponential function";
constexpr static char dePythonExp[] = "Exponential function";
constexpr static char ptPythonExp[] = "Exponential function";
constexpr static char enPythonExpm1[] = "Compute exp(x)-1";
constexpr static char frPythonExpm1[] = "Calcul de exp(x)-1";
constexpr static char esPythonExpm1[] = "Compute exp(x)-1";
constexpr static char dePythonExpm1[] = "Compute exp(x)-1";
constexpr static char ptPythonExpm1[] = "Compute exp(x)-1";
constexpr static char enPythonFabs[] = "Absolute value";
constexpr static char frPythonFabs[] = "Valeur absolue";
constexpr static char esPythonFabs[] = "Absolute value";
constexpr static char dePythonFabs[] = "Absolute value";
constexpr static char ptPythonFabs[] = "Absolute value";
constexpr static char enPythonFillRect[] = "Fill a rectangle at pixel (x,y)";
constexpr static char frPythonFillRect[] = "Remplit un rectangle";
constexpr static char esPythonFillRect[] = "Fill a rectangle at pixel (x,y)";
constexpr static char dePythonFillRect[] = "Fill a rectangle at pixel (x,y)";
constexpr static char ptPythonFillRect[] = "Fill a rectangle at pixel (x,y)";
constexpr static char enPythonFloat[] = "Convert x to a float";
constexpr static char frPythonFloat[] = "Conversion en flottant";
constexpr static char esPythonFloat[] = "Convert x to a float";
constexpr static char dePythonFloat[] = "Convert x to a float";
constexpr static char ptPythonFloat[] = "Convert x to a float";
constexpr static char enPythonFloor[] = "Floor";
constexpr static char frPythonFloor[] = "Partie entière";
constexpr static char esPythonFloor[] = "Floor";
constexpr static char dePythonFloor[] = "Floor";
constexpr static char ptPythonFloor[] = "Floor";
constexpr static char enPythonFmod[] = "a modulo b";
constexpr static char frPythonFmod[] = "a modulo b";
constexpr static char esPythonFmod[] = "a modulo b";
constexpr static char dePythonFmod[] = "a modulo b";
constexpr static char ptPythonFmod[] = "a modulo b";
constexpr static char enPythonFrExp[] = "Mantissa and exponent of x";
constexpr static char frPythonFrExp[] = "Mantisse et exposant de x : (m,e)";
constexpr static char esPythonFrExp[] = "Mantissa and exponent of x";
constexpr static char dePythonFrExp[] = "Mantissa and exponent of x";
constexpr static char ptPythonFrExp[] = "Mantissa and exponent of x";
constexpr static char enPythonGamma[] = "Gamma function";
constexpr static char frPythonGamma[] = "Fonction gamma";
constexpr static char esPythonGamma[] = "Gamma function";
constexpr static char dePythonGamma[] = "Gamma function";
constexpr static char ptPythonGamma[] = "Gamma function";
constexpr static char enPythonGetPixel[] = "Return pixel (x,y) color";
constexpr static char frPythonGetPixel[] = "Renvoie la couleur du pixel (x,y)";
constexpr static char esPythonGetPixel[] = "Return pixel (x,y) color";
constexpr static char dePythonGetPixel[] = "Return pixel (x,y) color";
constexpr static char ptPythonGetPixel[] = "Return pixel (x,y) color";
constexpr static char enPythonGetrandbits[] = "Integer with k random bits";
constexpr static char frPythonGetrandbits[] = "Nombre aléatoire sur k bits";
constexpr static char esPythonGetrandbits[] = "Integer with k random bits";
constexpr static char dePythonGetrandbits[] = "Integer with k random bits";
constexpr static char ptPythonGetrandbits[] = "Integer with k random bits";
constexpr static char enPythonHex[] = "Convert integer to hexadecimal";
constexpr static char frPythonHex[] = "Conversion entier en hexadécimal";
constexpr static char esPythonHex[] = "Convert integer to hexadecimal";
constexpr static char dePythonHex[] = "Convert integer to hexadecimal";
constexpr static char ptPythonHex[] = "Convert integer to hexadecimal";
constexpr static char enPythonImag[] = "Imaginary part of z";
constexpr static char frPythonImag[] = "Partie imaginaire de z";
constexpr static char esPythonImag[] = "Imaginary part of z";
constexpr static char dePythonImag[] = "Imaginärteil von z";
constexpr static char ptPythonImag[] = "Imaginary part of z";
constexpr static char enPythonImportCmath[] = "Import cmath module";
constexpr static char frPythonImportCmath[] = "Importation du module cmath";
constexpr static char esPythonImportCmath[] = "Import cmath module";
constexpr static char dePythonImportCmath[] = "Import cmath module";
constexpr static char ptPythonImportCmath[] = "Import cmath module";
constexpr static char enPythonImportFromCmath[] = "Import cmath module";
constexpr static char frPythonImportFromCmath[] = "Importation du module cmath";
constexpr static char esPythonImportFromCmath[] = "Import cmath module";
constexpr static char dePythonImportFromCmath[] = "Import cmath module";
constexpr static char ptPythonImportFromCmath[] = "Import cmath module";
constexpr static char enPythonImportFromKandinsky[] = "Import kandinsky module";
constexpr static char frPythonImportFromKandinsky[] = "Importation du module kandinsky";
constexpr static char esPythonImportFromKandinsky[] = "Import kandinsky module";
constexpr static char dePythonImportFromKandinsky[] = "Import kandinsky module";
constexpr static char ptPythonImportFromKandinsky[] = "Import kandinsky module";
constexpr static char enPythonImportFromMath[] = "Import math module";
constexpr static char frPythonImportFromMath[] = "Importation du module math";
constexpr static char esPythonImportFromMath[] = "Import math module";
constexpr static char dePythonImportFromMath[] = "Import math module";
constexpr static char ptPythonImportFromMath[] = "Import math module";
constexpr static char enPythonImportFromRandom[] = "Import random module";
constexpr static char frPythonImportFromRandom[] = "Importation du module random";
constexpr static char esPythonImportFromRandom[] = "Import random module";
constexpr static char dePythonImportFromRandom[] = "Import random module";
constexpr static char ptPythonImportFromRandom[] = "Import random module";
constexpr static char enPythonImportFromTurtle[] = "Import turtle module";
constexpr static char frPythonImportFromTurtle[] = "Importation du module turtle";
constexpr static char esPythonImportFromTurtle[] = "Import turtle module";
constexpr static char dePythonImportFromTurtle[] = "Import turtle module";
constexpr static char ptPythonImportFromTurtle[] = "Import turtle module";
constexpr static char enPythonImportKandinsky[] = "Import kandinsky module";
constexpr static char frPythonImportKandinsky[] = "Importation du module kandinsky";
constexpr static char esPythonImportKandinsky[] = "Import kandinsky module";
constexpr static char dePythonImportKandinsky[] = "Import kandinsky module";
constexpr static char ptPythonImportKandinsky[] = "Import kandinsky module";
constexpr static char enPythonImportMath[] = "Import math module";
constexpr static char frPythonImportMath[] = "Importation du module math";
constexpr static char esPythonImportMath[] = "Import math module";
constexpr static char dePythonImportMath[] = "Import math module";
constexpr static char ptPythonImportMath[] = "Import math module";
constexpr static char enPythonImportRandom[] = "Import random module";
constexpr static char frPythonImportRandom[] = "Importation du module random";
constexpr static char esPythonImportRandom[] = "Import random module";
constexpr static char dePythonImportRandom[] = "Import random module";
constexpr static char ptPythonImportRandom[] = "Import random module";
constexpr static char enPythonImportTurtle[] = "Import turtle module";
constexpr static char frPythonImportTurtle[] = "Importation du module turtle";
constexpr static char esPythonImportTurtle[] = "Import turtle module";
constexpr static char dePythonImportTurtle[] = "Import turtle module";
constexpr static char ptPythonImportTurtle[] = "Import turtle module";
constexpr static char enPythonInput[] = "Prompt a value";
constexpr static char frPythonInput[] = "Entrer une valeur";
constexpr static char esPythonInput[] = "Prompt a value";
constexpr static char dePythonInput[] = "Prompt a value";
constexpr static char ptPythonInput[] = "Prompt a value";
constexpr static char enPythonInt[] = "Convert x to an integer";
constexpr static char frPythonInt[] = "Conversion en entier";
constexpr static char esPythonInt[] = "Convert x to an integer";
constexpr static char dePythonInt[] = "Convert x to an integer";
constexpr static char ptPythonInt[] = "Convert x to an integer";
constexpr static char enPythonIsFinite[] = "Check if x is finite";
constexpr static char frPythonIsFinite[] = "Teste si x est fini";
constexpr static char esPythonIsFinite[] = "Check if x is finite";
constexpr static char dePythonIsFinite[] = "Check if x is finite";
constexpr static char ptPythonIsFinite[] = "Check if x is finite";
constexpr static char enPythonIsInfinite[] = "Check if x is infinity";
constexpr static char frPythonIsInfinite[] = "Teste si x est infini";
constexpr static char esPythonIsInfinite[] = "Check if x is infinity";
constexpr static char dePythonIsInfinite[] = "Check if x is infinity";
constexpr static char ptPythonIsInfinite[] = "Check if x is infinity";
constexpr static char enPythonIsNaN[] = "Check if x is a NaN";
constexpr static char frPythonIsNaN[] = "Teste si x est NaN";
constexpr static char esPythonIsNaN[] = "Check if x is a NaN";
constexpr static char dePythonIsNaN[] = "Check if x is a NaN";
constexpr static char ptPythonIsNaN[] = "Check if x is a NaN";
constexpr static char enPythonKandinskyFunction[] = "kandinsky module function prefix";
constexpr static char frPythonKandinskyFunction[] = "Préfixe fonction module kandinsky";
constexpr static char esPythonKandinskyFunction[] = "kandinsky module function prefix";
constexpr static char dePythonKandinskyFunction[] = "kandinsky module function prefix";
constexpr static char ptPythonKandinskyFunction[] = "kandinsky module function prefix";
constexpr static char enPythonLF[] = "Line feed";
constexpr static char frPythonLF[] = "Saut à la ligne";
constexpr static char esPythonLF[] = "Line feed";
constexpr static char dePythonLF[] = "Zeilenvorschub";
constexpr static char ptPythonLF[] = "Line feed";
constexpr static char enPythonLdexp[] = "Return x*(2**i), inverse of frexp";
constexpr static char frPythonLdexp[] = "Inverse de frexp : x*(2**i)";
constexpr static char esPythonLdexp[] = "Return x*(2**i), inverse of frexp";
constexpr static char dePythonLdexp[] = "Return x*(2**i), inverse of frexp";
constexpr static char ptPythonLdexp[] = "Return x*(2**i), inverse of frexp";
constexpr static char enPythonLength[] = "Length of an object";
constexpr static char frPythonLength[] = "Longueur d'un objet";
constexpr static char esPythonLength[] = "Length of an object";
constexpr static char dePythonLength[] = "Length of an object";
constexpr static char ptPythonLength[] = "Length of an object";
constexpr static char enPythonLgamma[] = "Log-gamma function";
constexpr static char frPythonLgamma[] = "Logarithme de la fonction gamma";
constexpr static char esPythonLgamma[] = "Log-gamma function";
constexpr static char dePythonLgamma[] = "Log-gamma function";
constexpr static char ptPythonLgamma[] = "Log-gamma function";
constexpr static char enPythonLog[] = "Logarithm to base a";
constexpr static char frPythonLog[] = "Logarithme de base a";
constexpr static char esPythonLog[] = "Logarithm to base a";
constexpr static char dePythonLog[] = "Logarithm to base a";
constexpr static char ptPythonLog[] = "Logarithm to base a";
constexpr static char enPythonLog10[] = "Logarithm to base 10";
constexpr static char frPythonLog10[] = "Logarithme décimal";
constexpr static char esPythonLog10[] = "Logarithm to base 10";
constexpr static char dePythonLog10[] = "Logarithm to base 10";
constexpr static char ptPythonLog10[] = "Logarithm to base 10";
constexpr static char enPythonLog2[] = "Logarithm to base 2";
constexpr static char frPythonLog2[] = "Logarithme de base 2";
constexpr static char esPythonLog2[] = "Logarithm to base 2";
constexpr static char dePythonLog2[] = "Logarithm to base 2";
constexpr static char ptPythonLog2[] = "Logarithm to base 2";
constexpr static char enPythonMathFunction[] = "math module function prefix";
constexpr static char frPythonMathFunction[] = "Préfixe fonction du module math";
constexpr static char esPythonMathFunction[] = "math module function prefix";
constexpr static char dePythonMathFunction[] = "math module function prefix";
constexpr static char ptPythonMathFunction[] = "math module function prefix";
constexpr static char enPythonMax[] = "Maximum";
constexpr static char frPythonMax[] = "Maximum";
constexpr static char esPythonMax[] = "Maximum";
constexpr static char dePythonMax[] = "Maximum";
constexpr static char ptPythonMax[] = "Maximum";
constexpr static char enPythonMin[] = "Minimum";
constexpr static char frPythonMin[] = "Minimum";
constexpr static char esPythonMin[] = "Minimum";
constexpr static char dePythonMin[] = "Minimum";
constexpr static char ptPythonMin[] = "Minimum";
constexpr static char enPythonModf[] = "Fractional and integer parts of x";
constexpr static char frPythonModf[] = "Parties fractionnaire et entière";
constexpr static char esPythonModf[] = "Fractional and integer parts of x";
constexpr static char dePythonModf[] = "Fractional and integer parts of x";
constexpr static char ptPythonModf[] = "Fractional and integer parts of x";
constexpr static char enPythonOct[] = "Convert integer to octal";
constexpr static char frPythonOct[] = "Conversion en octal";
constexpr static char esPythonOct[] = "Convert integer to octal";
constexpr static char dePythonOct[] = "Convert integer to octal";
constexpr static char ptPythonOct[] = "Convert integer to octal";
constexpr static char enPythonPercent[] = "Modulo";
constexpr static char frPythonPercent[] = "Modulo";
constexpr static char esPythonPercent[] = "Modulo";
constexpr static char dePythonPercent[] = "Modulo";
constexpr static char ptPythonPercent[] = "Modulo";
constexpr static char enPythonPhase[] = "Phase of z";
constexpr static char frPythonPhase[] = "Argument de z";
constexpr static char esPythonPhase[] = "Phase of z";
constexpr static char dePythonPhase[] = "Phase of z";
constexpr static char ptPythonPhase[] = "Phase of z";
constexpr static char enPythonPolar[] = "z in polar coordinates";
constexpr static char frPythonPolar[] = "Conversion en polaire";
constexpr static char esPythonPolar[] = "z in polar coordinates";
constexpr static char dePythonPolar[] = "z in polar coordinates";
constexpr static char ptPythonPolar[] = "z in polar coordinates";
constexpr static char enPythonPound[] = "Comment";
constexpr static char frPythonPound[] = "Commentaire";
constexpr static char esPythonPound[] = "Comment";
constexpr static char dePythonPound[] = "Kommentar";
constexpr static char ptPythonPound[] = "Comment";
constexpr static char enPythonPower[] = "x raised to the power y";
constexpr static char frPythonPower[] = "x à la puissance y";
constexpr static char esPythonPower[] = "x raised to the power y";
constexpr static char dePythonPower[] = "x raised to the power y";
constexpr static char ptPythonPower[] = "x raised to the power y";
constexpr static char enPythonPrint[] = "Print object";
constexpr static char frPythonPrint[] = "Affiche l'objet";
constexpr static char esPythonPrint[] = "Print object";
constexpr static char dePythonPrint[] = "Print object";
constexpr static char ptPythonPrint[] = "Print object";
constexpr static char enPythonRadians[] = "Convert x from degrees to radians";
constexpr static char frPythonRadians[] = "Conversion de degrés en radians";
constexpr static char esPythonRadians[] = "Convert x from degrees to radians";
constexpr static char dePythonRadians[] = "Convert x from degrees to radians";
constexpr static char ptPythonRadians[] = "Convert x from degrees to radians";
constexpr static char enPythonRandint[] = "Random integer in [a,b]";
constexpr static char frPythonRandint[] = "Entier aléatoire dans [a,b]";
constexpr static char esPythonRandint[] = "Random integer in [a,b]";
constexpr static char dePythonRandint[] = "Random integer in [a,b]";
constexpr static char ptPythonRandint[] = "Random integer in [a,b]";
constexpr static char enPythonRandom[] = "Floating point number in [0,1[";
constexpr static char frPythonRandom[] = "Nombre décimal dans [0,1[";
constexpr static char esPythonRandom[] = "Floating point number in [0,1[";
constexpr static char dePythonRandom[] = "Floating point number in [0,1[";
constexpr static char ptPythonRandom[] = "Floating point number in [0,1[";
constexpr static char enPythonRandomFunction[] = "random module function prefix";
constexpr static char frPythonRandomFunction[] = "Préfixe fonction du module random";
constexpr static char esPythonRandomFunction[] = "random module function prefix";
constexpr static char dePythonRandomFunction[] = "random module function prefix";
constexpr static char ptPythonRandomFunction[] = "random module function prefix";
constexpr static char enPythonRandrange[] = "Random number in range(start, stop)";
constexpr static char frPythonRandrange[] = "Nombre dans range(start, stop)";
constexpr static char esPythonRandrange[] = "Random number in range(start, stop)";
constexpr static char dePythonRandrange[] = "Random number in range(start, stop)";
constexpr static char ptPythonRandrange[] = "Random number in range(start, stop)";
constexpr static char enPythonRangeStartStop[] = "List from start to stop-1";
constexpr static char frPythonRangeStartStop[] = "Liste de start à stop-1";
constexpr static char esPythonRangeStartStop[] = "List from start to stop-1";
constexpr static char dePythonRangeStartStop[] = "List from start to stop-1";
constexpr static char ptPythonRangeStartStop[] = "List from start to stop-1";
constexpr static char enPythonRangeStop[] = "List from 0 to stop-1";
constexpr static char frPythonRangeStop[] = "Liste de 0 à stop-1";
constexpr static char esPythonRangeStop[] = "List from 0 to stop-1";
constexpr static char dePythonRangeStop[] = "List from 0 to stop-1";
constexpr static char ptPythonRangeStop[] = "List from 0 to stop-1";
constexpr static char enPythonReal[] = "Real part of z";
constexpr static char frPythonReal[] = "Partie réelle de z";
constexpr static char esPythonReal[] = "Real part of z";
constexpr static char dePythonReal[] = "Realteil von z";
constexpr static char ptPythonReal[] = "Real part of z";
constexpr static char enPythonRect[] = "z in cartesian coordinates";
constexpr static char frPythonRect[] = "Conversion en algébrique";
constexpr static char esPythonRect[] = "z in cartesian coordinates";
constexpr static char dePythonRect[] = "z in cartesian coordinates";
constexpr static char ptPythonRect[] = "z in cartesian coordinates";
constexpr static char enPythonRound[] = "Round to n digits";
constexpr static char frPythonRound[] = "Arrondi à n décimales";
constexpr static char esPythonRound[] = "Round to n digits";
constexpr static char dePythonRound[] = "Round to n digits";
constexpr static char ptPythonRound[] = "Round to n digits";
constexpr static char enPythonSeed[] = "Initialize random number generator";
constexpr static char frPythonSeed[] = "Initialiser générateur aléatoire";
constexpr static char esPythonSeed[] = "Initialize random number generator";
constexpr static char dePythonSeed[] = "Initialize random number generator";
constexpr static char ptPythonSeed[] = "Initialize random number generator";
constexpr static char enPythonSetPixel[] = "Color pixel (x,y)";
constexpr static char frPythonSetPixel[] = "Colore le pixel (x,y)";
constexpr static char esPythonSetPixel[] = "Color pixel (x,y)";
constexpr static char dePythonSetPixel[] = "Color pixel (x,y)";
constexpr static char ptPythonSetPixel[] = "Color pixel (x,y)";
constexpr static char enPythonSin[] = "Sine";
constexpr static char frPythonSin[] = "Sinus";
constexpr static char esPythonSin[] = "Sine";
constexpr static char dePythonSin[] = "Sine";
constexpr static char ptPythonSin[] = "Sine";
constexpr static char enPythonSingleQuote[] = "Single quote";
constexpr static char frPythonSingleQuote[] = "Apostrophe";
constexpr static char esPythonSingleQuote[] = "Single quote";
constexpr static char dePythonSingleQuote[] = "Einfaches Anführungszeichen";
constexpr static char ptPythonSingleQuote[] = "Single quote";
constexpr static char enPythonSinh[] = "Hyperbolic sine";
constexpr static char frPythonSinh[] = "Sinus hyperbolique";
constexpr static char esPythonSinh[] = "Hyperbolic sine";
constexpr static char dePythonSinh[] = "Hyperbolic sine";
constexpr static char ptPythonSinh[] = "Hyperbolic sine";
constexpr static char enPythonSorted[] = "Sort a list";
constexpr static char frPythonSorted[] = "Tri d'une liste";
constexpr static char esPythonSorted[] = "Sort a list";
constexpr static char dePythonSorted[] = "Sort a list";
constexpr static char ptPythonSorted[] = "Sort a list";
constexpr static char enPythonSqrt[] = "Square root";
constexpr static char frPythonSqrt[] = "Racine carrée";
constexpr static char esPythonSqrt[] = "Square root";
constexpr static char dePythonSqrt[] = "Square root";
constexpr static char ptPythonSqrt[] = "Square root";
constexpr static char enPythonSum[] = "Sum the items of a list";
constexpr static char frPythonSum[] = "Somme des éléments d'une liste";
constexpr static char esPythonSum[] = "Sum the items of a list";
constexpr static char dePythonSum[] = "Sum the items of a list";
constexpr static char ptPythonSum[] = "Sum the items of a list";
constexpr static char enPythonSymbolExp[] = "Bitwise exclusive or";
constexpr static char frPythonSymbolExp[] = "Ou exclusif logique";
constexpr static char esPythonSymbolExp[] = "Bitwise exclusive or";
constexpr static char dePythonSymbolExp[] = "Bitweise exklusiv oder";
constexpr static char ptPythonSymbolExp[] = "Bitwise exclusive or";
constexpr static char enPythonTab[] = "Tabulation";
constexpr static char frPythonTab[] = "Tabulation";
constexpr static char esPythonTab[] = "Tabulation";
constexpr static char dePythonTab[] = "Tabulator";
constexpr static char ptPythonTab[] = "Tabulation";
constexpr static char enPythonTan[] = "Tangent";
constexpr static char frPythonTan[] = "Tangente";
constexpr static char esPythonTan[] = "Tangent";
constexpr static char dePythonTan[] = "Tangent";
constexpr static char ptPythonTan[] = "Tangent";
constexpr static char enPythonTanh[] = "Hyperbolic tangent";
constexpr static char frPythonTanh[] = "Tangente hyperbolique";
constexpr static char esPythonTanh[] = "Hyperbolic tangent";
constexpr static char dePythonTanh[] = "Hyperbolic tangent";
constexpr static char ptPythonTanh[] = "Hyperbolic tangent";
constexpr static char enPythonTimeFromImport[] = "Import time module";
constexpr static char frPythonTimeFromImport[] = "Importation du module temps";
constexpr static char esPythonTimeFromImport[] = "Import time module";
constexpr static char dePythonTimeFromImport[] = "Import time module";
constexpr static char ptPythonTimeFromImport[] = "Import time module";
constexpr static char enPythonTimeImport[] = "Import time module";
constexpr static char frPythonTimeImport[] = "Importation du module temps";
constexpr static char esPythonTimeImport[] = "Import time module";
constexpr static char dePythonTimeImport[] = "Import time module";
constexpr static char ptPythonTimeImport[] = "Import time module";
constexpr static char enPythonTimeMonotonic[] = "Return monotonic time";
constexpr static char frPythonTimeMonotonic[] = "Retorune le temps monotonic";
constexpr static char esPythonTimeMonotonic[] = "Tiempo monótono de retorno";
constexpr static char dePythonTimeMonotonic[] = "Monotone Zeit zurückgeben";
constexpr static char ptPythonTimeMonotonic[] = "Retornar tempo monotônico";
constexpr static char enPythonTimePrefix[] = "time module function prefix";
constexpr static char frPythonTimePrefix[] = "Préfixe fonction du module temps";
constexpr static char esPythonTimePrefix[] = "time module function prefix";
constexpr static char dePythonTimePrefix[] = "time module function prefix";
constexpr static char ptPythonTimePrefix[] = "time module function prefix";
constexpr static char enPythonTimeSleep[] = "Wait for n second";
constexpr static char frPythonTimeSleep[] = "Attendre n secondes";
constexpr static char esPythonTimeSleep[] = "Esperar n segundos";
constexpr static char dePythonTimeSleep[] = "Warten Sie n Sekunden lang";
constexpr static char ptPythonTimeSleep[] = "Aguardar n segundos";
constexpr static char enPythonTrunc[] = "x truncated to an integer";
constexpr static char frPythonTrunc[] = "Troncature entière";
constexpr static char esPythonTrunc[] = "x truncated to an integer";
constexpr static char dePythonTrunc[] = "x truncated to an integer";
constexpr static char ptPythonTrunc[] = "x truncated to an integer";
constexpr static char enPythonTurtleBackward[] = "Move backward by x pixels";
constexpr static char frPythonTurtleBackward[] = "Recule de x pixels";
constexpr static char esPythonTurtleBackward[] = "Move backward by x pixels";
constexpr static char dePythonTurtleBackward[] = "Move backward by x pixels";
constexpr static char ptPythonTurtleBackward[] = "Move backward by x pixels";
constexpr static char enPythonTurtleBlack[] = "Black color";
constexpr static char frPythonTurtleBlack[] = "Couleur noire";
constexpr static char esPythonTurtleBlack[] = "Black color";
constexpr static char dePythonTurtleBlack[] = "Black color";
constexpr static char ptPythonTurtleBlack[] = "Black color";
constexpr static char enPythonTurtleBlue[] = "Blue color";
constexpr static char frPythonTurtleBlue[] = "Couleur bleue";
constexpr static char esPythonTurtleBlue[] = "Blue color";
constexpr static char dePythonTurtleBlue[] = "Blue color";
constexpr static char ptPythonTurtleBlue[] = "Blue color";
constexpr static char enPythonTurtleBrown[] = "Brown color";
constexpr static char frPythonTurtleBrown[] = "Couleur marron";
constexpr static char esPythonTurtleBrown[] = "Brown color";
constexpr static char dePythonTurtleBrown[] = "Brown color";
constexpr static char ptPythonTurtleBrown[] = "Brown color";
constexpr static char enPythonTurtleCircle[] = "Circle of radius r pixels";
constexpr static char frPythonTurtleCircle[] = "Cercle de rayon r pixels";
constexpr static char esPythonTurtleCircle[] = "Circle of radius r pixels";
constexpr static char dePythonTurtleCircle[] = "Circle of radius r pixels";
constexpr static char ptPythonTurtleCircle[] = "Circle of radius r pixels";
constexpr static char enPythonTurtleColor[] = "Set the pen color";
constexpr static char frPythonTurtleColor[] = "Modifie la couleur du tracé";
constexpr static char esPythonTurtleColor[] = "Set the pen color";
constexpr static char dePythonTurtleColor[] = "Set the pen color";
constexpr static char ptPythonTurtleColor[] = "Set the pen color";
constexpr static char enPythonTurtleForward[] = "Move forward by x pixels";
constexpr static char frPythonTurtleForward[] = "Avance de x pixels";
constexpr static char esPythonTurtleForward[] = "Move forward by x pixels";
constexpr static char dePythonTurtleForward[] = "Move forward by x pixels";
constexpr static char ptPythonTurtleForward[] = "Move forward by x pixels";
constexpr static char enPythonTurtleFunction[] = "turtle module function prefix";
constexpr static char frPythonTurtleFunction[] = "Préfixe fonction du module turtle";
constexpr static char esPythonTurtleFunction[] = "turtle module function prefix";
constexpr static char dePythonTurtleFunction[] = "turtle module function prefix";
constexpr static char ptPythonTurtleFunction[] = "turtle module function prefix";
constexpr static char enPythonTurtleGoto[] = "Move to (x,y) coordinates";
constexpr static char frPythonTurtleGoto[] = "Va au point de coordonnées (x,y)";
constexpr static char esPythonTurtleGoto[] = "Move to (x,y) coordinates";
constexpr static char dePythonTurtleGoto[] = "Move to (x,y) coordinates";
constexpr static char ptPythonTurtleGoto[] = "Move to (x,y) coordinates";
constexpr static char enPythonTurtleGreen[] = "Green color";
constexpr static char frPythonTurtleGreen[] = "Couleur verte";
constexpr static char esPythonTurtleGreen[] = "Green color";
constexpr static char dePythonTurtleGreen[] = "Green color";
constexpr static char ptPythonTurtleGreen[] = "Green color";
constexpr static char enPythonTurtleGrey[] = "Grey color";
constexpr static char frPythonTurtleGrey[] = "Couleur grise";
constexpr static char esPythonTurtleGrey[] = "Grey color";
constexpr static char dePythonTurtleGrey[] = "Grey color";
constexpr static char ptPythonTurtleGrey[] = "Grey color";
constexpr static char enPythonTurtleHeading[] = "Return the current heading";
constexpr static char frPythonTurtleHeading[] = "Renvoie l'orientation actuelle";
constexpr static char esPythonTurtleHeading[] = "Return the current heading";
constexpr static char dePythonTurtleHeading[] = "Return the current heading";
constexpr static char ptPythonTurtleHeading[] = "Return the current heading";
constexpr static char enPythonTurtleHideturtle[] = "Hide the turtle";
constexpr static char frPythonTurtleHideturtle[] = "Masque la tortue";
constexpr static char esPythonTurtleHideturtle[] = "Hide the turtle";
constexpr static char dePythonTurtleHideturtle[] = "Hide the turtle";
constexpr static char ptPythonTurtleHideturtle[] = "Hide the turtle";
constexpr static char enPythonTurtleIsdown[] = "Return True if the pen is down";
constexpr static char frPythonTurtleIsdown[] = "True si le crayon est abaissé";
constexpr static char esPythonTurtleIsdown[] = "Return True if the pen is down";
constexpr static char dePythonTurtleIsdown[] = "Return True if the pen is down";
constexpr static char ptPythonTurtleIsdown[] = "Return True if the pen is down";
constexpr static char enPythonTurtleLeft[] = "Turn left by a degrees";
constexpr static char frPythonTurtleLeft[] = "Pivote de a degrés vers la gauche";
constexpr static char esPythonTurtleLeft[] = "Turn left by a degrees";
constexpr static char dePythonTurtleLeft[] = "Turn left by a degrees";
constexpr static char ptPythonTurtleLeft[] = "Turn left by a degrees";
constexpr static char enPythonTurtleOrange[] = "Orange color";
constexpr static char frPythonTurtleOrange[] = "Couleur orange";
constexpr static char esPythonTurtleOrange[] = "Orange color";
constexpr static char dePythonTurtleOrange[] = "Orange color";
constexpr static char ptPythonTurtleOrange[] = "Orange color";
constexpr static char enPythonTurtlePendown[] = "Pull the pen down";
constexpr static char frPythonTurtlePendown[] = "Abaisse le crayon";
constexpr static char esPythonTurtlePendown[] = "Pull the pen down";
constexpr static char dePythonTurtlePendown[] = "Pull the pen down";
constexpr static char ptPythonTurtlePendown[] = "Pull the pen down";
constexpr static char enPythonTurtlePensize[] = "Set the line thickness to x pixels";
constexpr static char frPythonTurtlePensize[] = "Taille du tracé en pixels";
constexpr static char esPythonTurtlePensize[] = "Set the line thickness to x pixels";
constexpr static char dePythonTurtlePensize[] = "Set the line thickness to x pixels";
constexpr static char ptPythonTurtlePensize[] = "Set the line thickness to x pixels";
constexpr static char enPythonTurtlePenup[] = "Pull the pen up";
constexpr static char frPythonTurtlePenup[] = "Relève le crayon";
constexpr static char esPythonTurtlePenup[] = "Pull the pen up";
constexpr static char dePythonTurtlePenup[] = "Pull the pen up";
constexpr static char ptPythonTurtlePenup[] = "Pull the pen up";
constexpr static char enPythonTurtlePink[] = "Pink color";
constexpr static char frPythonTurtlePink[] = "Couleur rose";
constexpr static char esPythonTurtlePink[] = "Pink color";
constexpr static char dePythonTurtlePink[] = "Pink color";
constexpr static char ptPythonTurtlePink[] = "Pink color";
constexpr static char enPythonTurtlePosition[] = "Return the current (x,y) location";
constexpr static char frPythonTurtlePosition[] = "Renvoie la position (x,y) actuelle";
constexpr static char esPythonTurtlePosition[] = "Return the current (x,y) location";
constexpr static char dePythonTurtlePosition[] = "Return the current (x,y) location";
constexpr static char ptPythonTurtlePosition[] = "Return the current (x,y) location";
constexpr static char enPythonTurtlePurple[] = "Purple color";
constexpr static char frPythonTurtlePurple[] = "Couleur violette";
constexpr static char esPythonTurtlePurple[] = "Purple color";
constexpr static char dePythonTurtlePurple[] = "Purple color";
constexpr static char ptPythonTurtlePurple[] = "Purple color";
constexpr static char enPythonTurtleRed[] = "Red color";
constexpr static char frPythonTurtleRed[] = "Couleur rouge";
constexpr static char esPythonTurtleRed[] = "Red color";
constexpr static char dePythonTurtleRed[] = "Red color";
constexpr static char ptPythonTurtleRed[] = "Red color";
constexpr static char enPythonTurtleReset[] = "Reset the drawing";
constexpr static char frPythonTurtleReset[] = "Réinitialise le dessin";
constexpr static char esPythonTurtleReset[] = "Reset the drawing";
constexpr static char dePythonTurtleReset[] = "Reset the drawing";
constexpr static char ptPythonTurtleReset[] = "Reset the drawing";
constexpr static char enPythonTurtleRight[] = "Turn right by a degrees";
constexpr static char frPythonTurtleRight[] = "Pivote de a degrés vers la droite";
constexpr static char esPythonTurtleRight[] = "Turn right by a degrees";
constexpr static char dePythonTurtleRight[] = "Turn right by a degrees";
constexpr static char ptPythonTurtleRight[] = "Turn right by a degrees";
constexpr static char enPythonTurtleSetheading[] = "Set the orientation to a degrees";
constexpr static char frPythonTurtleSetheading[] = "Met un cap de a degrés";
constexpr static char esPythonTurtleSetheading[] = "Set the orientation to a degrees";
constexpr static char dePythonTurtleSetheading[] = "Set the orientation to a degrees";
constexpr static char ptPythonTurtleSetheading[] = "Set the orientation to a degrees";
constexpr static char enPythonTurtleSetposition[] = "Positionne la tortue";
constexpr static char frPythonTurtleSetposition[] = "Positionne la tortue";
constexpr static char esPythonTurtleSetposition[] = "Positionne la tortue";
constexpr static char dePythonTurtleSetposition[] = "Positionne la tortue";
constexpr static char ptPythonTurtleSetposition[] = "Positionne la tortue";
constexpr static char enPythonTurtleShowturtle[] = "Show the turtle";
constexpr static char frPythonTurtleShowturtle[] = "Affiche la tortue";
constexpr static char esPythonTurtleShowturtle[] = "Show the turtle";
constexpr static char dePythonTurtleShowturtle[] = "Show the turtle";
constexpr static char ptPythonTurtleShowturtle[] = "Show the turtle";
constexpr static char enPythonTurtleSpeed[] = "Drawing speed between 0 and 10";
constexpr static char frPythonTurtleSpeed[] = "Vitesse du tracé entre 0 et 10";
constexpr static char esPythonTurtleSpeed[] = "Drawing speed between 0 and 10";
constexpr static char dePythonTurtleSpeed[] = "Drawing speed between 0 and 10";
constexpr static char ptPythonTurtleSpeed[] = "Drawing speed between 0 and 10";
constexpr static char enPythonTurtleWhite[] = "White color";
constexpr static char frPythonTurtleWhite[] = "Couleur blanche";
constexpr static char esPythonTurtleWhite[] = "White color";
constexpr static char dePythonTurtleWhite[] = "White color";
constexpr static char ptPythonTurtleWhite[] = "White color";
constexpr static char enPythonTurtleYellow[] = "Yellow color";
constexpr static char frPythonTurtleYellow[] = "Couleur jaune";
constexpr static char esPythonTurtleYellow[] = "Yellow color";
constexpr static char dePythonTurtleYellow[] = "Yellow color";
constexpr static char ptPythonTurtleYellow[] = "Yellow color";
constexpr static char enPythonUniform[] = "Floating point number in [a,b]";
constexpr static char frPythonUniform[] = "Nombre décimal dans [a,b]";
constexpr static char esPythonUniform[] = "Floating point number in [a,b]";
constexpr static char dePythonUniform[] = "Floating point number in [a,b]";
constexpr static char ptPythonUniform[] = "Floating point number in [a,b]";
constexpr static char enPythonVerticalBar[] = "Bitwise or";
constexpr static char frPythonVerticalBar[] = "Ou logique";
constexpr static char esPythonVerticalBar[] = "Bitwise or";
constexpr static char dePythonVerticalBar[] = "Bitweise oder";
constexpr static char ptPythonVerticalBar[] = "Bitwise or";
constexpr static char enQuadratic[] = "Quadratic";
constexpr static char frQuadratic[] = "Quadratique";
constexpr static char esQuadratic[] = "Cuadrática";
constexpr static char deQuadratic[] = "Quadratische";
constexpr static char ptQuadratic[] = "Quadrática";
constexpr static char enQuartic[] = "Quartic";
constexpr static char frQuartic[] = "Quartique";
constexpr static char esQuartic[] = "Cuártica";
constexpr static char deQuartic[] = "Biquadratische";
constexpr static char ptQuartic[] = "Quarto grau";
constexpr static char enQuotient[] = "Quotient division p by q";
constexpr static char frQuotient[] = "Quotient de la division de p par q";
constexpr static char esQuotient[] = "Cociente división p por q";
constexpr static char deQuotient[] = "Ganzzahlquotient";
constexpr static char ptQuotient[] = "Quociente";
constexpr static char enRad[] = "rad";
constexpr static char frRad[] = "rad";
constexpr static char esRad[] = "rad";
constexpr static char deRad[] = "rad";
constexpr static char ptRad[] = "rad";
constexpr static char enRadian[] = "Radians ";
constexpr static char frRadian[] = "Radians ";
constexpr static char esRadian[] = "Radianes ";
constexpr static char deRadian[] = "Bogenmaß ";
constexpr static char ptRadian[] = "Radianos ";
constexpr static char enRandomAndApproximation[] = "Random and approximation";
constexpr static char frRandomAndApproximation[] = "Aléatoire et approximation";
constexpr static char esRandomAndApproximation[] = "Aleatorio y aproximación";
constexpr static char deRandomAndApproximation[] = "Zufall und Näherung";
constexpr static char ptRandomAndApproximation[] = "Aleatório e aproximação";
constexpr static char enRandomFloat[] = "Floating point number in [0,1[";
constexpr static char frRandomFloat[] = "Nombre décimal dans [0,1[";
constexpr static char esRandomFloat[] = "Número decimal en [0,1[";
constexpr static char deRandomFloat[] = "Dezimalzahl in [0,1]";
constexpr static char ptRandomFloat[] = "Número decimal em [0,1[";
constexpr static char enRandomInteger[] = "Random integer in [a,b]";
constexpr static char frRandomInteger[] = "Entier aléatoire dans [a,b]";
constexpr static char esRandomInteger[] = "Entero aleatorio en [a,b]";
constexpr static char deRandomInteger[] = "Zufällige ganze Zahl in [a,b]";
constexpr static char ptRandomInteger[] = "Inteiro aleatório em [a,b]";
constexpr static char enRange[] = "Range";
constexpr static char frRange[] = "Etendue";
constexpr static char esRange[] = "Rango";
constexpr static char deRange[] = "Spannweite";
constexpr static char ptRange[] = "Amplitude";
constexpr static char enReal[] = "Real ";
constexpr static char frReal[] = "Réel ";
constexpr static char esReal[] = "Real ";
constexpr static char deReal[] = "Reel ";
constexpr static char ptReal[] = "Real ";
constexpr static char enRealPart[] = "Real part";
constexpr static char frRealPart[] = "Partie réelle";
constexpr static char esRealPart[] = "Parte real";
constexpr static char deRealPart[] = "Realteil";
constexpr static char ptRealPart[] = "Parte real";
constexpr static char enRectangleWidth[] = "Bin width";
constexpr static char frRectangleWidth[] = "Largeur des rectangles";
constexpr static char esRectangleWidth[] = "Ancho del rectangulo";
constexpr static char deRectangleWidth[] = "Breite der Rechtecke";
constexpr static char ptRectangleWidth[] = "Largura dos retângulos";
constexpr static char enReg[] = "reg";
constexpr static char frReg[] = "reg";
constexpr static char esReg[] = "reg";
constexpr static char deReg[] = "reg";
constexpr static char ptReg[] = "reg";
constexpr static char enRegression[] = "Regression";
constexpr static char frRegression[] = "Régression";
constexpr static char esRegression[] = "Regresión";
constexpr static char deRegression[] = "Regression";
constexpr static char ptRegression[] = "Regressão";
constexpr static char enRegressionApp[] = "Regression";
constexpr static char frRegressionApp[] = "Régressions";
constexpr static char esRegressionApp[] = "Regresión";
constexpr static char deRegressionApp[] = "Regression";
constexpr static char ptRegressionApp[] = "Regressão";
constexpr static char enRegressionAppCapital[] = "REGRESSION";
constexpr static char frRegressionAppCapital[] = "REGRESSIONS";
constexpr static char esRegressionAppCapital[] = "REGRESION";
constexpr static char deRegressionAppCapital[] = "REGRESSION";
constexpr static char ptRegressionAppCapital[] = "REGRESSAO";
constexpr static char enRegressionCurve[] = "Regression curve";
constexpr static char frRegressionCurve[] = "Courbe de régression";
constexpr static char esRegressionCurve[] = "Curva de regresión";
constexpr static char deRegressionCurve[] = "Regressionskurve";
constexpr static char ptRegressionCurve[] = "Curva de regressão";
constexpr static char enRemainder[] = "Remainder division p by q";
constexpr static char frRemainder[] = "Reste de la division de p par q";
constexpr static char esRemainder[] = "Resto división p por q";
constexpr static char deRemainder[] = "Rest";
constexpr static char ptRemainder[] = "Resto da divisão inteira";
constexpr static char enRename[] = "Rename";
constexpr static char frRename[] = "Renommer";
constexpr static char esRename[] = "Renombrar";
constexpr static char deRename[] = "Umbenennen";
constexpr static char ptRename[] = "Renomear";
constexpr static char enRepetitionNumber[] = "n: Number of trials";
constexpr static char frRepetitionNumber[] = "n : Nombre de répétitions";
constexpr static char esRepetitionNumber[] = "n : Número de ensayos ";
constexpr static char deRepetitionNumber[] = "n: Anzahl der Versuche";
constexpr static char ptRepetitionNumber[] = "n : Número de ensaios";
constexpr static char enRequireEquation[] = "The input must be an equation";
constexpr static char frRequireEquation[] = "L'entrée doit être une équation";
constexpr static char esRequireEquation[] = "La entrada debe ser una ecuación";
constexpr static char deRequireEquation[] = "Die Eingabe muss eine Gleichung sein";
constexpr static char ptRequireEquation[] = "A entrada deve ser uma equação";
constexpr static char enReservedName[] = "Reserved name";
constexpr static char frReservedName[] = "Nom réservé";
constexpr static char esReservedName[] = "Nombre reservado";
constexpr static char deReservedName[] = "Reserviertes Wort";
constexpr static char ptReservedName[] = "Nome reservado";
constexpr static char enResolveEquation[] = "Solve the equation";
constexpr static char frResolveEquation[] = "Résoudre l'équation";
constexpr static char esResolveEquation[] = "Resolver la ecuación";
constexpr static char deResolveEquation[] = "Lösen der Gleichung";
constexpr static char ptResolveEquation[] = "Resolver a equação";
constexpr static char enResolveSystem[] = "Solve the system";
constexpr static char frResolveSystem[] = "Résoudre le système";
constexpr static char esResolveSystem[] = "Resolver el sistema";
constexpr static char deResolveSystem[] = "Lösen des Gleichungssystems";
constexpr static char ptResolveSystem[] = "Resolver o sistema";
constexpr static char enRoundAbscissa[] = "Integer";
constexpr static char frRoundAbscissa[] = "Abscisses entières";
constexpr static char esRoundAbscissa[] = "Abscisas enteras";
constexpr static char deRoundAbscissa[] = "Ganzzahl";
constexpr static char ptRoundAbscissa[] = "Inteiro";
constexpr static char enRounding[] = "Rounding to n digits";
constexpr static char frRounding[] = "Arrondi à n décimales";
constexpr static char esRounding[] = "Redondeo n digitos";
constexpr static char deRounding[] = "Runden";
constexpr static char ptRounding[] = "Arredondar";
constexpr static char enRpnApp[] = "RPN";
constexpr static char frRpnApp[] = "RPN";
constexpr static char esRpnApp[] = "RPN";
constexpr static char deRpnApp[] = "RPN";
constexpr static char ptRpnApp[] = "RPN";
constexpr static char enRpnAppCapital[] = "RPN";
constexpr static char frRpnAppCapital[] = "RPN";
constexpr static char esRpnAppCapital[] = "RPN";
constexpr static char deRpnAppCapital[] = "RPN";
constexpr static char ptRpnAppCapital[] = "RPN";
constexpr static char enSampleStandardDeviationS[] = "Sample std deviation s";
constexpr static char frSampleStandardDeviationS[] = "Ecart type échantillon";
constexpr static char esSampleStandardDeviationS[] = "Desviación típica s";
constexpr static char deSampleStandardDeviationS[] = "Standardabweichung s";
constexpr static char ptSampleStandardDeviationS[] = "Desvio padrão amostral s";
constexpr static char enSci[] = "sci";
constexpr static char frSci[] = "sci";
constexpr static char esSci[] = "cie";
constexpr static char deSci[] = "wiss";
constexpr static char ptSci[] = "cie";
constexpr static char enScientific[] = "Scientific ";
constexpr static char frScientific[] = "Scientifique ";
constexpr static char esScientific[] = "Científico ";
constexpr static char deScientific[] = "Wissenschaftlich ";
constexpr static char ptScientific[] = "Científico ";
constexpr static char enScriptOptions[] = "Script options";
constexpr static char frScriptOptions[] = "Options de script";
constexpr static char esScriptOptions[] = "Opciones del archivo";
constexpr static char deScriptOptions[] = "Skriptoptionen";
constexpr static char ptScriptOptions[] = "Opções de script";
constexpr static char enSearchInverval[] = "Search interval";
constexpr static char frSearchInverval[] = "Intervalle de recherche";
constexpr static char esSearchInverval[] = "Intervalo de búsqueda";
constexpr static char deSearchInverval[] = "Lösungssuche Intervall";
constexpr static char ptSearchInverval[] = "Intervalo de busca";
constexpr static char enSelectFirstTerm[] = "Select First Term ";
constexpr static char frSelectFirstTerm[] = "Sélectionner le premier terme ";
constexpr static char esSelectFirstTerm[] = "Seleccionar el primer término ";
constexpr static char deSelectFirstTerm[] = "Erster Term ";
constexpr static char ptSelectFirstTerm[] = "Selecionar primeiro termo ";
constexpr static char enSelectLastTerm[] = "Select last term ";
constexpr static char frSelectLastTerm[] = "Sélectionner le dernier terme ";
constexpr static char esSelectLastTerm[] = "Seleccionar el último término ";
constexpr static char deSelectLastTerm[] = "Letzter Term ";
constexpr static char ptSelectLastTerm[] = "Selecionar último termo ";
constexpr static char enSelectLowerBound[] = "Select lower bound";
constexpr static char frSelectLowerBound[] = "Sélectionner la borne inférieure";
constexpr static char esSelectLowerBound[] = "Seleccionar el límite inferior";
constexpr static char deSelectLowerBound[] = "Untere Integrationsgrenze";
constexpr static char ptSelectLowerBound[] = "Selecionar limite superior";
constexpr static char enSelectUpperBound[] = "Select upper bound";
constexpr static char frSelectUpperBound[] = "Sélectionner la borne supérieure";
constexpr static char esSelectUpperBound[] = "Seleccionar el límite superior";
constexpr static char deSelectUpperBound[] = "Obere Integrationsgrenze";
constexpr static char ptSelectUpperBound[] = "Selecionar limite inferior";
constexpr static char enSequenceApp[] = "Sequences";
constexpr static char frSequenceApp[] = "Suites";
constexpr static char esSequenceApp[] = "Sucesión";
constexpr static char deSequenceApp[] = "Folge";
constexpr static char ptSequenceApp[] = "Sequência";
constexpr static char enSequenceAppCapital[] = "SEQUENCES";
constexpr static char frSequenceAppCapital[] = "SUITES";
constexpr static char esSequenceAppCapital[] = "SUCESION";
constexpr static char deSequenceAppCapital[] = "FOLGE";
constexpr static char ptSequenceAppCapital[] = "SEQUENCIA";
constexpr static char enSequenceColor[] = "Sequence color";
constexpr static char frSequenceColor[] = "Couleur de la suite";
constexpr static char esSequenceColor[] = "Color de la sucesión";
constexpr static char deSequenceColor[] = "Farbe der Folge";
constexpr static char ptSequenceColor[] = "Cor da sequência";
constexpr static char enSequenceOptions[] = "Sequence options";
constexpr static char frSequenceOptions[] = "Options de la suite";
constexpr static char esSequenceOptions[] = "Opciones de la sucesión";
constexpr static char deSequenceOptions[] = "Optionen der Folge";
constexpr static char ptSequenceOptions[] = "Opções de sequência";
constexpr static char enSequenceTab[] = "Sequences";
constexpr static char frSequenceTab[] = "Suites";
constexpr static char esSequenceTab[] = "Sucesiones";
constexpr static char deSequenceTab[] = "Folgen";
constexpr static char ptSequenceTab[] = "Sequências";
constexpr static char enSequenceType[] = "Sequence type";
constexpr static char frSequenceType[] = "Type de suite";
constexpr static char esSequenceType[] = "Tipo de sucesión";
constexpr static char deSequenceType[] = "Bildungsgesetz der Folge";
constexpr static char ptSequenceType[] = "Tipo de sequência";
constexpr static char enSerialNumber[] = "Serial number";
constexpr static char frSerialNumber[] = "Numéro série";
constexpr static char esSerialNumber[] = "Número serie";
constexpr static char deSerialNumber[] = "Seriennummer";
constexpr static char ptSerialNumber[] = "Número serie";
constexpr static char enSettingsApp[] = "Settings";
constexpr static char frSettingsApp[] = "Paramètres";
constexpr static char esSettingsApp[] = "Configuración";
constexpr static char deSettingsApp[] = "Einstellungen";
constexpr static char ptSettingsApp[] = "Configuração";
constexpr static char enSettingsAppCapital[] = "SETTINGS";
constexpr static char frSettingsAppCapital[] = "PARAMETRES";
constexpr static char esSettingsAppCapital[] = "CONFIGURACION";
constexpr static char deSettingsAppCapital[] = "EINSTELLUNGEN";
constexpr static char ptSettingsAppCapital[] = "CONFIGURACAO";
constexpr static char enSignificantFigures[] = "Significant figures ";
constexpr static char frSignificantFigures[] = "Chiffres significatifs ";
constexpr static char esSignificantFigures[] = "Cifras significativas ";
constexpr static char deSignificantFigures[] = "Signifikante Stellen ";
constexpr static char ptSignificantFigures[] = "Algarismo significativo ";
constexpr static char enSingleRecurrence[] = "Recursive first order";
constexpr static char frSingleRecurrence[] = "Récurrente d'ordre 1";
constexpr static char esSingleRecurrence[] = "Recurrencia de orden uno";
constexpr static char deSingleRecurrence[] = "Rekursion 1. Ordnung";
constexpr static char ptSingleRecurrence[] = "Recorrência de Primeira Ordem";
constexpr static char enSize[] = " Size";
constexpr static char frSize[] = " Effectif";
constexpr static char esSize[] = " Frecuencia";
constexpr static char deSize[] = " Häufigkeit";
constexpr static char ptSize[] = " Frequência";
constexpr static char enSizes1[] = "Sizes N1";
constexpr static char frSizes1[] = "Effectifs N1";
constexpr static char esSizes1[] = "Frecuencias N1";
constexpr static char deSizes1[] = "Häufigkeiten N1";
constexpr static char ptSizes1[] = "Frequências N1";
constexpr static char enSizes2[] = "Sizes N2";
constexpr static char frSizes2[] = "Effectifs N2";
constexpr static char esSizes2[] = "Frecuencias N2";
constexpr static char deSizes2[] = "Häufigkeiten N2";
constexpr static char ptSizes2[] = "Frequências N2";
constexpr static char enSizes3[] = "Sizes N3";
constexpr static char frSizes3[] = "Effectifs N3";
constexpr static char esSizes3[] = "Frecuencias N3";
constexpr static char deSizes3[] = "Häufigkeiten N3";
constexpr static char ptSizes3[] = "Frequências N3";
constexpr static char enSkip[] = "Skip";
constexpr static char frSkip[] = "Passer";
constexpr static char esSkip[] = "Saltar";
constexpr static char deSkip[] = "Uberspringen";
constexpr static char ptSkip[] = "Pular";
constexpr static char enSoftwareVersion[] = "Epsilon version";
constexpr static char frSoftwareVersion[] = "Version d'Epsilon";
constexpr static char esSoftwareVersion[] = "Versión de Epsilon";
constexpr static char deSoftwareVersion[] = "Epsilon version";
constexpr static char ptSoftwareVersion[] = "Versão do Epsilon";
constexpr static char enSolution[] = "Solution";
constexpr static char frSolution[] = "Solution";
constexpr static char esSolution[] = "Solución";
constexpr static char deSolution[] = "Lösung";
constexpr static char ptSolution[] = "Solução";
constexpr static char enSolverApp[] = "Equations";
constexpr static char frSolverApp[] = "Equations";
constexpr static char esSolverApp[] = "Ecuaciones";
constexpr static char deSolverApp[] = "Gleichungen";
constexpr static char ptSolverApp[] = "Equações";
constexpr static char enSolverAppCapital[] = "EQUATIONS";
constexpr static char frSolverAppCapital[] = "EQUATIONS";
constexpr static char esSolverAppCapital[] = "ECUACIONES";
constexpr static char deSolverAppCapital[] = "GLEICHUNGEN";
constexpr static char ptSolverAppCapital[] = "EQUACOES";
constexpr static char enSort[] = "Sort ascending ";
constexpr static char frSort[] = "Tri croissant";
constexpr static char esSort[] = "Clasificación ascendente";
constexpr static char deSort[] = "Sortieren aufsteigend";
constexpr static char ptSort[] = "Ordem crescente";
constexpr static char enSpeedOfLightTag[] = "Speed of light (m·s^-1)";
constexpr static char frSpeedOfLightTag[] = "Vitesse de la lumière (m·s^-1)";
constexpr static char esSpeedOfLightTag[] = "Velocidad de la luz (m·s^-1)";
constexpr static char deSpeedOfLightTag[] = "Lichtgeschwindigkeit (m·s^-1)";
constexpr static char ptSpeedOfLightTag[] = "Velocidade da luz (m·s^-1)";
constexpr static char enSquareSum[] = "Sum of squares";
constexpr static char frSquareSum[] = "Somme des carrés";
constexpr static char esSquareSum[] = "Suma cuadrados";
constexpr static char deSquareSum[] = "Quadratsumme";
constexpr static char ptSquareSum[] = "Soma dos quadrados";
constexpr static char enStandardDeviation[] = "Standard deviation";
constexpr static char frStandardDeviation[] = "Ecart type";
constexpr static char esStandardDeviation[] = "Desviación típica";
constexpr static char deStandardDeviation[] = "Standardabweichung";
constexpr static char ptStandardDeviation[] = "Desvio padrão";
constexpr static char enStandardDeviationSigma[] = "Standard deviation σ";
constexpr static char frStandardDeviationSigma[] = "Ecart type";
constexpr static char esStandardDeviationSigma[] = "Desviación típica σ";
constexpr static char deStandardDeviationSigma[] = "Standardabweichung σ";
constexpr static char ptStandardDeviationSigma[] = "Desvio padrão σ";
constexpr static char enStatTab[] = "Stats";
constexpr static char frStatTab[] = "Stats";
constexpr static char esStatTab[] = "Medidas";
constexpr static char deStatTab[] = "Stats";
constexpr static char ptStatTab[] = "Estat";
constexpr static char enStatsApp[] = "Statistics";
constexpr static char frStatsApp[] = "Statistiques";
constexpr static char esStatsApp[] = "Estadística";
constexpr static char deStatsApp[] = "Statistik";
constexpr static char ptStatsApp[] = "Estatística";
constexpr static char enStatsAppCapital[] = "STATISTICS";
constexpr static char frStatsAppCapital[] = "STATISTIQUES";
constexpr static char esStatsAppCapital[] = "ESTADISTICA";
constexpr static char deStatsAppCapital[] = "STATISTIK";
constexpr static char ptStatsAppCapital[] = "ESTATISTICA";
constexpr static char enStep[] = "Step";
constexpr static char frStep[] = "Pas";
constexpr static char esStep[] = "Incremento";
constexpr static char deStep[] = "Schrittwert";
constexpr static char ptStep[] = "Passo";
constexpr static char enStorageMemoryFull1[] = "The memory is full.";
constexpr static char frStorageMemoryFull1[] = "La mémoire est pleine.";
constexpr static char esStorageMemoryFull1[] = "La memoria está llena.";
constexpr static char deStorageMemoryFull1[] = "Der Speicher ist voll. Löschen Sie";
constexpr static char ptStorageMemoryFull1[] = "A memoria esta cheia.";
constexpr static char enStorageMemoryFull2[] = "Erase data and try again.";
constexpr static char frStorageMemoryFull2[] = "Effacez des données et réessayez.";
constexpr static char esStorageMemoryFull2[] = "Borre datos e intente de nuevo.";
constexpr static char deStorageMemoryFull2[] = "von Daten und versuchen Sie es erneut.";
constexpr static char ptStorageMemoryFull2[] = "Apage dados e tente novamente.";
constexpr static char enStoreExpressionNotAllowed[] = "'store' is not allowed";
constexpr static char frStoreExpressionNotAllowed[] = "'store' n'est pas autorisé";
constexpr static char esStoreExpressionNotAllowed[] = "'store' no está permitido";
constexpr static char deStoreExpressionNotAllowed[] = "'store' ist verboten";
constexpr static char ptStoreExpressionNotAllowed[] = "'store' não está permitido";
constexpr static char enStudent[] = "Student";
constexpr static char frStudent[] = "Student";
constexpr static char esStudent[] = "Student";
constexpr static char deStudent[] = "Student";
constexpr static char ptStudent[] = "Student";
constexpr static char enStudentDistribution[] = "Student's distribution";
constexpr static char frStudentDistribution[] = "Loi de Student";
constexpr static char esStudentDistribution[] = "Distribución de Student";
constexpr static char deStudentDistribution[] = "Student-Verteilung";
constexpr static char ptStudentDistribution[] = "Distribuição de Student";
constexpr static char enSuccessProbability[] = "p: Success probability";
constexpr static char frSuccessProbability[] = "p : Probabilité de succès";
constexpr static char esSuccessProbability[] = "p : Probabilidad de éxito ";
constexpr static char deSuccessProbability[] = "p: Erfolgswahrscheinlichkeit";
constexpr static char ptSuccessProbability[] = "p : Probabilidade de sucesso";
constexpr static char enSum[] = "Sum";
constexpr static char frSum[] = "Somme";
constexpr static char esSum[] = "Suma";
constexpr static char deSum[] = "Summe";
constexpr static char ptSum[] = "Somatório";
constexpr static char enSym[] = "sym";
constexpr static char frSym[] = "sym";
constexpr static char esSym[] = "sim";
constexpr static char deSym[] = "sym";
constexpr static char ptSym[] = "sim";
constexpr static char enSymbolMultiplication[] = "Multiply";
constexpr static char frSymbolMultiplication[] = "Multiplication";
constexpr static char esSymbolMultiplication[] = "Multiplicación";
constexpr static char deSymbolMultiplication[] = "Multiplikation";
constexpr static char ptSymbolMultiplication[] = "Multiplicação";
constexpr static char enSymbolMultiplicationAutoSymbol[] = "Auto ";
constexpr static char frSymbolMultiplicationAutoSymbol[] = "Automatique ";
constexpr static char esSymbolMultiplicationAutoSymbol[] = "Auto ";
constexpr static char deSymbolMultiplicationAutoSymbol[] = "automatisch ";
constexpr static char ptSymbolMultiplicationAutoSymbol[] = "automático ";
constexpr static char enSymbolMultiplicationCross[] = "Cross ";
constexpr static char frSymbolMultiplicationCross[] = "Croix ";
constexpr static char esSymbolMultiplicationCross[] = "Contrariar ";
constexpr static char deSymbolMultiplicationCross[] = "Kreuz ";
constexpr static char ptSymbolMultiplicationCross[] = "crómio ";
constexpr static char enSymbolMultiplicationMiddleDot[] = "Dot ";
constexpr static char frSymbolMultiplicationMiddleDot[] = "Point ";
constexpr static char esSymbolMultiplicationMiddleDot[] = "Punto ";
constexpr static char deSymbolMultiplicationMiddleDot[] = "Mittelpunkt ";
constexpr static char ptSymbolMultiplicationMiddleDot[] = "ponto médio ";
constexpr static char enSymbolMultiplicationStar[] = "Star ";
constexpr static char frSymbolMultiplicationStar[] = "Etoile ";
constexpr static char esSymbolMultiplicationStar[] = "Estrella ";
constexpr static char deSymbolMultiplicationStar[] = "Stern ";
constexpr static char ptSymbolMultiplicationStar[] = "estrela ";
constexpr static char enSyntaxError[] = "Syntax error";
constexpr static char frSyntaxError[] = "Attention à la syntaxe";
constexpr static char esSyntaxError[] = "Error sintáctico";
constexpr static char deSyntaxError[] = "Syntaxfehler";
constexpr static char ptSyntaxError[] = "Erro de sintaxe";
constexpr static char enTEnd[] = "T end";
constexpr static char frTEnd[] = "T fin";
constexpr static char esTEnd[] = "T fin";
constexpr static char deTEnd[] = "T Endwert";
constexpr static char ptTEnd[] = "T fim";
constexpr static char enTStart[] = "T start";
constexpr static char frTStart[] = "T début";
constexpr static char esTStart[] = "T inicio";
constexpr static char deTStart[] = "T Startwert";
constexpr static char ptTStart[] = "T inicio";
constexpr static char enTangent[] = "Tangent";
constexpr static char frTangent[] = "Tangente";
constexpr static char esTangent[] = "Tangente";
constexpr static char deTangent[] = "Tangente";
constexpr static char ptTangent[] = "Tangente";
constexpr static char enTermSum[] = "Sum of terms";
constexpr static char frTermSum[] = "Somme des termes";
constexpr static char esTermSum[] = "Suma de términos";
constexpr static char deTermSum[] = "Summe der Terme";
constexpr static char ptTermSum[] = "Soma dos termos";
constexpr static char enThermodynamics[] = "Thermodynamics";
constexpr static char frThermodynamics[] = "Thermodynamique";
constexpr static char esThermodynamics[] = "Termodinámica";
constexpr static char deThermodynamics[] = "Thermodynamik";
constexpr static char ptThermodynamics[] = "Termodinâmica";
constexpr static char enThetaEnd[] = "θ end";
constexpr static char frThetaEnd[] = "θ fin";
constexpr static char esThetaEnd[] = "θ fin";
constexpr static char deThetaEnd[] = "θ Endwert";
constexpr static char ptThetaEnd[] = "θ fim";
constexpr static char enThetaStart[] = "θ start";
constexpr static char frThetaStart[] = "θ début";
constexpr static char esThetaStart[] = "θ inicio";
constexpr static char deThetaStart[] = "θ Startwert";
constexpr static char ptThetaStart[] = "θ inicio";
constexpr static char enThirdQuartile[] = "Third quartile";
constexpr static char frThirdQuartile[] = "Troisième quartile";
constexpr static char esThirdQuartile[] = "Tercer cuartil";
constexpr static char deThirdQuartile[] = "Oberes Quartil";
constexpr static char ptThirdQuartile[] = "Quartil superior";
constexpr static char enToZoom[] = "Zoom: ";
constexpr static char frToZoom[] = "Zoomer : ";
constexpr static char esToZoom[] = "Zoom : ";
constexpr static char deToZoom[] = "Zoom: ";
constexpr static char ptToZoom[] = "Zoom : ";
constexpr static char enTooManyVariables[] = "There are too many unknowns";
constexpr static char frTooManyVariables[] = "Le nombre d'inconnues est trop grand";
constexpr static char esTooManyVariables[] = "Hay demasiadas incógnitas";
constexpr static char deTooManyVariables[] = "Es gibt zu viele Unbekannte";
constexpr static char ptTooManyVariables[] = "Existem muitas incógnitas";
constexpr static char enToolbox[] = "Toolbox";
constexpr static char frToolbox[] = "Boîte à outils";
constexpr static char esToolbox[] = "Caja de herramientas";
constexpr static char deToolbox[] = "Werkzeugkasten";
constexpr static char ptToolbox[] = "Caixa de ferramentas";
constexpr static char enTotalSize[] = "Total size";
constexpr static char frTotalSize[] = "Effectif total";
constexpr static char esTotalSize[] = "Población";
constexpr static char deTotalSize[] = "Anzahl der Elemente";
constexpr static char ptTotalSize[] = "Número de itens";
constexpr static char enTrace[] = "Trace";
constexpr static char frTrace[] = "Trace";
constexpr static char esTrace[] = "Traza";
constexpr static char deTrace[] = "Spur";
constexpr static char ptTrace[] = "Traço";
constexpr static char enTranspose[] = "Transpose";
constexpr static char frTranspose[] = "Transposée";
constexpr static char esTranspose[] = "Transpuesta";
constexpr static char deTranspose[] = "Transponierte";
constexpr static char ptTranspose[] = "Matriz transposta";
constexpr static char enTrigonometric[] = "Trigonometrical";
constexpr static char frTrigonometric[] = "Trigonométrique";
constexpr static char esTrigonometric[] = "Trigonométrico";
constexpr static char deTrigonometric[] = "Trigonometrisch";
constexpr static char ptTrigonometric[] = "Trigonométrico";
constexpr static char enTrigonometrical[] = "Trigonometric";
constexpr static char frTrigonometrical[] = "Trigonométrique";
constexpr static char esTrigonometrical[] = "Trigonométrica";
constexpr static char deTrigonometrical[] = "Trigonometrische";
constexpr static char ptTrigonometrical[] = "Trigonométrica";
constexpr static char enUSBConnected[] = "THE CALCULATOR IS CONNECTED";
constexpr static char frUSBConnected[] = "LA CALCULATRICE EST CONNECTEE";
constexpr static char esUSBConnected[] = "CALCULADORA CONECTADA";
constexpr static char deUSBConnected[] = "DER RECHNER IST ANGESCHLOSSEN";
constexpr static char ptUSBConnected[] = "A CALCULADORA ESTA CONECTADA";
constexpr static char enUndefinedEquation[] = "Undefined equation";
constexpr static char frUndefinedEquation[] = "Une équation est indéfinie";
constexpr static char esUndefinedEquation[] = "Una ecuación es indefinida";
constexpr static char deUndefinedEquation[] = "Nicht definierte Gleichung";
constexpr static char ptUndefinedEquation[] = "Uma equação é indefinida";
constexpr static char enUndefinedValue[] = "Undefined value";
constexpr static char frUndefinedValue[] = "Valeur non définie";
constexpr static char esUndefinedValue[] = "Valor indefinido";
constexpr static char deUndefinedValue[] = "Nicht definierter Wert";
constexpr static char ptUndefinedValue[] = "Valor indefinido";
constexpr static char enUniformDistribution[] = "Uniform distribution";
constexpr static char frUniformDistribution[] = "Loi uniforme";
constexpr static char esUniformDistribution[] = "Distribución uniforme";
constexpr static char deUniformDistribution[] = "Uniformverteilung";
constexpr static char ptUniformDistribution[] = "Distribuição uniforme";
constexpr static char enUniforme[] = "Uniform";
constexpr static char frUniforme[] = "Uniforme";
constexpr static char esUniforme[] = "Uniforme";
constexpr static char deUniforme[] = "Uniform";
constexpr static char ptUniforme[] = "Uniforme";
constexpr static char enUnitOfMesurement[] = "Unit of mesurement";
constexpr static char frUnitOfMesurement[] = "Unités de mesure";
constexpr static char esUnitOfMesurement[] = "Unidad de medida";
constexpr static char deUnitOfMesurement[] = "Unit of mesurement";
constexpr static char ptUnitOfMesurement[] = "Unidade de medição";
constexpr static char enUnrealEquation[] = "Unreal equation";
constexpr static char frUnrealEquation[] = "Une équation n'est pas réelle";
constexpr static char esUnrealEquation[] = "Una ecuación no es real";
constexpr static char deUnrealEquation[] = "Nicht reelle Gleichung";
constexpr static char ptUnrealEquation[] = "Uma equação não é real";
constexpr static char enUpdateAvailable[] = "UPDATE AVAILABLE";
constexpr static char frUpdateAvailable[] = "MISE A JOUR DISPONIBLE";
constexpr static char esUpdateAvailable[] = "ACTUALIZACION DISPONIBLE";
constexpr static char deUpdateAvailable[] = "UPDATE VERFUGBAR";
constexpr static char ptUpdateAvailable[] = "ATUALIZACAO DISPONIVEL";
constexpr static char enUpdateMessage1[] = "There are important upgrades";
constexpr static char frUpdateMessage1[] = "Des améliorations importantes existent";
constexpr static char esUpdateMessage1[] = "Hay mejoras importantes";
constexpr static char deUpdateMessage1[] = "Wichtige Verbesserungen für Ihren";
constexpr static char ptUpdateMessage1[] = "Existem melhorias significativas";
constexpr static char enUpdateMessage2[] = "for your calculator.";
constexpr static char frUpdateMessage2[] = "pour votre calculatrice.";
constexpr static char esUpdateMessage2[] = "para su calculadora.";
constexpr static char deUpdateMessage2[] = "Rechner stehen zur Verfügung.";
constexpr static char ptUpdateMessage2[] = "para a sua calculadora.";
constexpr static char enUpdateMessage3[] = "Browse our page from your computer";
constexpr static char frUpdateMessage3[] = "Connectez-vous depuis votre ordinateur";
constexpr static char esUpdateMessage3[] = "Visite nuestra página desde su ordenador";
constexpr static char deUpdateMessage3[] = "Verbinden Sie sich mit Ihrem Computer auf";
constexpr static char ptUpdateMessage3[] = "Navegue na nossa página do seu computador";
constexpr static char enUpdateMessage4[] = "www.numworks.com/update";
constexpr static char frUpdateMessage4[] = "www.numworks.com/update";
constexpr static char esUpdateMessage4[] = "www.numworks.com/update";
constexpr static char deUpdateMessage4[] = "www.numworks.com/update.";
constexpr static char ptUpdateMessage4[] = "www.numworks.com/update";
constexpr static char enUpdatePopUp[] = "Update pop-up";
constexpr static char frUpdatePopUp[] = "Rappel mise à jour";
constexpr static char esUpdatePopUp[] = "Pop-up de actualización";
constexpr static char deUpdatePopUp[] = "Erinnerung: Update";
constexpr static char ptUpdatePopUp[] = "Alertas de atualização";
constexpr static char enUseEquationModel[] = "Use an equation template";
constexpr static char frUseEquationModel[] = "Utiliser un modèle d'équation";
constexpr static char esUseEquationModel[] = "Usar un modelo de ecuación";
constexpr static char deUseEquationModel[] = "Verwenden Sie ein Gleichungsmodell";
constexpr static char ptUseEquationModel[] = "Usar um modelo de equação";
constexpr static char enUsername[] = "Name";
constexpr static char frUsername[] = "Nom";
constexpr static char esUsername[] = "Apellido";
constexpr static char deUsername[] = "Name";
constexpr static char ptUsername[] = "Nome";
constexpr static char enVacuum_permeabilityTag[] = "Vacuum permeability (T·m·A^-1)";
constexpr static char frVacuum_permeabilityTag[] = "Perméabilité au vide (T·m·A^-1)";
constexpr static char esVacuum_permeabilityTag[] = "Permeabilidad al vacío (T·m·A^-1)";
constexpr static char deVacuum_permeabilityTag[] = "Vakuumdurchlässigkeit (T·m·A^-1)";
constexpr static char ptVacuum_permeabilityTag[] = "Permeabilidade ao vácuo (T·m·A^-1)";
constexpr static char enVacuum_permittivityTag[] = "Vacuum permittivity (F·m^-1)";
constexpr static char frVacuum_permittivityTag[] = "Permittivité au vide (F·m^-1)";
constexpr static char esVacuum_permittivityTag[] = "Permisividad de vacío (F·m^-1)";
constexpr static char deVacuum_permittivityTag[] = "Vakuum-Durchlässigkeit (F·m^-1)";
constexpr static char ptVacuum_permittivityTag[] = "Permissividade a vácuo (F·m^-1)";
constexpr static char enValueNotReachedByFunction[] = "Value not reached by function";
constexpr static char frValueNotReachedByFunction[] = "Valeur non atteinte par la fonction";
constexpr static char esValueNotReachedByFunction[] = "No se alcanza este valor";
constexpr static char deValueNotReachedByFunction[] = "Der Wert wird von der Funktion nicht erreicht";
constexpr static char ptValueNotReachedByFunction[] = "O valor não é alcançado pela função";
constexpr static char enValueNotReachedByRegression[] = "Value not reached in this window";
constexpr static char frValueNotReachedByRegression[] = "Valeur non atteinte dans cette fenêtre";
constexpr static char esValueNotReachedByRegression[] = "Valor no alcanzado en esta ventana";
constexpr static char deValueNotReachedByRegression[] = "Wert in diesem Fenster nicht erreicht";
constexpr static char ptValueNotReachedByRegression[] = "Valor não alcançado nesta janela";
constexpr static char enValueNotReachedBySequence[] = "Value not reached by sequence";
constexpr static char frValueNotReachedBySequence[] = "Valeur non atteinte par la suite";
constexpr static char esValueNotReachedBySequence[] = "No se alcanza este valor";
constexpr static char deValueNotReachedBySequence[] = "Der Wert wird von der Folge nicht erreicht";
constexpr static char ptValueNotReachedBySequence[] = "O valor não é alcançado pela sequência";
constexpr static char enValues1[] = "Values V1";
constexpr static char frValues1[] = "Valeurs V1";
constexpr static char esValues1[] = "Valores V1";
constexpr static char deValues1[] = "Werte V1";
constexpr static char ptValues1[] = "Valores V1";
constexpr static char enValues2[] = "Values V2";
constexpr static char frValues2[] = "Valeurs V2";
constexpr static char esValues2[] = "Valores V2";
constexpr static char deValues2[] = "Werte V2";
constexpr static char ptValues2[] = "Valores V2";
constexpr static char enValues3[] = "Values V3";
constexpr static char frValues3[] = "Valeurs V3";
constexpr static char esValues3[] = "Valores V3";
constexpr static char deValues3[] = "Werte V3";
constexpr static char ptValues3[] = "Valores V3";
constexpr static char enValuesTab[] = "Table";
constexpr static char frValuesTab[] = "Tableau";
constexpr static char esValuesTab[] = "Tabla";
constexpr static char deValuesTab[] = "Tabelle";
constexpr static char ptValuesTab[] = "Tabela";
constexpr static char enVariables[] = "Variables";
constexpr static char frVariables[] = "Variables";
constexpr static char esVariables[] = "Variables";
constexpr static char deVariables[] = "Variablen";
constexpr static char ptVariables[] = "Variáveis";
constexpr static char enWarning[] = "Warning";
constexpr static char frWarning[] = "Attention";
constexpr static char esWarning[] = "Cuidado";
constexpr static char deWarning[] = "Achtung";
constexpr static char ptWarning[] = "Atenção";
constexpr static char enXEnd[] = "X end";
constexpr static char frXEnd[] = "X fin";
constexpr static char esXEnd[] = "X fin";
constexpr static char deXEnd[] = "X Endwert";
constexpr static char ptXEnd[] = "X fim";
constexpr static char enXPrediction[] = "Prediction given X";
constexpr static char frXPrediction[] = "Prédiction sachant X";
constexpr static char esXPrediction[] = "Predicción dado X";
constexpr static char deXPrediction[] = "Berechne Y";
constexpr static char ptXPrediction[] = "Predição dado X";
constexpr static char enXStart[] = "X start";
constexpr static char frXStart[] = "X début";
constexpr static char esXStart[] = "X inicio";
constexpr static char deXStart[] = "X Startwert";
constexpr static char ptXStart[] = "X inicio";
constexpr static char enYPrediction[] = "Prediction given Y";
constexpr static char frYPrediction[] = "Prédiction sachant Y";
constexpr static char esYPrediction[] = "Predicción dado Y";
constexpr static char deYPrediction[] = "Berechne X";
constexpr static char ptYPrediction[] = "Predição dado Y";
constexpr static char enYearLightTag[] = "One year light (km)";
constexpr static char frYearLightTag[] = "Année lumière (km)";
constexpr static char esYearLightTag[] = "Un año de luz (km)";
constexpr static char deYearLightTag[] = "Ein Jahr Licht (km)";
constexpr static char ptYearLightTag[] = "Luz de um ano (km)";
constexpr static char enZeros[] = "Zeros";
constexpr static char frZeros[] = "Zéros";
constexpr static char esZeros[] = "Raíces";
constexpr static char deZeros[] = "Nullstellen";
constexpr static char ptZeros[] = "Raízes";
constexpr static char enZoom[] = "Zoom";
constexpr static char frZoom[] = "Zoom";
constexpr static char esZoom[] = "Zoom";
constexpr static char deZoom[] = "Zoom";
constexpr static char ptZoom[] = "Zoom";

constexpr static const char * messages[918][5] = {
  {enAbout, frAbout, esAbout, deAbout, ptAbout, },
  {enAbsoluteValue, frAbsoluteValue, esAbsoluteValue, deAbsoluteValue, ptAbsoluteValue, },
  {enAccessibility, frAccessibility, esAccessibility, deAccessibility, ptAccessibility, },
  {enAccessibilityGamma, frAccessibilityGamma, esAccessibilityGamma, deAccessibilityGamma, ptAccessibilityGamma, },
  {enAccessibilityGammaBlue, frAccessibilityGammaBlue, esAccessibilityGammaBlue, deAccessibilityGammaBlue, ptAccessibilityGammaBlue, },
  {enAccessibilityGammaGreen, frAccessibilityGammaGreen, esAccessibilityGammaGreen, deAccessibilityGammaGreen, ptAccessibilityGammaGreen, },
  {enAccessibilityGammaRed, frAccessibilityGammaRed, esAccessibilityGammaRed, deAccessibilityGammaRed, ptAccessibilityGammaRed, },
  {enAccessibilityInvertColors, frAccessibilityInvertColors, esAccessibilityInvertColors, deAccessibilityInvertColors, ptAccessibilityInvertColors, },
  {enAccessibilityMagnify, frAccessibilityMagnify, esAccessibilityMagnify, deAccessibilityMagnify, ptAccessibilityMagnify, },
  {enActivateDeactivate, frActivateDeactivate, esActivateDeactivate, deActivateDeactivate, ptActivateDeactivate, },
  {enActivateExamMode, frActivateExamMode, esActivateExamMode, deActivateExamMode, ptActivateExamMode, },
  {enActiveDutchExamModeMessage1, frActiveDutchExamModeMessage1, esActiveDutchExamModeMessage1, deActiveDutchExamModeMessage1, ptActiveDutchExamModeMessage1, },
  {enActiveDutchExamModeMessage2, frActiveDutchExamModeMessage2, esActiveDutchExamModeMessage2, deActiveDutchExamModeMessage2, ptActiveDutchExamModeMessage2, },
  {enActiveDutchExamModeMessage3, frActiveDutchExamModeMessage3, esActiveDutchExamModeMessage3, deActiveDutchExamModeMessage3, ptActiveDutchExamModeMessage3, },
  {enActiveExamModeMessage1, frActiveExamModeMessage1, esActiveExamModeMessage1, deActiveExamModeMessage1, ptActiveExamModeMessage1, },
  {enActiveExamModeMessage2, frActiveExamModeMessage2, esActiveExamModeMessage2, deActiveExamModeMessage2, ptActiveExamModeMessage2, },
  {enActiveExamModeMessage3, frActiveExamModeMessage3, esActiveExamModeMessage3, deActiveExamModeMessage3, ptActiveExamModeMessage3, },
  {enAddEquation, frAddEquation, esAddEquation, deAddEquation, ptAddEquation, },
  {enAddFunction, frAddFunction, esAddFunction, deAddFunction, ptAddFunction, },
  {enAddScript, frAddScript, esAddScript, deAddScript, ptAddScript, },
  {enAddSequence, frAddSequence, esAddSequence, deAddSequence, ptAddSequence, },
  {enAgument, frAgument, esAgument, deAgument, ptAgument, },
  {enAllowedCharactersAZaz09, frAllowedCharactersAZaz09, esAllowedCharactersAZaz09, deAllowedCharactersAZaz09, ptAllowedCharactersAZaz09, },
  {enAllowedCharactersaz09, frAllowedCharactersaz09, esAllowedCharactersaz09, deAllowedCharactersaz09, ptAllowedCharactersaz09, },
  {enAlphaElementAc, frAlphaElementAc, esAlphaElementAc, deAlphaElementAc, ptAlphaElementAc, },
  {enAlphaElementAg, frAlphaElementAg, esAlphaElementAg, deAlphaElementAg, ptAlphaElementAg, },
  {enAlphaElementAl, frAlphaElementAl, esAlphaElementAl, deAlphaElementAl, ptAlphaElementAl, },
  {enAlphaElementAm, frAlphaElementAm, esAlphaElementAm, deAlphaElementAm, ptAlphaElementAm, },
  {enAlphaElementAr, frAlphaElementAr, esAlphaElementAr, deAlphaElementAr, ptAlphaElementAr, },
  {enAlphaElementAs, frAlphaElementAs, esAlphaElementAs, deAlphaElementAs, ptAlphaElementAs, },
  {enAlphaElementAt, frAlphaElementAt, esAlphaElementAt, deAlphaElementAt, ptAlphaElementAt, },
  {enAlphaElementAu, frAlphaElementAu, esAlphaElementAu, deAlphaElementAu, ptAlphaElementAu, },
  {enAlphaElementB, frAlphaElementB, esAlphaElementB, deAlphaElementB, ptAlphaElementB, },
  {enAlphaElementBa, frAlphaElementBa, esAlphaElementBa, deAlphaElementBa, ptAlphaElementBa, },
  {enAlphaElementBe, frAlphaElementBe, esAlphaElementBe, deAlphaElementBe, ptAlphaElementBe, },
  {enAlphaElementBh, frAlphaElementBh, esAlphaElementBh, deAlphaElementBh, ptAlphaElementBh, },
  {enAlphaElementBi, frAlphaElementBi, esAlphaElementBi, deAlphaElementBi, ptAlphaElementBi, },
  {enAlphaElementBk, frAlphaElementBk, esAlphaElementBk, deAlphaElementBk, ptAlphaElementBk, },
  {enAlphaElementBr, frAlphaElementBr, esAlphaElementBr, deAlphaElementBr, ptAlphaElementBr, },
  {enAlphaElementC, frAlphaElementC, esAlphaElementC, deAlphaElementC, ptAlphaElementC, },
  {enAlphaElementCa, frAlphaElementCa, esAlphaElementCa, deAlphaElementCa, ptAlphaElementCa, },
  {enAlphaElementCd, frAlphaElementCd, esAlphaElementCd, deAlphaElementCd, ptAlphaElementCd, },
  {enAlphaElementCe, frAlphaElementCe, esAlphaElementCe, deAlphaElementCe, ptAlphaElementCe, },
  {enAlphaElementCf, frAlphaElementCf, esAlphaElementCf, deAlphaElementCf, ptAlphaElementCf, },
  {enAlphaElementCl, frAlphaElementCl, esAlphaElementCl, deAlphaElementCl, ptAlphaElementCl, },
  {enAlphaElementCm, frAlphaElementCm, esAlphaElementCm, deAlphaElementCm, ptAlphaElementCm, },
  {enAlphaElementCn, frAlphaElementCn, esAlphaElementCn, deAlphaElementCn, ptAlphaElementCn, },
  {enAlphaElementCo, frAlphaElementCo, esAlphaElementCo, deAlphaElementCo, ptAlphaElementCo, },
  {enAlphaElementCr, frAlphaElementCr, esAlphaElementCr, deAlphaElementCr, ptAlphaElementCr, },
  {enAlphaElementCs, frAlphaElementCs, esAlphaElementCs, deAlphaElementCs, ptAlphaElementCs, },
  {enAlphaElementCu, frAlphaElementCu, esAlphaElementCu, deAlphaElementCu, ptAlphaElementCu, },
  {enAlphaElementDb, frAlphaElementDb, esAlphaElementDb, deAlphaElementDb, ptAlphaElementDb, },
  {enAlphaElementDs, frAlphaElementDs, esAlphaElementDs, deAlphaElementDs, ptAlphaElementDs, },
  {enAlphaElementDy, frAlphaElementDy, esAlphaElementDy, deAlphaElementDy, ptAlphaElementDy, },
  {enAlphaElementEr, frAlphaElementEr, esAlphaElementEr, deAlphaElementEr, ptAlphaElementEr, },
  {enAlphaElementEs, frAlphaElementEs, esAlphaElementEs, deAlphaElementEs, ptAlphaElementEs, },
  {enAlphaElementEu, frAlphaElementEu, esAlphaElementEu, deAlphaElementEu, ptAlphaElementEu, },
  {enAlphaElementF, frAlphaElementF, esAlphaElementF, deAlphaElementF, ptAlphaElementF, },
  {enAlphaElementFe, frAlphaElementFe, esAlphaElementFe, deAlphaElementFe, ptAlphaElementFe, },
  {enAlphaElementFl, frAlphaElementFl, esAlphaElementFl, deAlphaElementFl, ptAlphaElementFl, },
  {enAlphaElementFm, frAlphaElementFm, esAlphaElementFm, deAlphaElementFm, ptAlphaElementFm, },
  {enAlphaElementFr, frAlphaElementFr, esAlphaElementFr, deAlphaElementFr, ptAlphaElementFr, },
  {enAlphaElementGa, frAlphaElementGa, esAlphaElementGa, deAlphaElementGa, ptAlphaElementGa, },
  {enAlphaElementGd, frAlphaElementGd, esAlphaElementGd, deAlphaElementGd, ptAlphaElementGd, },
  {enAlphaElementGe, frAlphaElementGe, esAlphaElementGe, deAlphaElementGe, ptAlphaElementGe, },
  {enAlphaElementH, frAlphaElementH, esAlphaElementH, deAlphaElementH, ptAlphaElementH, },
  {enAlphaElementHe, frAlphaElementHe, esAlphaElementHe, deAlphaElementHe, ptAlphaElementHe, },
  {enAlphaElementHf, frAlphaElementHf, esAlphaElementHf, deAlphaElementHf, ptAlphaElementHf, },
  {enAlphaElementHg, frAlphaElementHg, esAlphaElementHg, deAlphaElementHg, ptAlphaElementHg, },
  {enAlphaElementHo, frAlphaElementHo, esAlphaElementHo, deAlphaElementHo, ptAlphaElementHo, },
  {enAlphaElementHs, frAlphaElementHs, esAlphaElementHs, deAlphaElementHs, ptAlphaElementHs, },
  {enAlphaElementI, frAlphaElementI, esAlphaElementI, deAlphaElementI, ptAlphaElementI, },
  {enAlphaElementIn, frAlphaElementIn, esAlphaElementIn, deAlphaElementIn, ptAlphaElementIn, },
  {enAlphaElementIr, frAlphaElementIr, esAlphaElementIr, deAlphaElementIr, ptAlphaElementIr, },
  {enAlphaElementK, frAlphaElementK, esAlphaElementK, deAlphaElementK, ptAlphaElementK, },
  {enAlphaElementKr, frAlphaElementKr, esAlphaElementKr, deAlphaElementKr, ptAlphaElementKr, },
  {enAlphaElementLa, frAlphaElementLa, esAlphaElementLa, deAlphaElementLa, ptAlphaElementLa, },
  {enAlphaElementLi, frAlphaElementLi, esAlphaElementLi, deAlphaElementLi, ptAlphaElementLi, },
  {enAlphaElementLr, frAlphaElementLr, esAlphaElementLr, deAlphaElementLr, ptAlphaElementLr, },
  {enAlphaElementLu, frAlphaElementLu, esAlphaElementLu, deAlphaElementLu, ptAlphaElementLu, },
  {enAlphaElementLv, frAlphaElementLv, esAlphaElementLv, deAlphaElementLv, ptAlphaElementLv, },
  {enAlphaElementMc, frAlphaElementMc, esAlphaElementMc, deAlphaElementMc, ptAlphaElementMc, },
  {enAlphaElementMd, frAlphaElementMd, esAlphaElementMd, deAlphaElementMd, ptAlphaElementMd, },
  {enAlphaElementMg, frAlphaElementMg, esAlphaElementMg, deAlphaElementMg, ptAlphaElementMg, },
  {enAlphaElementMn, frAlphaElementMn, esAlphaElementMn, deAlphaElementMn, ptAlphaElementMn, },
  {enAlphaElementMo, frAlphaElementMo, esAlphaElementMo, deAlphaElementMo, ptAlphaElementMo, },
  {enAlphaElementMt, frAlphaElementMt, esAlphaElementMt, deAlphaElementMt, ptAlphaElementMt, },
  {enAlphaElementN, frAlphaElementN, esAlphaElementN, deAlphaElementN, ptAlphaElementN, },
  {enAlphaElementNa, frAlphaElementNa, esAlphaElementNa, deAlphaElementNa, ptAlphaElementNa, },
  {enAlphaElementNb, frAlphaElementNb, esAlphaElementNb, deAlphaElementNb, ptAlphaElementNb, },
  {enAlphaElementNd, frAlphaElementNd, esAlphaElementNd, deAlphaElementNd, ptAlphaElementNd, },
  {enAlphaElementNe, frAlphaElementNe, esAlphaElementNe, deAlphaElementNe, ptAlphaElementNe, },
  {enAlphaElementNh, frAlphaElementNh, esAlphaElementNh, deAlphaElementNh, ptAlphaElementNh, },
  {enAlphaElementNi, frAlphaElementNi, esAlphaElementNi, deAlphaElementNi, ptAlphaElementNi, },
  {enAlphaElementNo, frAlphaElementNo, esAlphaElementNo, deAlphaElementNo, ptAlphaElementNo, },
  {enAlphaElementNp, frAlphaElementNp, esAlphaElementNp, deAlphaElementNp, ptAlphaElementNp, },
  {enAlphaElementO, frAlphaElementO, esAlphaElementO, deAlphaElementO, ptAlphaElementO, },
  {enAlphaElementOg, frAlphaElementOg, esAlphaElementOg, deAlphaElementOg, ptAlphaElementOg, },
  {enAlphaElementOs, frAlphaElementOs, esAlphaElementOs, deAlphaElementOs, ptAlphaElementOs, },
  {enAlphaElementP, frAlphaElementP, esAlphaElementP, deAlphaElementP, ptAlphaElementP, },
  {enAlphaElementPa, frAlphaElementPa, esAlphaElementPa, deAlphaElementPa, ptAlphaElementPa, },
  {enAlphaElementPb, frAlphaElementPb, esAlphaElementPb, deAlphaElementPb, ptAlphaElementPb, },
  {enAlphaElementPd, frAlphaElementPd, esAlphaElementPd, deAlphaElementPd, ptAlphaElementPd, },
  {enAlphaElementPm, frAlphaElementPm, esAlphaElementPm, deAlphaElementPm, ptAlphaElementPm, },
  {enAlphaElementPo, frAlphaElementPo, esAlphaElementPo, deAlphaElementPo, ptAlphaElementPo, },
  {enAlphaElementPr, frAlphaElementPr, esAlphaElementPr, deAlphaElementPr, ptAlphaElementPr, },
  {enAlphaElementPt, frAlphaElementPt, esAlphaElementPt, deAlphaElementPt, ptAlphaElementPt, },
  {enAlphaElementPu, frAlphaElementPu, esAlphaElementPu, deAlphaElementPu, ptAlphaElementPu, },
  {enAlphaElementRa, frAlphaElementRa, esAlphaElementRa, deAlphaElementRa, ptAlphaElementRa, },
  {enAlphaElementRb, frAlphaElementRb, esAlphaElementRb, deAlphaElementRb, ptAlphaElementRb, },
  {enAlphaElementRe, frAlphaElementRe, esAlphaElementRe, deAlphaElementRe, ptAlphaElementRe, },
  {enAlphaElementRf, frAlphaElementRf, esAlphaElementRf, deAlphaElementRf, ptAlphaElementRf, },
  {enAlphaElementRg, frAlphaElementRg, esAlphaElementRg, deAlphaElementRg, ptAlphaElementRg, },
  {enAlphaElementRh, frAlphaElementRh, esAlphaElementRh, deAlphaElementRh, ptAlphaElementRh, },
  {enAlphaElementRn, frAlphaElementRn, esAlphaElementRn, deAlphaElementRn, ptAlphaElementRn, },
  {enAlphaElementRu, frAlphaElementRu, esAlphaElementRu, deAlphaElementRu, ptAlphaElementRu, },
  {enAlphaElementS, frAlphaElementS, esAlphaElementS, deAlphaElementS, ptAlphaElementS, },
  {enAlphaElementSb, frAlphaElementSb, esAlphaElementSb, deAlphaElementSb, ptAlphaElementSb, },
  {enAlphaElementSc, frAlphaElementSc, esAlphaElementSc, deAlphaElementSc, ptAlphaElementSc, },
  {enAlphaElementSe, frAlphaElementSe, esAlphaElementSe, deAlphaElementSe, ptAlphaElementSe, },
  {enAlphaElementSg, frAlphaElementSg, esAlphaElementSg, deAlphaElementSg, ptAlphaElementSg, },
  {enAlphaElementSi, frAlphaElementSi, esAlphaElementSi, deAlphaElementSi, ptAlphaElementSi, },
  {enAlphaElementSm, frAlphaElementSm, esAlphaElementSm, deAlphaElementSm, ptAlphaElementSm, },
  {enAlphaElementSn, frAlphaElementSn, esAlphaElementSn, deAlphaElementSn, ptAlphaElementSn, },
  {enAlphaElementSr, frAlphaElementSr, esAlphaElementSr, deAlphaElementSr, ptAlphaElementSr, },
  {enAlphaElementTa, frAlphaElementTa, esAlphaElementTa, deAlphaElementTa, ptAlphaElementTa, },
  {enAlphaElementTb, frAlphaElementTb, esAlphaElementTb, deAlphaElementTb, ptAlphaElementTb, },
  {enAlphaElementTc, frAlphaElementTc, esAlphaElementTc, deAlphaElementTc, ptAlphaElementTc, },
  {enAlphaElementTe, frAlphaElementTe, esAlphaElementTe, deAlphaElementTe, ptAlphaElementTe, },
  {enAlphaElementTh, frAlphaElementTh, esAlphaElementTh, deAlphaElementTh, ptAlphaElementTh, },
  {enAlphaElementTi, frAlphaElementTi, esAlphaElementTi, deAlphaElementTi, ptAlphaElementTi, },
  {enAlphaElementTl, frAlphaElementTl, esAlphaElementTl, deAlphaElementTl, ptAlphaElementTl, },
  {enAlphaElementTm, frAlphaElementTm, esAlphaElementTm, deAlphaElementTm, ptAlphaElementTm, },
  {enAlphaElementTs, frAlphaElementTs, esAlphaElementTs, deAlphaElementTs, ptAlphaElementTs, },
  {enAlphaElementU, frAlphaElementU, esAlphaElementU, deAlphaElementU, ptAlphaElementU, },
  {enAlphaElementUbn, frAlphaElementUbn, esAlphaElementUbn, deAlphaElementUbn, ptAlphaElementUbn, },
  {enAlphaElementUue, frAlphaElementUue, esAlphaElementUue, deAlphaElementUue, ptAlphaElementUue, },
  {enAlphaElementV, frAlphaElementV, esAlphaElementV, deAlphaElementV, ptAlphaElementV, },
  {enAlphaElementW, frAlphaElementW, esAlphaElementW, deAlphaElementW, ptAlphaElementW, },
  {enAlphaElementXe, frAlphaElementXe, esAlphaElementXe, deAlphaElementXe, ptAlphaElementXe, },
  {enAlphaElementY, frAlphaElementY, esAlphaElementY, deAlphaElementY, ptAlphaElementY, },
  {enAlphaElementYb, frAlphaElementYb, esAlphaElementYb, deAlphaElementYb, ptAlphaElementYb, },
  {enAlphaElementZn, frAlphaElementZn, esAlphaElementZn, deAlphaElementZn, ptAlphaElementZn, },
  {enAlphaElementZr, frAlphaElementZr, esAlphaElementZr, deAlphaElementZr, ptAlphaElementZr, },
  {enAngleUnit, frAngleUnit, esAngleUnit, deAngleUnit, ptAngleUnit, },
  {enApproximateSolution, frApproximateSolution, esApproximateSolution, deApproximateSolution, ptApproximateSolution, },
  {enApproximateSolutionIntervalInstruction0, frApproximateSolutionIntervalInstruction0, esApproximateSolutionIntervalInstruction0, deApproximateSolutionIntervalInstruction0, ptApproximateSolutionIntervalInstruction0, },
  {enApproximateSolutionIntervalInstruction1, frApproximateSolutionIntervalInstruction1, esApproximateSolutionIntervalInstruction1, deApproximateSolutionIntervalInstruction1, ptApproximateSolutionIntervalInstruction1, },
  {enApps, frApps, esApps, deApps, ptApps, },
  {enAppsCapital, frAppsCapital, esAppsCapital, deAppsCapital, ptAppsCapital, },
  {enArithmetic, frArithmetic, esArithmetic, deArithmetic, ptArithmetic, },
  {enAtomApp, frAtomApp, esAtomApp, deAtomApp, ptAtomApp, },
  {enAtomAppCapital, frAtomAppCapital, esAtomAppCapital, deAtomAppCapital, ptAtomAppCapital, },
  {enAtomName_Actinium, frAtomName_Actinium, esAtomName_Actinium, deAtomName_Actinium, ptAtomName_Actinium, },
  {enAtomName_Aluminium, frAtomName_Aluminium, esAtomName_Aluminium, deAtomName_Aluminium, ptAtomName_Aluminium, },
  {enAtomName_Americium, frAtomName_Americium, esAtomName_Americium, deAtomName_Americium, ptAtomName_Americium, },
  {enAtomName_Antimony, frAtomName_Antimony, esAtomName_Antimony, deAtomName_Antimony, ptAtomName_Antimony, },
  {enAtomName_Argon, frAtomName_Argon, esAtomName_Argon, deAtomName_Argon, ptAtomName_Argon, },
  {enAtomName_Arsenic, frAtomName_Arsenic, esAtomName_Arsenic, deAtomName_Arsenic, ptAtomName_Arsenic, },
  {enAtomName_Astatine, frAtomName_Astatine, esAtomName_Astatine, deAtomName_Astatine, ptAtomName_Astatine, },
  {enAtomName_Barium, frAtomName_Barium, esAtomName_Barium, deAtomName_Barium, ptAtomName_Barium, },
  {enAtomName_Berkelium, frAtomName_Berkelium, esAtomName_Berkelium, deAtomName_Berkelium, ptAtomName_Berkelium, },
  {enAtomName_Beryllium, frAtomName_Beryllium, esAtomName_Beryllium, deAtomName_Beryllium, ptAtomName_Beryllium, },
  {enAtomName_Bismuth, frAtomName_Bismuth, esAtomName_Bismuth, deAtomName_Bismuth, ptAtomName_Bismuth, },
  {enAtomName_Bohrium, frAtomName_Bohrium, esAtomName_Bohrium, deAtomName_Bohrium, ptAtomName_Bohrium, },
  {enAtomName_Boron, frAtomName_Boron, esAtomName_Boron, deAtomName_Boron, ptAtomName_Boron, },
  {enAtomName_Bromine, frAtomName_Bromine, esAtomName_Bromine, deAtomName_Bromine, ptAtomName_Bromine, },
  {enAtomName_Cadmium, frAtomName_Cadmium, esAtomName_Cadmium, deAtomName_Cadmium, ptAtomName_Cadmium, },
  {enAtomName_Caesium, frAtomName_Caesium, esAtomName_Caesium, deAtomName_Caesium, ptAtomName_Caesium, },
  {enAtomName_Calcium, frAtomName_Calcium, esAtomName_Calcium, deAtomName_Calcium, ptAtomName_Calcium, },
  {enAtomName_Californium, frAtomName_Californium, esAtomName_Californium, deAtomName_Californium, ptAtomName_Californium, },
  {enAtomName_Carbon, frAtomName_Carbon, esAtomName_Carbon, deAtomName_Carbon, ptAtomName_Carbon, },
  {enAtomName_Cerium, frAtomName_Cerium, esAtomName_Cerium, deAtomName_Cerium, ptAtomName_Cerium, },
  {enAtomName_Chlorine, frAtomName_Chlorine, esAtomName_Chlorine, deAtomName_Chlorine, ptAtomName_Chlorine, },
  {enAtomName_Chromium, frAtomName_Chromium, esAtomName_Chromium, deAtomName_Chromium, ptAtomName_Chromium, },
  {enAtomName_Cobalt, frAtomName_Cobalt, esAtomName_Cobalt, deAtomName_Cobalt, ptAtomName_Cobalt, },
  {enAtomName_Copernicium, frAtomName_Copernicium, esAtomName_Copernicium, deAtomName_Copernicium, ptAtomName_Copernicium, },
  {enAtomName_Copper, frAtomName_Copper, esAtomName_Copper, deAtomName_Copper, ptAtomName_Copper, },
  {enAtomName_Curium, frAtomName_Curium, esAtomName_Curium, deAtomName_Curium, ptAtomName_Curium, },
  {enAtomName_Damstadtium, frAtomName_Damstadtium, esAtomName_Damstadtium, deAtomName_Damstadtium, ptAtomName_Damstadtium, },
  {enAtomName_Dubnium, frAtomName_Dubnium, esAtomName_Dubnium, deAtomName_Dubnium, ptAtomName_Dubnium, },
  {enAtomName_Dyxprosium, frAtomName_Dyxprosium, esAtomName_Dyxprosium, deAtomName_Dyxprosium, ptAtomName_Dyxprosium, },
  {enAtomName_Einsteinium, frAtomName_Einsteinium, esAtomName_Einsteinium, deAtomName_Einsteinium, ptAtomName_Einsteinium, },
  {enAtomName_Erbium, frAtomName_Erbium, esAtomName_Erbium, deAtomName_Erbium, ptAtomName_Erbium, },
  {enAtomName_Europium, frAtomName_Europium, esAtomName_Europium, deAtomName_Europium, ptAtomName_Europium, },
  {enAtomName_Fermium, frAtomName_Fermium, esAtomName_Fermium, deAtomName_Fermium, ptAtomName_Fermium, },
  {enAtomName_Flerovium, frAtomName_Flerovium, esAtomName_Flerovium, deAtomName_Flerovium, ptAtomName_Flerovium, },
  {enAtomName_Fluorine, frAtomName_Fluorine, esAtomName_Fluorine, deAtomName_Fluorine, ptAtomName_Fluorine, },
  {enAtomName_Francium, frAtomName_Francium, esAtomName_Francium, deAtomName_Francium, ptAtomName_Francium, },
  {enAtomName_Gadolinium, frAtomName_Gadolinium, esAtomName_Gadolinium, deAtomName_Gadolinium, ptAtomName_Gadolinium, },
  {enAtomName_Gallium, frAtomName_Gallium, esAtomName_Gallium, deAtomName_Gallium, ptAtomName_Gallium, },
  {enAtomName_Germanium, frAtomName_Germanium, esAtomName_Germanium, deAtomName_Germanium, ptAtomName_Germanium, },
  {enAtomName_Gold, frAtomName_Gold, esAtomName_Gold, deAtomName_Gold, ptAtomName_Gold, },
  {enAtomName_Hafnium, frAtomName_Hafnium, esAtomName_Hafnium, deAtomName_Hafnium, ptAtomName_Hafnium, },
  {enAtomName_Hassium, frAtomName_Hassium, esAtomName_Hassium, deAtomName_Hassium, ptAtomName_Hassium, },
  {enAtomName_Helium, frAtomName_Helium, esAtomName_Helium, deAtomName_Helium, ptAtomName_Helium, },
  {enAtomName_Holmium, frAtomName_Holmium, esAtomName_Holmium, deAtomName_Holmium, ptAtomName_Holmium, },
  {enAtomName_Hydrogen, frAtomName_Hydrogen, esAtomName_Hydrogen, deAtomName_Hydrogen, ptAtomName_Hydrogen, },
  {enAtomName_Indine, frAtomName_Indine, esAtomName_Indine, deAtomName_Indine, ptAtomName_Indine, },
  {enAtomName_Indium, frAtomName_Indium, esAtomName_Indium, deAtomName_Indium, ptAtomName_Indium, },
  {enAtomName_Iridium, frAtomName_Iridium, esAtomName_Iridium, deAtomName_Iridium, ptAtomName_Iridium, },
  {enAtomName_Iron, frAtomName_Iron, esAtomName_Iron, deAtomName_Iron, ptAtomName_Iron, },
  {enAtomName_Krypton, frAtomName_Krypton, esAtomName_Krypton, deAtomName_Krypton, ptAtomName_Krypton, },
  {enAtomName_Lanthanum, frAtomName_Lanthanum, esAtomName_Lanthanum, deAtomName_Lanthanum, ptAtomName_Lanthanum, },
  {enAtomName_Lawrencium, frAtomName_Lawrencium, esAtomName_Lawrencium, deAtomName_Lawrencium, ptAtomName_Lawrencium, },
  {enAtomName_Lead, frAtomName_Lead, esAtomName_Lead, deAtomName_Lead, ptAtomName_Lead, },
  {enAtomName_Lithium, frAtomName_Lithium, esAtomName_Lithium, deAtomName_Lithium, ptAtomName_Lithium, },
  {enAtomName_Livermorium, frAtomName_Livermorium, esAtomName_Livermorium, deAtomName_Livermorium, ptAtomName_Livermorium, },
  {enAtomName_Lutetium, frAtomName_Lutetium, esAtomName_Lutetium, deAtomName_Lutetium, ptAtomName_Lutetium, },
  {enAtomName_Magnesium, frAtomName_Magnesium, esAtomName_Magnesium, deAtomName_Magnesium, ptAtomName_Magnesium, },
  {enAtomName_Manganese, frAtomName_Manganese, esAtomName_Manganese, deAtomName_Manganese, ptAtomName_Manganese, },
  {enAtomName_Meitnerium, frAtomName_Meitnerium, esAtomName_Meitnerium, deAtomName_Meitnerium, ptAtomName_Meitnerium, },
  {enAtomName_Mendelevium, frAtomName_Mendelevium, esAtomName_Mendelevium, deAtomName_Mendelevium, ptAtomName_Mendelevium, },
  {enAtomName_Mercury, frAtomName_Mercury, esAtomName_Mercury, deAtomName_Mercury, ptAtomName_Mercury, },
  {enAtomName_Molybdenum, frAtomName_Molybdenum, esAtomName_Molybdenum, deAtomName_Molybdenum, ptAtomName_Molybdenum, },
  {enAtomName_Moscovium, frAtomName_Moscovium, esAtomName_Moscovium, deAtomName_Moscovium, ptAtomName_Moscovium, },
  {enAtomName_Neodymium, frAtomName_Neodymium, esAtomName_Neodymium, deAtomName_Neodymium, ptAtomName_Neodymium, },
  {enAtomName_Neon, frAtomName_Neon, esAtomName_Neon, deAtomName_Neon, ptAtomName_Neon, },
  {enAtomName_Neptunium, frAtomName_Neptunium, esAtomName_Neptunium, deAtomName_Neptunium, ptAtomName_Neptunium, },
  {enAtomName_Nickel, frAtomName_Nickel, esAtomName_Nickel, deAtomName_Nickel, ptAtomName_Nickel, },
  {enAtomName_Nihonium, frAtomName_Nihonium, esAtomName_Nihonium, deAtomName_Nihonium, ptAtomName_Nihonium, },
  {enAtomName_Niobium, frAtomName_Niobium, esAtomName_Niobium, deAtomName_Niobium, ptAtomName_Niobium, },
  {enAtomName_Nitrogen, frAtomName_Nitrogen, esAtomName_Nitrogen, deAtomName_Nitrogen, ptAtomName_Nitrogen, },
  {enAtomName_Nobelium, frAtomName_Nobelium, esAtomName_Nobelium, deAtomName_Nobelium, ptAtomName_Nobelium, },
  {enAtomName_Oganesson, frAtomName_Oganesson, esAtomName_Oganesson, deAtomName_Oganesson, ptAtomName_Oganesson, },
  {enAtomName_Osmium, frAtomName_Osmium, esAtomName_Osmium, deAtomName_Osmium, ptAtomName_Osmium, },
  {enAtomName_Oxygen, frAtomName_Oxygen, esAtomName_Oxygen, deAtomName_Oxygen, ptAtomName_Oxygen, },
  {enAtomName_Palladium, frAtomName_Palladium, esAtomName_Palladium, deAtomName_Palladium, ptAtomName_Palladium, },
  {enAtomName_Phosphorus, frAtomName_Phosphorus, esAtomName_Phosphorus, deAtomName_Phosphorus, ptAtomName_Phosphorus, },
  {enAtomName_Platinum, frAtomName_Platinum, esAtomName_Platinum, deAtomName_Platinum, ptAtomName_Platinum, },
  {enAtomName_Plutonium, frAtomName_Plutonium, esAtomName_Plutonium, deAtomName_Plutonium, ptAtomName_Plutonium, },
  {enAtomName_Polonium, frAtomName_Polonium, esAtomName_Polonium, deAtomName_Polonium, ptAtomName_Polonium, },
  {enAtomName_Potassium, frAtomName_Potassium, esAtomName_Potassium, deAtomName_Potassium, ptAtomName_Potassium, },
  {enAtomName_Praseodymium, frAtomName_Praseodymium, esAtomName_Praseodymium, deAtomName_Praseodymium, ptAtomName_Praseodymium, },
  {enAtomName_Promethium, frAtomName_Promethium, esAtomName_Promethium, deAtomName_Promethium, ptAtomName_Promethium, },
  {enAtomName_Protactinium, frAtomName_Protactinium, esAtomName_Protactinium, deAtomName_Protactinium, ptAtomName_Protactinium, },
  {enAtomName_Radium, frAtomName_Radium, esAtomName_Radium, deAtomName_Radium, ptAtomName_Radium, },
  {enAtomName_Radon, frAtomName_Radon, esAtomName_Radon, deAtomName_Radon, ptAtomName_Radon, },
  {enAtomName_Rhenium, frAtomName_Rhenium, esAtomName_Rhenium, deAtomName_Rhenium, ptAtomName_Rhenium, },
  {enAtomName_Rhodium, frAtomName_Rhodium, esAtomName_Rhodium, deAtomName_Rhodium, ptAtomName_Rhodium, },
  {enAtomName_Roentgenium, frAtomName_Roentgenium, esAtomName_Roentgenium, deAtomName_Roentgenium, ptAtomName_Roentgenium, },
  {enAtomName_Rubidium, frAtomName_Rubidium, esAtomName_Rubidium, deAtomName_Rubidium, ptAtomName_Rubidium, },
  {enAtomName_Ruthemium, frAtomName_Ruthemium, esAtomName_Ruthemium, deAtomName_Ruthemium, ptAtomName_Ruthemium, },
  {enAtomName_Rutherfordium, frAtomName_Rutherfordium, esAtomName_Rutherfordium, deAtomName_Rutherfordium, ptAtomName_Rutherfordium, },
  {enAtomName_Samarium, frAtomName_Samarium, esAtomName_Samarium, deAtomName_Samarium, ptAtomName_Samarium, },
  {enAtomName_Scandium, frAtomName_Scandium, esAtomName_Scandium, deAtomName_Scandium, ptAtomName_Scandium, },
  {enAtomName_Seaborgium, frAtomName_Seaborgium, esAtomName_Seaborgium, deAtomName_Seaborgium, ptAtomName_Seaborgium, },
  {enAtomName_Selenium, frAtomName_Selenium, esAtomName_Selenium, deAtomName_Selenium, ptAtomName_Selenium, },
  {enAtomName_Silicon, frAtomName_Silicon, esAtomName_Silicon, deAtomName_Silicon, ptAtomName_Silicon, },
  {enAtomName_Silver, frAtomName_Silver, esAtomName_Silver, deAtomName_Silver, ptAtomName_Silver, },
  {enAtomName_Sodium, frAtomName_Sodium, esAtomName_Sodium, deAtomName_Sodium, ptAtomName_Sodium, },
  {enAtomName_Strontium, frAtomName_Strontium, esAtomName_Strontium, deAtomName_Strontium, ptAtomName_Strontium, },
  {enAtomName_Sulfur, frAtomName_Sulfur, esAtomName_Sulfur, deAtomName_Sulfur, ptAtomName_Sulfur, },
  {enAtomName_Tantalum, frAtomName_Tantalum, esAtomName_Tantalum, deAtomName_Tantalum, ptAtomName_Tantalum, },
  {enAtomName_Technetium, frAtomName_Technetium, esAtomName_Technetium, deAtomName_Technetium, ptAtomName_Technetium, },
  {enAtomName_Tellurium, frAtomName_Tellurium, esAtomName_Tellurium, deAtomName_Tellurium, ptAtomName_Tellurium, },
  {enAtomName_Tennessine, frAtomName_Tennessine, esAtomName_Tennessine, deAtomName_Tennessine, ptAtomName_Tennessine, },
  {enAtomName_Terbium, frAtomName_Terbium, esAtomName_Terbium, deAtomName_Terbium, ptAtomName_Terbium, },
  {enAtomName_Thalium, frAtomName_Thalium, esAtomName_Thalium, deAtomName_Thalium, ptAtomName_Thalium, },
  {enAtomName_Thorium, frAtomName_Thorium, esAtomName_Thorium, deAtomName_Thorium, ptAtomName_Thorium, },
  {enAtomName_Thulium, frAtomName_Thulium, esAtomName_Thulium, deAtomName_Thulium, ptAtomName_Thulium, },
  {enAtomName_Tin, frAtomName_Tin, esAtomName_Tin, deAtomName_Tin, ptAtomName_Tin, },
  {enAtomName_Titanium, frAtomName_Titanium, esAtomName_Titanium, deAtomName_Titanium, ptAtomName_Titanium, },
  {enAtomName_Tungsten, frAtomName_Tungsten, esAtomName_Tungsten, deAtomName_Tungsten, ptAtomName_Tungsten, },
  {enAtomName_Uranium, frAtomName_Uranium, esAtomName_Uranium, deAtomName_Uranium, ptAtomName_Uranium, },
  {enAtomName_Vanadium, frAtomName_Vanadium, esAtomName_Vanadium, deAtomName_Vanadium, ptAtomName_Vanadium, },
  {enAtomName_Xenon, frAtomName_Xenon, esAtomName_Xenon, deAtomName_Xenon, ptAtomName_Xenon, },
  {enAtomName_Ytterbium, frAtomName_Ytterbium, esAtomName_Ytterbium, deAtomName_Ytterbium, ptAtomName_Ytterbium, },
  {enAtomName_Yttrium, frAtomName_Yttrium, esAtomName_Yttrium, deAtomName_Yttrium, ptAtomName_Yttrium, },
  {enAtomName_Zinc, frAtomName_Zinc, esAtomName_Zinc, deAtomName_Zinc, ptAtomName_Zinc, },
  {enAtomName_Zirconium, frAtomName_Zirconium, esAtomName_Zirconium, deAtomName_Zirconium, ptAtomName_Zirconium, },
  {enAutoImportScript, frAutoImportScript, esAutoImportScript, deAutoImportScript, ptAutoImportScript, },
  {enAvogadroTag, frAvogadroTag, esAvogadroTag, deAvogadroTag, ptAvogadroTag, },
  {enAxis, frAxis, esAxis, deAxis, ptAxis, },
  {enBarStart, frBarStart, esBarStart, deBarStart, ptBarStart, },
  {enBasedLogarithm, frBasedLogarithm, esBasedLogarithm, deBasedLogarithm, ptBasedLogarithm, },
  {enBetaPopUp, frBetaPopUp, esBetaPopUp, deBetaPopUp, ptBetaPopUp, },
  {enBetaVersion, frBetaVersion, esBetaVersion, deBetaVersion, ptBetaVersion, },
  {enBetaVersionMessage1, frBetaVersionMessage1, esBetaVersionMessage1, deBetaVersionMessage1, ptBetaVersionMessage1, },
  {enBetaVersionMessage2, frBetaVersionMessage2, esBetaVersionMessage2, deBetaVersionMessage2, ptBetaVersionMessage2, },
  {enBetaVersionMessage3, frBetaVersionMessage3, esBetaVersionMessage3, deBetaVersionMessage3, ptBetaVersionMessage3, },
  {enBetaVersionMessage4, frBetaVersionMessage4, esBetaVersionMessage4, deBetaVersionMessage4, ptBetaVersionMessage4, },
  {enBetaVersionMessage5, frBetaVersionMessage5, esBetaVersionMessage5, deBetaVersionMessage5, ptBetaVersionMessage5, },
  {enBetaVersionMessage6, frBetaVersionMessage6, esBetaVersionMessage6, deBetaVersionMessage6, ptBetaVersionMessage6, },
  {enBinomial, frBinomial, esBinomial, deBinomial, ptBinomial, },
  {enBinomialCDF, frBinomialCDF, esBinomialCDF, deBinomialCDF, ptBinomialCDF, },
  {enBinomialDistribution, frBinomialDistribution, esBinomialDistribution, deBinomialDistribution, ptBinomialDistribution, },
  {enBinomialPDF, frBinomialPDF, esBinomialPDF, deBinomialPDF, ptBinomialPDF, },
  {enBoltzmannTag, frBoltzmannTag, esBoltzmannTag, deBoltzmannTag, ptBoltzmannTag, },
  {enBoxTab, frBoxTab, esBoxTab, deBoxTab, ptBoxTab, },
  {enBrightness, frBrightness, esBrightness, deBrightness, ptBrightness, },
  {enCalculApp, frCalculApp, esCalculApp, deCalculApp, ptCalculApp, },
  {enCalculAppCapital, frCalculAppCapital, esCalculAppCapital, deCalculAppCapital, ptCalculAppCapital, },
  {enCalculation, frCalculation, esCalculation, deCalculation, ptCalculation, },
  {enCancel, frCancel, esCancel, deCancel, ptCancel, },
  {enCartesian, frCartesian, esCartesian, deCartesian, ptCartesian, },
  {enCartesianType, frCartesianType, esCartesianType, deCartesianType, ptCartesianType, },
  {enCatalog, frCatalog, esCatalog, deCatalog, ptCatalog, },
  {enCeiling, frCeiling, esCeiling, deCeiling, ptCeiling, },
  {enChemistry, frChemistry, esChemistry, deChemistry, ptChemistry, },
  {enChiSquared, frChiSquared, esChiSquared, deChiSquared, ptChiSquared, },
  {enChiSquaredDistribution, frChiSquaredDistribution, esChiSquaredDistribution, deChiSquaredDistribution, ptChiSquaredDistribution, },
  {enChooseDistribution, frChooseDistribution, esChooseDistribution, deChooseDistribution, ptChooseDistribution, },
  {enChooseParameters, frChooseParameters, esChooseParameters, deChooseParameters, ptChooseParameters, },
  {enChooseSequenceType, frChooseSequenceType, esChooseSequenceType, deChooseSequenceType, ptChooseSequenceType, },
  {enClearColumn, frClearColumn, esClearColumn, deClearColumn, ptClearColumn, },
  {enColorBlue, frColorBlue, esColorBlue, deColorBlue, ptColorBlue, },
  {enColorGreen, frColorGreen, esColorGreen, deColorGreen, ptColorGreen, },
  {enColorWhite, frColorWhite, esColorWhite, deColorWhite, ptColorWhite, },
  {enColorYellow, frColorYellow, esColorYellow, deColorYellow, ptColorYellow, },
  {enColumnOptions, frColumnOptions, esColumnOptions, deColumnOptions, ptColumnOptions, },
  {enCombination, frCombination, esCombination, deCombination, ptCombination, },
  {enCombinatorics, frCombinatorics, esCombinatorics, deCombinatorics, ptCombinatorics, },
  {enComplexAbsoluteValue, frComplexAbsoluteValue, esComplexAbsoluteValue, deComplexAbsoluteValue, ptComplexAbsoluteValue, },
  {enComplexFormat, frComplexFormat, esComplexFormat, deComplexFormat, ptComplexFormat, },
  {enComplexNumber, frComplexNumber, esComplexNumber, deComplexNumber, ptComplexNumber, },
  {enCompute, frCompute, esCompute, deCompute, ptCompute, },
  {enComputeProbability, frComputeProbability, esComputeProbability, deComputeProbability, ptComputeProbability, },
  {enConfidence, frConfidence, esConfidence, deConfidence, ptConfidence, },
  {enConjugate, frConjugate, esConjugate, deConjugate, ptConjugate, },
  {enConnectedMessage1, frConnectedMessage1, esConnectedMessage1, deConnectedMessage1, ptConnectedMessage1, },
  {enConnectedMessage2, frConnectedMessage2, esConnectedMessage2, deConnectedMessage2, ptConnectedMessage2, },
  {enConnectedMessage3, frConnectedMessage3, esConnectedMessage3, deConnectedMessage3, ptConnectedMessage3, },
  {enConnectedMessage4, frConnectedMessage4, esConnectedMessage4, deConnectedMessage4, ptConnectedMessage4, },
  {enConnectedMessage5, frConnectedMessage5, esConnectedMessage5, deConnectedMessage5, ptConnectedMessage5, },
  {enConnectedMessage6, frConnectedMessage6, esConnectedMessage6, deConnectedMessage6, ptConnectedMessage6, },
  {enConsole, frConsole, esConsole, deConsole, ptConsole, },
  {enContributors, frContributors, esContributors, deContributors, ptContributors, },
  {enCopyColumnInList, frCopyColumnInList, esCopyColumnInList, deCopyColumnInList, ptCopyColumnInList, },
  {enCoulombTag, frCoulombTag, esCoulombTag, deCoulombTag, ptCoulombTag, },
  {enCovariance, frCovariance, esCovariance, deCovariance, ptCovariance, },
  {enCubic, frCubic, esCubic, deCubic, ptCubic, },
  {enCurveType, frCurveType, esCurveType, deCurveType, ptCurveType, },
  {enCustomSoftwareVersion, frCustomSoftwareVersion, esCustomSoftwareVersion, deCustomSoftwareVersion, ptCustomSoftwareVersion, },
  {enDataNotSuitable, frDataNotSuitable, esDataNotSuitable, deDataNotSuitable, ptDataNotSuitable, },
  {enDataNotSuitableForRegression, frDataNotSuitableForRegression, esDataNotSuitableForRegression, deDataNotSuitableForRegression, ptDataNotSuitableForRegression, },
  {enDataTab, frDataTab, esDataTab, deDataTab, ptDataTab, },
  {enDecimal, frDecimal, esDecimal, deDecimal, ptDecimal, },
  {enDefaultSetting, frDefaultSetting, esDefaultSetting, deDefaultSetting, ptDefaultSetting, },
  {enDeg, frDeg, esDeg, deDeg, ptDeg, },
  {enDegrees, frDegrees, esDegrees, deDegrees, ptDegrees, },
  {enDegreesOfFreedomDefinition, frDegreesOfFreedomDefinition, esDegreesOfFreedomDefinition, deDegreesOfFreedomDefinition, ptDegreesOfFreedomDefinition, },
  {enDeleteFunction, frDeleteFunction, esDeleteFunction, deDeleteFunction, ptDeleteFunction, },
  {enDeleteScript, frDeleteScript, esDeleteScript, deDeleteScript, ptDeleteScript, },
  {enDeleteSequence, frDeleteSequence, esDeleteSequence, deDeleteSequence, ptDeleteSequence, },
  {enDerivateNumber, frDerivateNumber, esDerivateNumber, deDerivateNumber, ptDerivateNumber, },
  {enDerivativeFunctionColumn, frDerivativeFunctionColumn, esDerivativeFunctionColumn, deDerivativeFunctionColumn, ptDerivativeFunctionColumn, },
  {enDeterminant, frDeterminant, esDeterminant, deDeterminant, ptDeterminant, },
  {enDeviation, frDeviation, esDeviation, deDeviation, ptDeviation, },
  {enDeviationDefinition, frDeviationDefinition, esDeviationDefinition, deDeviationDefinition, ptDeviationDefinition, },
  {enDimension, frDimension, esDimension, deDimension, ptDimension, },
  {enDisplayMode, frDisplayMode, esDisplayMode, deDisplayMode, ptDisplayMode, },
  {enDisplayValues, frDisplayValues, esDisplayValues, deDisplayValues, ptDisplayValues, },
  {enDoubleRecurrence, frDoubleRecurrence, esDoubleRecurrence, deDoubleRecurrence, ptDoubleRecurrence, },
  {enEdition2D, frEdition2D, esEdition2D, deEdition2D, ptEdition2D, },
  {enEditionLinear, frEditionLinear, esEditionLinear, deEditionLinear, ptEditionLinear, },
  {enEditionMode, frEditionMode, esEditionMode, deEditionMode, ptEditionMode, },
  {enElectromagnetism, frElectromagnetism, esElectromagnetism, deElectromagnetism, ptElectromagnetism, },
  {enElectronMassTag, frElectronMassTag, esElectronMassTag, deElectronMassTag, ptElectronMassTag, },
  {enElementalChargeTag, frElementalChargeTag, esElementalChargeTag, deElementalChargeTag, ptElementalChargeTag, },
  {enEmpty, frEmpty, esEmpty, deEmpty, ptEmpty, },
  {enEmptyExpressionBox0, frEmptyExpressionBox0, esEmptyExpressionBox0, deEmptyExpressionBox0, ptEmptyExpressionBox0, },
  {enEmptyExpressionBox1, frEmptyExpressionBox1, esEmptyExpressionBox1, deEmptyExpressionBox1, ptEmptyExpressionBox1, },
  {enEmptyExpressionBox2, frEmptyExpressionBox2, esEmptyExpressionBox2, deEmptyExpressionBox2, ptEmptyExpressionBox2, },
  {enEmptyFunctionBox0, frEmptyFunctionBox0, esEmptyFunctionBox0, deEmptyFunctionBox0, ptEmptyFunctionBox0, },
  {enEmptyFunctionBox1, frEmptyFunctionBox1, esEmptyFunctionBox1, deEmptyFunctionBox1, ptEmptyFunctionBox1, },
  {enEmptyFunctionBox2, frEmptyFunctionBox2, esEmptyFunctionBox2, deEmptyFunctionBox2, ptEmptyFunctionBox2, },
  {enEnableCharacters, frEnableCharacters, esEnableCharacters, deEnableCharacters, ptEnableCharacters, },
  {enEng, frEng, esEng, deEng, ptEng, },
  {enEngineering, frEngineering, esEngineering, deEngineering, ptEngineering, },
  {enEnterEquation, frEnterEquation, esEnterEquation, deEnterEquation, ptEnterEquation, },
  {enExamMode, frExamMode, esExamMode, deExamMode, ptExamMode, },
  {enExamModeActive, frExamModeActive, esExamModeActive, deExamModeActive, ptExamModeActive, },
  {enExamModeMode, frExamModeMode, esExamModeMode, deExamModeMode, ptExamModeMode, },
  {enExamModeModeDutch, frExamModeModeDutch, esExamModeModeDutch, deExamModeModeDutch, ptExamModeModeDutch, },
  {enExamModeModeNoSym, frExamModeModeNoSym, esExamModeModeNoSym, deExamModeModeNoSym, ptExamModeModeNoSym, },
  {enExamModeModeStandard, frExamModeModeStandard, esExamModeModeStandard, deExamModeModeStandard, ptExamModeModeStandard, },
  {enExecuteScript, frExecuteScript, esExecuteScript, deExecuteScript, ptExecuteScript, },
  {enExitExamMode1, frExitExamMode1, esExitExamMode1, deExitExamMode1, ptExitExamMode1, },
  {enExitExamMode2, frExitExamMode2, esExitExamMode2, deExitExamMode2, ptExitExamMode2, },
  {enExplicit, frExplicit, esExplicit, deExplicit, ptExplicit, },
  {enExponential, frExponential, esExponential, deExponential, ptExponential, },
  {enExponentialDistribution, frExponentialDistribution, esExponentialDistribution, deExponentialDistribution, ptExponentialDistribution, },
  {enExpressions, frExpressions, esExpressions, deExpressions, ptExpressions, },
  {enExternalApp, frExternalApp, esExternalApp, deExternalApp, ptExternalApp, },
  {enExternalAppApiMismatch, frExternalAppApiMismatch, esExternalAppApiMismatch, deExternalAppApiMismatch, ptExternalAppApiMismatch, },
  {enExternalAppCapital, frExternalAppCapital, esExternalAppCapital, deExternalAppCapital, ptExternalAppCapital, },
  {enExternalAppExecError, frExternalAppExecError, esExternalAppExecError, deExternalAppExecError, ptExternalAppExecError, },
  {enFillWithFormula, frFillWithFormula, esFillWithFormula, deFillWithFormula, ptFillWithFormula, },
  {enFirstQuartile, frFirstQuartile, esFirstQuartile, deFirstQuartile, ptFirstQuartile, },
  {enFirstTermIndex, frFirstTermIndex, esFirstTermIndex, deFirstTermIndex, ptFirstTermIndex, },
  {enFloor, frFloor, esFloor, deFloor, ptFloor, },
  {enFluctuation, frFluctuation, esFluctuation, deFluctuation, ptFluctuation, },
  {enForbiddenValue, frForbiddenValue, esForbiddenValue, deForbiddenValue, ptForbiddenValue, },
  {enForbidenAppInExamMode1, frForbidenAppInExamMode1, esForbidenAppInExamMode1, deForbidenAppInExamMode1, ptForbidenAppInExamMode1, },
  {enForbidenAppInExamMode2, frForbidenAppInExamMode2, esForbidenAppInExamMode2, deForbidenAppInExamMode2, ptForbidenAppInExamMode2, },
  {enFracPart, frFracPart, esFracPart, deFracPart, ptFracPart, },
  {enFrequency, frFrequency, esFrequency, deFrequency, ptFrequency, },
  {enFunctionApp, frFunctionApp, esFunctionApp, deFunctionApp, ptFunctionApp, },
  {enFunctionAppCapital, frFunctionAppCapital, esFunctionAppCapital, deFunctionAppCapital, ptFunctionAppCapital, },
  {enFunctionColor, frFunctionColor, esFunctionColor, deFunctionColor, ptFunctionColor, },
  {enFunctionColumn, frFunctionColumn, esFunctionColumn, deFunctionColumn, ptFunctionColumn, },
  {enFunctionDomain, frFunctionDomain, esFunctionDomain, deFunctionDomain, ptFunctionDomain, },
  {enFunctionOptions, frFunctionOptions, esFunctionOptions, deFunctionOptions, ptFunctionOptions, },
  {enFunctionTab, frFunctionTab, esFunctionTab, deFunctionTab, ptFunctionTab, },
  {enFunctions, frFunctions, esFunctions, deFunctions, ptFunctions, },
  {enFunctionsAndVariables, frFunctionsAndVariables, esFunctionsAndVariables, deFunctionsAndVariables, ptFunctionsAndVariables, },
  {enGAccelerationTag, frGAccelerationTag, esGAccelerationTag, deGAccelerationTag, ptGAccelerationTag, },
  {enGConstantTag, frGConstantTag, esGConstantTag, deGConstantTag, ptGConstantTag, },
  {enGasTag, frGasTag, esGasTag, deGasTag, ptGasTag, },
  {enGeometric, frGeometric, esGeometric, deGeometric, ptGeometric, },
  {enGeometricDistribution, frGeometricDistribution, esGeometricDistribution, deGeometricDistribution, ptGeometricDistribution, },
  {enGoto, frGoto, esGoto, deGoto, ptGoto, },
  {enGradians, frGradians, esGradians, deGradians, ptGradians, },
  {enGraphTab, frGraphTab, esGraphTab, deGraphTab, ptGraphTab, },
  {enGravitation, frGravitation, esGravitation, deGravitation, ptGravitation, },
  {enGreatCommonDivisor, frGreatCommonDivisor, esGreatCommonDivisor, deGreatCommonDivisor, ptGreatCommonDivisor, },
  {enHardwareTestLaunch1, frHardwareTestLaunch1, esHardwareTestLaunch1, deHardwareTestLaunch1, ptHardwareTestLaunch1, },
  {enHardwareTestLaunch2, frHardwareTestLaunch2, esHardwareTestLaunch2, deHardwareTestLaunch2, ptHardwareTestLaunch2, },
  {enHardwareTestLaunch3, frHardwareTestLaunch3, esHardwareTestLaunch3, deHardwareTestLaunch3, ptHardwareTestLaunch3, },
  {enHardwareTestLaunch4, frHardwareTestLaunch4, esHardwareTestLaunch4, deHardwareTestLaunch4, ptHardwareTestLaunch4, },
  {enHideDerivativeColumn, frHideDerivativeColumn, esHideDerivativeColumn, deHideDerivativeColumn, ptHideDerivativeColumn, },
  {enHistogramSet, frHistogramSet, esHistogramSet, deHistogramSet, ptHistogramSet, },
  {enHistogramTab, frHistogramTab, esHistogramTab, deHistogramTab, ptHistogramTab, },
  {enHyperbolicCosine, frHyperbolicCosine, esHyperbolicCosine, deHyperbolicCosine, ptHyperbolicCosine, },
  {enHyperbolicSine, frHyperbolicSine, esHyperbolicSine, deHyperbolicSine, ptHyperbolicSine, },
  {enHyperbolicTangent, frHyperbolicTangent, esHyperbolicTangent, deHyperbolicTangent, ptHyperbolicTangent, },
  {enHyperbolicTrigonometry, frHyperbolicTrigonometry, esHyperbolicTrigonometry, deHyperbolicTrigonometry, ptHyperbolicTrigonometry, },
  {enIdentity, frIdentity, esIdentity, deIdentity, ptIdentity, },
  {enImaginaryPart, frImaginaryPart, esImaginaryPart, deImaginaryPart, ptImaginaryPart, },
  {enImportList, frImportList, esImportList, deImportList, ptImportList, },
  {enInfiniteNumberOfSolutions, frInfiniteNumberOfSolutions, esInfiniteNumberOfSolutions, deInfiniteNumberOfSolutions, ptInfiniteNumberOfSolutions, },
  {enInitialization, frInitialization, esInitialization, deInitialization, ptInitialization, },
  {enIntegral, frIntegral, esIntegral, deIntegral, ptIntegral, },
  {enInterquartileRange, frInterquartileRange, esInterquartileRange, deInterquartileRange, ptInterquartileRange, },
  {enIntersection, frIntersection, esIntersection, deIntersection, ptIntersection, },
  {enInterval, frInterval, esInterval, deInterval, ptInterval, },
  {enIntervalDefinition, frIntervalDefinition, esIntervalDefinition, deIntervalDefinition, ptIntervalDefinition, },
  {enIntervalSet, frIntervalSet, esIntervalSet, deIntervalSet, ptIntervalSet, },
  {enIntervalT, frIntervalT, esIntervalT, deIntervalT, ptIntervalT, },
  {enIntervalTheta, frIntervalTheta, esIntervalTheta, deIntervalTheta, ptIntervalTheta, },
  {enIntervalX, frIntervalX, esIntervalX, deIntervalX, ptIntervalX, },
  {enInvBinomial, frInvBinomial, esInvBinomial, deInvBinomial, ptInvBinomial, },
  {enInvNorm, frInvNorm, esInvNorm, deInvNorm, ptInvNorm, },
  {enInvSort, frInvSort, esInvSort, deInvSort, ptInvSort, },
  {enInverse, frInverse, esInverse, deInverse, ptInverse, },
  {enInverseHyperbolicCosine, frInverseHyperbolicCosine, esInverseHyperbolicCosine, deInverseHyperbolicCosine, ptInverseHyperbolicCosine, },
  {enInverseHyperbolicSine, frInverseHyperbolicSine, esInverseHyperbolicSine, deInverseHyperbolicSine, ptInverseHyperbolicSine, },
  {enInverseHyperbolicTangent, frInverseHyperbolicTangent, esInverseHyperbolicTangent, deInverseHyperbolicTangent, ptInverseHyperbolicTangent, },
  {enLEDColor, frLEDColor, esLEDColor, deLEDColor, ptLEDColor, },
  {enLambdaExponentialDefinition, frLambdaExponentialDefinition, esLambdaExponentialDefinition, deLambdaExponentialDefinition, ptLambdaExponentialDefinition, },
  {enLambdaPoissonDefinition, frLambdaPoissonDefinition, esLambdaPoissonDefinition, deLambdaPoissonDefinition, ptLambdaPoissonDefinition, },
  {enLanguage, frLanguage, esLanguage, deLanguage, ptLanguage, },
  {enLeastCommonMultiple, frLeastCommonMultiple, esLeastCommonMultiple, deLeastCommonMultiple, ptLeastCommonMultiple, },
  {enLinear, frLinear, esLinear, deLinear, ptLinear, },
  {enLists, frLists, esLists, deLists, ptLists, },
  {enLogarithmic, frLogarithmic, esLogarithmic, deLogarithmic, ptLogarithmic, },
  {enLogistic, frLogistic, esLogistic, deLogistic, ptLogistic, },
  {enLoopsAndTests, frLoopsAndTests, esLoopsAndTests, deLoopsAndTests, ptLoopsAndTests, },
  {enLowBattery, frLowBattery, esLowBattery, deLowBattery, ptLowBattery, },
  {enMathOptions, frMathOptions, esMathOptions, deMathOptions, ptMathOptions, },
  {enMatrices, frMatrices, esMatrices, deMatrices, ptMatrices, },
  {enMaximum, frMaximum, esMaximum, deMaximum, ptMaximum, },
  {enMean, frMean, esMean, deMean, ptMean, },
  {enMeanDefinition, frMeanDefinition, esMeanDefinition, deMeanDefinition, ptMeanDefinition, },
  {enMeanDot, frMeanDot, esMeanDot, deMeanDot, ptMeanDot, },
  {enMedian, frMedian, esMedian, deMedian, ptMedian, },
  {enMicroPythonVersion, frMicroPythonVersion, esMicroPythonVersion, deMicroPythonVersion, ptMicroPythonVersion, },
  {enMinimum, frMinimum, esMinimum, deMinimum, ptMinimum, },
  {enModules, frModules, esModules, deModules, ptModules, },
  {enMolarMassesByAlpha, frMolarMassesByAlpha, esMolarMassesByAlpha, deMolarMassesByAlpha, ptMolarMassesByAlpha, },
  {enMolarMassesByNumber, frMolarMassesByNumber, esMolarMassesByNumber, deMolarMassesByNumber, ptMolarMassesByNumber, },
  {enMove, frMove, esMove, deMove, ptMove, },
  {enNColumn, frNColumn, esNColumn, deNColumn, ptNColumn, },
  {enNEnd, frNEnd, esNEnd, deNEnd, ptNEnd, },
  {enNStart, frNStart, esNStart, deNStart, ptNStart, },
  {enNameCannotStartWithNumber, frNameCannotStartWithNumber, esNameCannotStartWithNumber, deNameCannotStartWithNumber, ptNameCannotStartWithNumber, },
  {enNameTaken, frNameTaken, esNameTaken, deNameTaken, ptNameTaken, },
  {enNameTooLong, frNameTooLong, esNameTooLong, deNameTooLong, ptNameTooLong, },
  {enNeutronMassTag, frNeutronMassTag, esNeutronMassTag, deNeutronMassTag, ptNeutronMassTag, },
  {enNewMatrix, frNewMatrix, esNewMatrix, deNewMatrix, ptNewMatrix, },
  {enNext, frNext, esNext, deNext, ptNext, },
  {enNoActivatedFunction, frNoActivatedFunction, esNoActivatedFunction, deNoActivatedFunction, ptNoActivatedFunction, },
  {enNoActivatedSequence, frNoActivatedSequence, esNoActivatedSequence, deNoActivatedSequence, ptNoActivatedSequence, },
  {enNoDataToPlot, frNoDataToPlot, esNoDataToPlot, deNoDataToPlot, ptNoDataToPlot, },
  {enNoFunction, frNoFunction, esNoFunction, deNoFunction, ptNoFunction, },
  {enNoFunctionToDelete, frNoFunctionToDelete, esNoFunctionToDelete, deNoFunctionToDelete, ptNoFunctionToDelete, },
  {enNoIntersectionFound, frNoIntersectionFound, esNoIntersectionFound, deNoIntersectionFound, ptNoIntersectionFound, },
  {enNoMaximumFound, frNoMaximumFound, esNoMaximumFound, deNoMaximumFound, ptNoMaximumFound, },
  {enNoMinimumFound, frNoMinimumFound, esNoMinimumFound, deNoMinimumFound, ptNoMinimumFound, },
  {enNoPreimageFound, frNoPreimageFound, esNoPreimageFound, deNoPreimageFound, ptNoPreimageFound, },
  {enNoSequence, frNoSequence, esNoSequence, deNoSequence, ptNoSequence, },
  {enNoSolutionEquation, frNoSolutionEquation, esNoSolutionEquation, deNoSolutionEquation, ptNoSolutionEquation, },
  {enNoSolutionInterval, frNoSolutionInterval, esNoSolutionInterval, deNoSolutionInterval, ptNoSolutionInterval, },
  {enNoSolutionSystem, frNoSolutionSystem, esNoSolutionSystem, deNoSolutionSystem, ptNoSolutionSystem, },
  {enNoValueToCompute, frNoValueToCompute, esNoValueToCompute, deNoValueToCompute, ptNoValueToCompute, },
  {enNoZeroFound, frNoZeroFound, esNoZeroFound, deNoZeroFound, ptNoZeroFound, },
  {enNonLinearSystem, frNonLinearSystem, esNonLinearSystem, deNonLinearSystem, ptNonLinearSystem, },
  {enNormCDF, frNormCDF, esNormCDF, deNormCDF, ptNormCDF, },
  {enNormCDF2, frNormCDF2, esNormCDF2, deNormCDF2, ptNormCDF2, },
  {enNormPDF, frNormPDF, esNormPDF, deNormPDF, ptNormPDF, },
  {enNormal, frNormal, esNormal, deNormal, ptNormal, },
  {enNormalDistribution, frNormalDistribution, esNormalDistribution, deNormalDistribution, ptNormalDistribution, },
  {enNthRoot, frNthRoot, esNthRoot, deNthRoot, ptNthRoot, },
  {enNumberElementAc, frNumberElementAc, esNumberElementAc, deNumberElementAc, ptNumberElementAc, },
  {enNumberElementAg, frNumberElementAg, esNumberElementAg, deNumberElementAg, ptNumberElementAg, },
  {enNumberElementAl, frNumberElementAl, esNumberElementAl, deNumberElementAl, ptNumberElementAl, },
  {enNumberElementAm, frNumberElementAm, esNumberElementAm, deNumberElementAm, ptNumberElementAm, },
  {enNumberElementAr, frNumberElementAr, esNumberElementAr, deNumberElementAr, ptNumberElementAr, },
  {enNumberElementAs, frNumberElementAs, esNumberElementAs, deNumberElementAs, ptNumberElementAs, },
  {enNumberElementAt, frNumberElementAt, esNumberElementAt, deNumberElementAt, ptNumberElementAt, },
  {enNumberElementAu, frNumberElementAu, esNumberElementAu, deNumberElementAu, ptNumberElementAu, },
  {enNumberElementB, frNumberElementB, esNumberElementB, deNumberElementB, ptNumberElementB, },
  {enNumberElementBa, frNumberElementBa, esNumberElementBa, deNumberElementBa, ptNumberElementBa, },
  {enNumberElementBe, frNumberElementBe, esNumberElementBe, deNumberElementBe, ptNumberElementBe, },
  {enNumberElementBh, frNumberElementBh, esNumberElementBh, deNumberElementBh, ptNumberElementBh, },
  {enNumberElementBi, frNumberElementBi, esNumberElementBi, deNumberElementBi, ptNumberElementBi, },
  {enNumberElementBk, frNumberElementBk, esNumberElementBk, deNumberElementBk, ptNumberElementBk, },
  {enNumberElementBr, frNumberElementBr, esNumberElementBr, deNumberElementBr, ptNumberElementBr, },
  {enNumberElementC, frNumberElementC, esNumberElementC, deNumberElementC, ptNumberElementC, },
  {enNumberElementCa, frNumberElementCa, esNumberElementCa, deNumberElementCa, ptNumberElementCa, },
  {enNumberElementCd, frNumberElementCd, esNumberElementCd, deNumberElementCd, ptNumberElementCd, },
  {enNumberElementCe, frNumberElementCe, esNumberElementCe, deNumberElementCe, ptNumberElementCe, },
  {enNumberElementCf, frNumberElementCf, esNumberElementCf, deNumberElementCf, ptNumberElementCf, },
  {enNumberElementCl, frNumberElementCl, esNumberElementCl, deNumberElementCl, ptNumberElementCl, },
  {enNumberElementCm, frNumberElementCm, esNumberElementCm, deNumberElementCm, ptNumberElementCm, },
  {enNumberElementCn, frNumberElementCn, esNumberElementCn, deNumberElementCn, ptNumberElementCn, },
  {enNumberElementCo, frNumberElementCo, esNumberElementCo, deNumberElementCo, ptNumberElementCo, },
  {enNumberElementCr, frNumberElementCr, esNumberElementCr, deNumberElementCr, ptNumberElementCr, },
  {enNumberElementCs, frNumberElementCs, esNumberElementCs, deNumberElementCs, ptNumberElementCs, },
  {enNumberElementCu, frNumberElementCu, esNumberElementCu, deNumberElementCu, ptNumberElementCu, },
  {enNumberElementDb, frNumberElementDb, esNumberElementDb, deNumberElementDb, ptNumberElementDb, },
  {enNumberElementDs, frNumberElementDs, esNumberElementDs, deNumberElementDs, ptNumberElementDs, },
  {enNumberElementDy, frNumberElementDy, esNumberElementDy, deNumberElementDy, ptNumberElementDy, },
  {enNumberElementEr, frNumberElementEr, esNumberElementEr, deNumberElementEr, ptNumberElementEr, },
  {enNumberElementEs, frNumberElementEs, esNumberElementEs, deNumberElementEs, ptNumberElementEs, },
  {enNumberElementEu, frNumberElementEu, esNumberElementEu, deNumberElementEu, ptNumberElementEu, },
  {enNumberElementF, frNumberElementF, esNumberElementF, deNumberElementF, ptNumberElementF, },
  {enNumberElementFe, frNumberElementFe, esNumberElementFe, deNumberElementFe, ptNumberElementFe, },
  {enNumberElementFl, frNumberElementFl, esNumberElementFl, deNumberElementFl, ptNumberElementFl, },
  {enNumberElementFm, frNumberElementFm, esNumberElementFm, deNumberElementFm, ptNumberElementFm, },
  {enNumberElementFr, frNumberElementFr, esNumberElementFr, deNumberElementFr, ptNumberElementFr, },
  {enNumberElementGa, frNumberElementGa, esNumberElementGa, deNumberElementGa, ptNumberElementGa, },
  {enNumberElementGd, frNumberElementGd, esNumberElementGd, deNumberElementGd, ptNumberElementGd, },
  {enNumberElementGe, frNumberElementGe, esNumberElementGe, deNumberElementGe, ptNumberElementGe, },
  {enNumberElementH, frNumberElementH, esNumberElementH, deNumberElementH, ptNumberElementH, },
  {enNumberElementHe, frNumberElementHe, esNumberElementHe, deNumberElementHe, ptNumberElementHe, },
  {enNumberElementHf, frNumberElementHf, esNumberElementHf, deNumberElementHf, ptNumberElementHf, },
  {enNumberElementHg, frNumberElementHg, esNumberElementHg, deNumberElementHg, ptNumberElementHg, },
  {enNumberElementHo, frNumberElementHo, esNumberElementHo, deNumberElementHo, ptNumberElementHo, },
  {enNumberElementHs, frNumberElementHs, esNumberElementHs, deNumberElementHs, ptNumberElementHs, },
  {enNumberElementI, frNumberElementI, esNumberElementI, deNumberElementI, ptNumberElementI, },
  {enNumberElementIn, frNumberElementIn, esNumberElementIn, deNumberElementIn, ptNumberElementIn, },
  {enNumberElementIr, frNumberElementIr, esNumberElementIr, deNumberElementIr, ptNumberElementIr, },
  {enNumberElementK, frNumberElementK, esNumberElementK, deNumberElementK, ptNumberElementK, },
  {enNumberElementKr, frNumberElementKr, esNumberElementKr, deNumberElementKr, ptNumberElementKr, },
  {enNumberElementLa, frNumberElementLa, esNumberElementLa, deNumberElementLa, ptNumberElementLa, },
  {enNumberElementLi, frNumberElementLi, esNumberElementLi, deNumberElementLi, ptNumberElementLi, },
  {enNumberElementLr, frNumberElementLr, esNumberElementLr, deNumberElementLr, ptNumberElementLr, },
  {enNumberElementLu, frNumberElementLu, esNumberElementLu, deNumberElementLu, ptNumberElementLu, },
  {enNumberElementLv, frNumberElementLv, esNumberElementLv, deNumberElementLv, ptNumberElementLv, },
  {enNumberElementMc, frNumberElementMc, esNumberElementMc, deNumberElementMc, ptNumberElementMc, },
  {enNumberElementMd, frNumberElementMd, esNumberElementMd, deNumberElementMd, ptNumberElementMd, },
  {enNumberElementMg, frNumberElementMg, esNumberElementMg, deNumberElementMg, ptNumberElementMg, },
  {enNumberElementMn, frNumberElementMn, esNumberElementMn, deNumberElementMn, ptNumberElementMn, },
  {enNumberElementMo, frNumberElementMo, esNumberElementMo, deNumberElementMo, ptNumberElementMo, },
  {enNumberElementMt, frNumberElementMt, esNumberElementMt, deNumberElementMt, ptNumberElementMt, },
  {enNumberElementN, frNumberElementN, esNumberElementN, deNumberElementN, ptNumberElementN, },
  {enNumberElementNa, frNumberElementNa, esNumberElementNa, deNumberElementNa, ptNumberElementNa, },
  {enNumberElementNb, frNumberElementNb, esNumberElementNb, deNumberElementNb, ptNumberElementNb, },
  {enNumberElementNd, frNumberElementNd, esNumberElementNd, deNumberElementNd, ptNumberElementNd, },
  {enNumberElementNe, frNumberElementNe, esNumberElementNe, deNumberElementNe, ptNumberElementNe, },
  {enNumberElementNh, frNumberElementNh, esNumberElementNh, deNumberElementNh, ptNumberElementNh, },
  {enNumberElementNi, frNumberElementNi, esNumberElementNi, deNumberElementNi, ptNumberElementNi, },
  {enNumberElementNo, frNumberElementNo, esNumberElementNo, deNumberElementNo, ptNumberElementNo, },
  {enNumberElementNp, frNumberElementNp, esNumberElementNp, deNumberElementNp, ptNumberElementNp, },
  {enNumberElementO, frNumberElementO, esNumberElementO, deNumberElementO, ptNumberElementO, },
  {enNumberElementOg, frNumberElementOg, esNumberElementOg, deNumberElementOg, ptNumberElementOg, },
  {enNumberElementOs, frNumberElementOs, esNumberElementOs, deNumberElementOs, ptNumberElementOs, },
  {enNumberElementP, frNumberElementP, esNumberElementP, deNumberElementP, ptNumberElementP, },
  {enNumberElementPa, frNumberElementPa, esNumberElementPa, deNumberElementPa, ptNumberElementPa, },
  {enNumberElementPb, frNumberElementPb, esNumberElementPb, deNumberElementPb, ptNumberElementPb, },
  {enNumberElementPd, frNumberElementPd, esNumberElementPd, deNumberElementPd, ptNumberElementPd, },
  {enNumberElementPm, frNumberElementPm, esNumberElementPm, deNumberElementPm, ptNumberElementPm, },
  {enNumberElementPo, frNumberElementPo, esNumberElementPo, deNumberElementPo, ptNumberElementPo, },
  {enNumberElementPr, frNumberElementPr, esNumberElementPr, deNumberElementPr, ptNumberElementPr, },
  {enNumberElementPt, frNumberElementPt, esNumberElementPt, deNumberElementPt, ptNumberElementPt, },
  {enNumberElementPu, frNumberElementPu, esNumberElementPu, deNumberElementPu, ptNumberElementPu, },
  {enNumberElementRa, frNumberElementRa, esNumberElementRa, deNumberElementRa, ptNumberElementRa, },
  {enNumberElementRb, frNumberElementRb, esNumberElementRb, deNumberElementRb, ptNumberElementRb, },
  {enNumberElementRe, frNumberElementRe, esNumberElementRe, deNumberElementRe, ptNumberElementRe, },
  {enNumberElementRf, frNumberElementRf, esNumberElementRf, deNumberElementRf, ptNumberElementRf, },
  {enNumberElementRg, frNumberElementRg, esNumberElementRg, deNumberElementRg, ptNumberElementRg, },
  {enNumberElementRh, frNumberElementRh, esNumberElementRh, deNumberElementRh, ptNumberElementRh, },
  {enNumberElementRn, frNumberElementRn, esNumberElementRn, deNumberElementRn, ptNumberElementRn, },
  {enNumberElementRu, frNumberElementRu, esNumberElementRu, deNumberElementRu, ptNumberElementRu, },
  {enNumberElementS, frNumberElementS, esNumberElementS, deNumberElementS, ptNumberElementS, },
  {enNumberElementSb, frNumberElementSb, esNumberElementSb, deNumberElementSb, ptNumberElementSb, },
  {enNumberElementSc, frNumberElementSc, esNumberElementSc, deNumberElementSc, ptNumberElementSc, },
  {enNumberElementSe, frNumberElementSe, esNumberElementSe, deNumberElementSe, ptNumberElementSe, },
  {enNumberElementSg, frNumberElementSg, esNumberElementSg, deNumberElementSg, ptNumberElementSg, },
  {enNumberElementSi, frNumberElementSi, esNumberElementSi, deNumberElementSi, ptNumberElementSi, },
  {enNumberElementSm, frNumberElementSm, esNumberElementSm, deNumberElementSm, ptNumberElementSm, },
  {enNumberElementSn, frNumberElementSn, esNumberElementSn, deNumberElementSn, ptNumberElementSn, },
  {enNumberElementSr, frNumberElementSr, esNumberElementSr, deNumberElementSr, ptNumberElementSr, },
  {enNumberElementTa, frNumberElementTa, esNumberElementTa, deNumberElementTa, ptNumberElementTa, },
  {enNumberElementTb, frNumberElementTb, esNumberElementTb, deNumberElementTb, ptNumberElementTb, },
  {enNumberElementTc, frNumberElementTc, esNumberElementTc, deNumberElementTc, ptNumberElementTc, },
  {enNumberElementTe, frNumberElementTe, esNumberElementTe, deNumberElementTe, ptNumberElementTe, },
  {enNumberElementTh, frNumberElementTh, esNumberElementTh, deNumberElementTh, ptNumberElementTh, },
  {enNumberElementTi, frNumberElementTi, esNumberElementTi, deNumberElementTi, ptNumberElementTi, },
  {enNumberElementTl, frNumberElementTl, esNumberElementTl, deNumberElementTl, ptNumberElementTl, },
  {enNumberElementTm, frNumberElementTm, esNumberElementTm, deNumberElementTm, ptNumberElementTm, },
  {enNumberElementTs, frNumberElementTs, esNumberElementTs, deNumberElementTs, ptNumberElementTs, },
  {enNumberElementU, frNumberElementU, esNumberElementU, deNumberElementU, ptNumberElementU, },
  {enNumberElementUbn, frNumberElementUbn, esNumberElementUbn, deNumberElementUbn, ptNumberElementUbn, },
  {enNumberElementUue, frNumberElementUue, esNumberElementUue, deNumberElementUue, ptNumberElementUue, },
  {enNumberElementV, frNumberElementV, esNumberElementV, deNumberElementV, ptNumberElementV, },
  {enNumberElementW, frNumberElementW, esNumberElementW, deNumberElementW, ptNumberElementW, },
  {enNumberElementXe, frNumberElementXe, esNumberElementXe, deNumberElementXe, ptNumberElementXe, },
  {enNumberElementY, frNumberElementY, esNumberElementY, deNumberElementY, ptNumberElementY, },
  {enNumberElementYb, frNumberElementYb, esNumberElementYb, deNumberElementYb, ptNumberElementYb, },
  {enNumberElementZn, frNumberElementZn, esNumberElementZn, deNumberElementZn, ptNumberElementZn, },
  {enNumberElementZr, frNumberElementZr, esNumberElementZr, deNumberElementZr, ptNumberElementZr, },
  {enNumberOfDots, frNumberOfDots, esNumberOfDots, deNumberOfDots, ptNumberOfDots, },
  {enOk, frOk, esOk, deOk, ptOk, },
  {enOnlyFirstSolutionsDisplayed0, frOnlyFirstSolutionsDisplayed0, esOnlyFirstSolutionsDisplayed0, deOnlyFirstSolutionsDisplayed0, ptOnlyFirstSolutionsDisplayed0, },
  {enOnlyFirstSolutionsDisplayed1, frOnlyFirstSolutionsDisplayed1, esOnlyFirstSolutionsDisplayed1, deOnlyFirstSolutionsDisplayed1, ptOnlyFirstSolutionsDisplayed1, },
  {enOr, frOr, esOr, deOr, ptOr, },
  {enOrthonormal, frOrthonormal, esOrthonormal, deOrthonormal, ptOrthonormal, },
  {enParametricType, frParametricType, esParametricType, deParametricType, ptParametricType, },
  {enPermutation, frPermutation, esPermutation, dePermutation, ptPermutation, },
  {enPhysics, frPhysics, esPhysics, dePhysics, ptPhysics, },
  {enPlanckTag, frPlanckTag, esPlanckTag, dePlanckTag, ptPlanckTag, },
  {enPlot, frPlot, esPlot, dePlot, ptPlot, },
  {enPlotOptions, frPlotOptions, esPlotOptions, dePlotOptions, ptPlotOptions, },
  {enPoisson, frPoisson, esPoisson, dePoisson, ptPoisson, },
  {enPoissonDistribution, frPoissonDistribution, esPoissonDistribution, dePoissonDistribution, ptPoissonDistribution, },
  {enPolar, frPolar, esPolar, dePolar, ptPolar, },
  {enPolarType, frPolarType, esPolarType, dePolarType, ptPolarType, },
  {enPolynomeHasNoRealSolution0, frPolynomeHasNoRealSolution0, esPolynomeHasNoRealSolution0, dePolynomeHasNoRealSolution0, ptPolynomeHasNoRealSolution0, },
  {enPolynomeHasNoRealSolution1, frPolynomeHasNoRealSolution1, esPolynomeHasNoRealSolution1, dePolynomeHasNoRealSolution1, ptPolynomeHasNoRealSolution1, },
  {enPoolMemoryFull1, frPoolMemoryFull1, esPoolMemoryFull1, dePoolMemoryFull1, ptPoolMemoryFull1, },
  {enPoolMemoryFull2, frPoolMemoryFull2, esPoolMemoryFull2, dePoolMemoryFull2, ptPoolMemoryFull2, },
  {enPower, frPower, esPower, dePower, ptPower, },
  {enPrediction, frPrediction, esPrediction, dePrediction, ptPrediction, },
  {enPrediction95, frPrediction95, esPrediction95, dePrediction95, ptPrediction95, },
  {enPreimage, frPreimage, esPreimage, dePreimage, ptPreimage, },
  {enPrimeFactorDecomposition, frPrimeFactorDecomposition, esPrimeFactorDecomposition, dePrimeFactorDecomposition, ptPrimeFactorDecomposition, },
  {enProbaApp, frProbaApp, esProbaApp, deProbaApp, ptProbaApp, },
  {enProbaAppCapital, frProbaAppCapital, esProbaAppCapital, deProbaAppCapital, ptProbaAppCapital, },
  {enProbability, frProbability, esProbability, deProbability, ptProbability, },
  {enProduct, frProduct, esProduct, deProduct, ptProduct, },
  {enProtonMassTag, frProtonMassTag, esProtonMassTag, deProtonMassTag, ptProtonMassTag, },
  {enPython1J, frPython1J, esPython1J, dePython1J, ptPython1J, },
  {enPythonAbs, frPythonAbs, esPythonAbs, dePythonAbs, ptPythonAbs, },
  {enPythonAcos, frPythonAcos, esPythonAcos, dePythonAcos, ptPythonAcos, },
  {enPythonAcosh, frPythonAcosh, esPythonAcosh, dePythonAcosh, ptPythonAcosh, },
  {enPythonAmpersand, frPythonAmpersand, esPythonAmpersand, dePythonAmpersand, ptPythonAmpersand, },
  {enPythonAsin, frPythonAsin, esPythonAsin, dePythonAsin, ptPythonAsin, },
  {enPythonAsinh, frPythonAsinh, esPythonAsinh, dePythonAsinh, ptPythonAsinh, },
  {enPythonAtan, frPythonAtan, esPythonAtan, dePythonAtan, ptPythonAtan, },
  {enPythonAtan2, frPythonAtan2, esPythonAtan2, dePythonAtan2, ptPythonAtan2, },
  {enPythonAtanh, frPythonAtanh, esPythonAtanh, dePythonAtanh, ptPythonAtanh, },
  {enPythonBin, frPythonBin, esPythonBin, dePythonBin, ptPythonBin, },
  {enPythonCeil, frPythonCeil, esPythonCeil, dePythonCeil, ptPythonCeil, },
  {enPythonChoice, frPythonChoice, esPythonChoice, dePythonChoice, ptPythonChoice, },
  {enPythonCmathFunction, frPythonCmathFunction, esPythonCmathFunction, dePythonCmathFunction, ptPythonCmathFunction, },
  {enPythonColor, frPythonColor, esPythonColor, dePythonColor, ptPythonColor, },
  {enPythonComplex, frPythonComplex, esPythonComplex, dePythonComplex, ptPythonComplex, },
  {enPythonConstantE, frPythonConstantE, esPythonConstantE, dePythonConstantE, ptPythonConstantE, },
  {enPythonConstantPi, frPythonConstantPi, esPythonConstantPi, dePythonConstantPi, ptPythonConstantPi, },
  {enPythonCopySign, frPythonCopySign, esPythonCopySign, dePythonCopySign, ptPythonCopySign, },
  {enPythonCos, frPythonCos, esPythonCos, dePythonCos, ptPythonCos, },
  {enPythonCosh, frPythonCosh, esPythonCosh, dePythonCosh, ptPythonCosh, },
  {enPythonDegrees, frPythonDegrees, esPythonDegrees, dePythonDegrees, ptPythonDegrees, },
  {enPythonDivMod, frPythonDivMod, esPythonDivMod, dePythonDivMod, ptPythonDivMod, },
  {enPythonDrawString, frPythonDrawString, esPythonDrawString, dePythonDrawString, ptPythonDrawString, },
  {enPythonErf, frPythonErf, esPythonErf, dePythonErf, ptPythonErf, },
  {enPythonErfc, frPythonErfc, esPythonErfc, dePythonErfc, ptPythonErfc, },
  {enPythonEval, frPythonEval, esPythonEval, dePythonEval, ptPythonEval, },
  {enPythonExp, frPythonExp, esPythonExp, dePythonExp, ptPythonExp, },
  {enPythonExpm1, frPythonExpm1, esPythonExpm1, dePythonExpm1, ptPythonExpm1, },
  {enPythonFabs, frPythonFabs, esPythonFabs, dePythonFabs, ptPythonFabs, },
  {enPythonFillRect, frPythonFillRect, esPythonFillRect, dePythonFillRect, ptPythonFillRect, },
  {enPythonFloat, frPythonFloat, esPythonFloat, dePythonFloat, ptPythonFloat, },
  {enPythonFloor, frPythonFloor, esPythonFloor, dePythonFloor, ptPythonFloor, },
  {enPythonFmod, frPythonFmod, esPythonFmod, dePythonFmod, ptPythonFmod, },
  {enPythonFrExp, frPythonFrExp, esPythonFrExp, dePythonFrExp, ptPythonFrExp, },
  {enPythonGamma, frPythonGamma, esPythonGamma, dePythonGamma, ptPythonGamma, },
  {enPythonGetPixel, frPythonGetPixel, esPythonGetPixel, dePythonGetPixel, ptPythonGetPixel, },
  {enPythonGetrandbits, frPythonGetrandbits, esPythonGetrandbits, dePythonGetrandbits, ptPythonGetrandbits, },
  {enPythonHex, frPythonHex, esPythonHex, dePythonHex, ptPythonHex, },
  {enPythonImag, frPythonImag, esPythonImag, dePythonImag, ptPythonImag, },
  {enPythonImportCmath, frPythonImportCmath, esPythonImportCmath, dePythonImportCmath, ptPythonImportCmath, },
  {enPythonImportFromCmath, frPythonImportFromCmath, esPythonImportFromCmath, dePythonImportFromCmath, ptPythonImportFromCmath, },
  {enPythonImportFromKandinsky, frPythonImportFromKandinsky, esPythonImportFromKandinsky, dePythonImportFromKandinsky, ptPythonImportFromKandinsky, },
  {enPythonImportFromMath, frPythonImportFromMath, esPythonImportFromMath, dePythonImportFromMath, ptPythonImportFromMath, },
  {enPythonImportFromRandom, frPythonImportFromRandom, esPythonImportFromRandom, dePythonImportFromRandom, ptPythonImportFromRandom, },
  {enPythonImportFromTurtle, frPythonImportFromTurtle, esPythonImportFromTurtle, dePythonImportFromTurtle, ptPythonImportFromTurtle, },
  {enPythonImportKandinsky, frPythonImportKandinsky, esPythonImportKandinsky, dePythonImportKandinsky, ptPythonImportKandinsky, },
  {enPythonImportMath, frPythonImportMath, esPythonImportMath, dePythonImportMath, ptPythonImportMath, },
  {enPythonImportRandom, frPythonImportRandom, esPythonImportRandom, dePythonImportRandom, ptPythonImportRandom, },
  {enPythonImportTurtle, frPythonImportTurtle, esPythonImportTurtle, dePythonImportTurtle, ptPythonImportTurtle, },
  {enPythonInput, frPythonInput, esPythonInput, dePythonInput, ptPythonInput, },
  {enPythonInt, frPythonInt, esPythonInt, dePythonInt, ptPythonInt, },
  {enPythonIsFinite, frPythonIsFinite, esPythonIsFinite, dePythonIsFinite, ptPythonIsFinite, },
  {enPythonIsInfinite, frPythonIsInfinite, esPythonIsInfinite, dePythonIsInfinite, ptPythonIsInfinite, },
  {enPythonIsNaN, frPythonIsNaN, esPythonIsNaN, dePythonIsNaN, ptPythonIsNaN, },
  {enPythonKandinskyFunction, frPythonKandinskyFunction, esPythonKandinskyFunction, dePythonKandinskyFunction, ptPythonKandinskyFunction, },
  {enPythonLF, frPythonLF, esPythonLF, dePythonLF, ptPythonLF, },
  {enPythonLdexp, frPythonLdexp, esPythonLdexp, dePythonLdexp, ptPythonLdexp, },
  {enPythonLength, frPythonLength, esPythonLength, dePythonLength, ptPythonLength, },
  {enPythonLgamma, frPythonLgamma, esPythonLgamma, dePythonLgamma, ptPythonLgamma, },
  {enPythonLog, frPythonLog, esPythonLog, dePythonLog, ptPythonLog, },
  {enPythonLog10, frPythonLog10, esPythonLog10, dePythonLog10, ptPythonLog10, },
  {enPythonLog2, frPythonLog2, esPythonLog2, dePythonLog2, ptPythonLog2, },
  {enPythonMathFunction, frPythonMathFunction, esPythonMathFunction, dePythonMathFunction, ptPythonMathFunction, },
  {enPythonMax, frPythonMax, esPythonMax, dePythonMax, ptPythonMax, },
  {enPythonMin, frPythonMin, esPythonMin, dePythonMin, ptPythonMin, },
  {enPythonModf, frPythonModf, esPythonModf, dePythonModf, ptPythonModf, },
  {enPythonOct, frPythonOct, esPythonOct, dePythonOct, ptPythonOct, },
  {enPythonPercent, frPythonPercent, esPythonPercent, dePythonPercent, ptPythonPercent, },
  {enPythonPhase, frPythonPhase, esPythonPhase, dePythonPhase, ptPythonPhase, },
  {enPythonPolar, frPythonPolar, esPythonPolar, dePythonPolar, ptPythonPolar, },
  {enPythonPound, frPythonPound, esPythonPound, dePythonPound, ptPythonPound, },
  {enPythonPower, frPythonPower, esPythonPower, dePythonPower, ptPythonPower, },
  {enPythonPrint, frPythonPrint, esPythonPrint, dePythonPrint, ptPythonPrint, },
  {enPythonRadians, frPythonRadians, esPythonRadians, dePythonRadians, ptPythonRadians, },
  {enPythonRandint, frPythonRandint, esPythonRandint, dePythonRandint, ptPythonRandint, },
  {enPythonRandom, frPythonRandom, esPythonRandom, dePythonRandom, ptPythonRandom, },
  {enPythonRandomFunction, frPythonRandomFunction, esPythonRandomFunction, dePythonRandomFunction, ptPythonRandomFunction, },
  {enPythonRandrange, frPythonRandrange, esPythonRandrange, dePythonRandrange, ptPythonRandrange, },
  {enPythonRangeStartStop, frPythonRangeStartStop, esPythonRangeStartStop, dePythonRangeStartStop, ptPythonRangeStartStop, },
  {enPythonRangeStop, frPythonRangeStop, esPythonRangeStop, dePythonRangeStop, ptPythonRangeStop, },
  {enPythonReal, frPythonReal, esPythonReal, dePythonReal, ptPythonReal, },
  {enPythonRect, frPythonRect, esPythonRect, dePythonRect, ptPythonRect, },
  {enPythonRound, frPythonRound, esPythonRound, dePythonRound, ptPythonRound, },
  {enPythonSeed, frPythonSeed, esPythonSeed, dePythonSeed, ptPythonSeed, },
  {enPythonSetPixel, frPythonSetPixel, esPythonSetPixel, dePythonSetPixel, ptPythonSetPixel, },
  {enPythonSin, frPythonSin, esPythonSin, dePythonSin, ptPythonSin, },
  {enPythonSingleQuote, frPythonSingleQuote, esPythonSingleQuote, dePythonSingleQuote, ptPythonSingleQuote, },
  {enPythonSinh, frPythonSinh, esPythonSinh, dePythonSinh, ptPythonSinh, },
  {enPythonSorted, frPythonSorted, esPythonSorted, dePythonSorted, ptPythonSorted, },
  {enPythonSqrt, frPythonSqrt, esPythonSqrt, dePythonSqrt, ptPythonSqrt, },
  {enPythonSum, frPythonSum, esPythonSum, dePythonSum, ptPythonSum, },
  {enPythonSymbolExp, frPythonSymbolExp, esPythonSymbolExp, dePythonSymbolExp, ptPythonSymbolExp, },
  {enPythonTab, frPythonTab, esPythonTab, dePythonTab, ptPythonTab, },
  {enPythonTan, frPythonTan, esPythonTan, dePythonTan, ptPythonTan, },
  {enPythonTanh, frPythonTanh, esPythonTanh, dePythonTanh, ptPythonTanh, },
  {enPythonTimeFromImport, frPythonTimeFromImport, esPythonTimeFromImport, dePythonTimeFromImport, ptPythonTimeFromImport, },
  {enPythonTimeImport, frPythonTimeImport, esPythonTimeImport, dePythonTimeImport, ptPythonTimeImport, },
  {enPythonTimeMonotonic, frPythonTimeMonotonic, esPythonTimeMonotonic, dePythonTimeMonotonic, ptPythonTimeMonotonic, },
  {enPythonTimePrefix, frPythonTimePrefix, esPythonTimePrefix, dePythonTimePrefix, ptPythonTimePrefix, },
  {enPythonTimeSleep, frPythonTimeSleep, esPythonTimeSleep, dePythonTimeSleep, ptPythonTimeSleep, },
  {enPythonTrunc, frPythonTrunc, esPythonTrunc, dePythonTrunc, ptPythonTrunc, },
  {enPythonTurtleBackward, frPythonTurtleBackward, esPythonTurtleBackward, dePythonTurtleBackward, ptPythonTurtleBackward, },
  {enPythonTurtleBlack, frPythonTurtleBlack, esPythonTurtleBlack, dePythonTurtleBlack, ptPythonTurtleBlack, },
  {enPythonTurtleBlue, frPythonTurtleBlue, esPythonTurtleBlue, dePythonTurtleBlue, ptPythonTurtleBlue, },
  {enPythonTurtleBrown, frPythonTurtleBrown, esPythonTurtleBrown, dePythonTurtleBrown, ptPythonTurtleBrown, },
  {enPythonTurtleCircle, frPythonTurtleCircle, esPythonTurtleCircle, dePythonTurtleCircle, ptPythonTurtleCircle, },
  {enPythonTurtleColor, frPythonTurtleColor, esPythonTurtleColor, dePythonTurtleColor, ptPythonTurtleColor, },
  {enPythonTurtleForward, frPythonTurtleForward, esPythonTurtleForward, dePythonTurtleForward, ptPythonTurtleForward, },
  {enPythonTurtleFunction, frPythonTurtleFunction, esPythonTurtleFunction, dePythonTurtleFunction, ptPythonTurtleFunction, },
  {enPythonTurtleGoto, frPythonTurtleGoto, esPythonTurtleGoto, dePythonTurtleGoto, ptPythonTurtleGoto, },
  {enPythonTurtleGreen, frPythonTurtleGreen, esPythonTurtleGreen, dePythonTurtleGreen, ptPythonTurtleGreen, },
  {enPythonTurtleGrey, frPythonTurtleGrey, esPythonTurtleGrey, dePythonTurtleGrey, ptPythonTurtleGrey, },
  {enPythonTurtleHeading, frPythonTurtleHeading, esPythonTurtleHeading, dePythonTurtleHeading, ptPythonTurtleHeading, },
  {enPythonTurtleHideturtle, frPythonTurtleHideturtle, esPythonTurtleHideturtle, dePythonTurtleHideturtle, ptPythonTurtleHideturtle, },
  {enPythonTurtleIsdown, frPythonTurtleIsdown, esPythonTurtleIsdown, dePythonTurtleIsdown, ptPythonTurtleIsdown, },
  {enPythonTurtleLeft, frPythonTurtleLeft, esPythonTurtleLeft, dePythonTurtleLeft, ptPythonTurtleLeft, },
  {enPythonTurtleOrange, frPythonTurtleOrange, esPythonTurtleOrange, dePythonTurtleOrange, ptPythonTurtleOrange, },
  {enPythonTurtlePendown, frPythonTurtlePendown, esPythonTurtlePendown, dePythonTurtlePendown, ptPythonTurtlePendown, },
  {enPythonTurtlePensize, frPythonTurtlePensize, esPythonTurtlePensize, dePythonTurtlePensize, ptPythonTurtlePensize, },
  {enPythonTurtlePenup, frPythonTurtlePenup, esPythonTurtlePenup, dePythonTurtlePenup, ptPythonTurtlePenup, },
  {enPythonTurtlePink, frPythonTurtlePink, esPythonTurtlePink, dePythonTurtlePink, ptPythonTurtlePink, },
  {enPythonTurtlePosition, frPythonTurtlePosition, esPythonTurtlePosition, dePythonTurtlePosition, ptPythonTurtlePosition, },
  {enPythonTurtlePurple, frPythonTurtlePurple, esPythonTurtlePurple, dePythonTurtlePurple, ptPythonTurtlePurple, },
  {enPythonTurtleRed, frPythonTurtleRed, esPythonTurtleRed, dePythonTurtleRed, ptPythonTurtleRed, },
  {enPythonTurtleReset, frPythonTurtleReset, esPythonTurtleReset, dePythonTurtleReset, ptPythonTurtleReset, },
  {enPythonTurtleRight, frPythonTurtleRight, esPythonTurtleRight, dePythonTurtleRight, ptPythonTurtleRight, },
  {enPythonTurtleSetheading, frPythonTurtleSetheading, esPythonTurtleSetheading, dePythonTurtleSetheading, ptPythonTurtleSetheading, },
  {enPythonTurtleSetposition, frPythonTurtleSetposition, esPythonTurtleSetposition, dePythonTurtleSetposition, ptPythonTurtleSetposition, },
  {enPythonTurtleShowturtle, frPythonTurtleShowturtle, esPythonTurtleShowturtle, dePythonTurtleShowturtle, ptPythonTurtleShowturtle, },
  {enPythonTurtleSpeed, frPythonTurtleSpeed, esPythonTurtleSpeed, dePythonTurtleSpeed, ptPythonTurtleSpeed, },
  {enPythonTurtleWhite, frPythonTurtleWhite, esPythonTurtleWhite, dePythonTurtleWhite, ptPythonTurtleWhite, },
  {enPythonTurtleYellow, frPythonTurtleYellow, esPythonTurtleYellow, dePythonTurtleYellow, ptPythonTurtleYellow, },
  {enPythonUniform, frPythonUniform, esPythonUniform, dePythonUniform, ptPythonUniform, },
  {enPythonVerticalBar, frPythonVerticalBar, esPythonVerticalBar, dePythonVerticalBar, ptPythonVerticalBar, },
  {enQuadratic, frQuadratic, esQuadratic, deQuadratic, ptQuadratic, },
  {enQuartic, frQuartic, esQuartic, deQuartic, ptQuartic, },
  {enQuotient, frQuotient, esQuotient, deQuotient, ptQuotient, },
  {enRad, frRad, esRad, deRad, ptRad, },
  {enRadian, frRadian, esRadian, deRadian, ptRadian, },
  {enRandomAndApproximation, frRandomAndApproximation, esRandomAndApproximation, deRandomAndApproximation, ptRandomAndApproximation, },
  {enRandomFloat, frRandomFloat, esRandomFloat, deRandomFloat, ptRandomFloat, },
  {enRandomInteger, frRandomInteger, esRandomInteger, deRandomInteger, ptRandomInteger, },
  {enRange, frRange, esRange, deRange, ptRange, },
  {enReal, frReal, esReal, deReal, ptReal, },
  {enRealPart, frRealPart, esRealPart, deRealPart, ptRealPart, },
  {enRectangleWidth, frRectangleWidth, esRectangleWidth, deRectangleWidth, ptRectangleWidth, },
  {enReg, frReg, esReg, deReg, ptReg, },
  {enRegression, frRegression, esRegression, deRegression, ptRegression, },
  {enRegressionApp, frRegressionApp, esRegressionApp, deRegressionApp, ptRegressionApp, },
  {enRegressionAppCapital, frRegressionAppCapital, esRegressionAppCapital, deRegressionAppCapital, ptRegressionAppCapital, },
  {enRegressionCurve, frRegressionCurve, esRegressionCurve, deRegressionCurve, ptRegressionCurve, },
  {enRemainder, frRemainder, esRemainder, deRemainder, ptRemainder, },
  {enRename, frRename, esRename, deRename, ptRename, },
  {enRepetitionNumber, frRepetitionNumber, esRepetitionNumber, deRepetitionNumber, ptRepetitionNumber, },
  {enRequireEquation, frRequireEquation, esRequireEquation, deRequireEquation, ptRequireEquation, },
  {enReservedName, frReservedName, esReservedName, deReservedName, ptReservedName, },
  {enResolveEquation, frResolveEquation, esResolveEquation, deResolveEquation, ptResolveEquation, },
  {enResolveSystem, frResolveSystem, esResolveSystem, deResolveSystem, ptResolveSystem, },
  {enRoundAbscissa, frRoundAbscissa, esRoundAbscissa, deRoundAbscissa, ptRoundAbscissa, },
  {enRounding, frRounding, esRounding, deRounding, ptRounding, },
  {enRpnApp, frRpnApp, esRpnApp, deRpnApp, ptRpnApp, },
  {enRpnAppCapital, frRpnAppCapital, esRpnAppCapital, deRpnAppCapital, ptRpnAppCapital, },
  {enSampleStandardDeviationS, frSampleStandardDeviationS, esSampleStandardDeviationS, deSampleStandardDeviationS, ptSampleStandardDeviationS, },
  {enSci, frSci, esSci, deSci, ptSci, },
  {enScientific, frScientific, esScientific, deScientific, ptScientific, },
  {enScriptOptions, frScriptOptions, esScriptOptions, deScriptOptions, ptScriptOptions, },
  {enSearchInverval, frSearchInverval, esSearchInverval, deSearchInverval, ptSearchInverval, },
  {enSelectFirstTerm, frSelectFirstTerm, esSelectFirstTerm, deSelectFirstTerm, ptSelectFirstTerm, },
  {enSelectLastTerm, frSelectLastTerm, esSelectLastTerm, deSelectLastTerm, ptSelectLastTerm, },
  {enSelectLowerBound, frSelectLowerBound, esSelectLowerBound, deSelectLowerBound, ptSelectLowerBound, },
  {enSelectUpperBound, frSelectUpperBound, esSelectUpperBound, deSelectUpperBound, ptSelectUpperBound, },
  {enSequenceApp, frSequenceApp, esSequenceApp, deSequenceApp, ptSequenceApp, },
  {enSequenceAppCapital, frSequenceAppCapital, esSequenceAppCapital, deSequenceAppCapital, ptSequenceAppCapital, },
  {enSequenceColor, frSequenceColor, esSequenceColor, deSequenceColor, ptSequenceColor, },
  {enSequenceOptions, frSequenceOptions, esSequenceOptions, deSequenceOptions, ptSequenceOptions, },
  {enSequenceTab, frSequenceTab, esSequenceTab, deSequenceTab, ptSequenceTab, },
  {enSequenceType, frSequenceType, esSequenceType, deSequenceType, ptSequenceType, },
  {enSerialNumber, frSerialNumber, esSerialNumber, deSerialNumber, ptSerialNumber, },
  {enSettingsApp, frSettingsApp, esSettingsApp, deSettingsApp, ptSettingsApp, },
  {enSettingsAppCapital, frSettingsAppCapital, esSettingsAppCapital, deSettingsAppCapital, ptSettingsAppCapital, },
  {enSignificantFigures, frSignificantFigures, esSignificantFigures, deSignificantFigures, ptSignificantFigures, },
  {enSingleRecurrence, frSingleRecurrence, esSingleRecurrence, deSingleRecurrence, ptSingleRecurrence, },
  {enSize, frSize, esSize, deSize, ptSize, },
  {enSizes1, frSizes1, esSizes1, deSizes1, ptSizes1, },
  {enSizes2, frSizes2, esSizes2, deSizes2, ptSizes2, },
  {enSizes3, frSizes3, esSizes3, deSizes3, ptSizes3, },
  {enSkip, frSkip, esSkip, deSkip, ptSkip, },
  {enSoftwareVersion, frSoftwareVersion, esSoftwareVersion, deSoftwareVersion, ptSoftwareVersion, },
  {enSolution, frSolution, esSolution, deSolution, ptSolution, },
  {enSolverApp, frSolverApp, esSolverApp, deSolverApp, ptSolverApp, },
  {enSolverAppCapital, frSolverAppCapital, esSolverAppCapital, deSolverAppCapital, ptSolverAppCapital, },
  {enSort, frSort, esSort, deSort, ptSort, },
  {enSpeedOfLightTag, frSpeedOfLightTag, esSpeedOfLightTag, deSpeedOfLightTag, ptSpeedOfLightTag, },
  {enSquareSum, frSquareSum, esSquareSum, deSquareSum, ptSquareSum, },
  {enStandardDeviation, frStandardDeviation, esStandardDeviation, deStandardDeviation, ptStandardDeviation, },
  {enStandardDeviationSigma, frStandardDeviationSigma, esStandardDeviationSigma, deStandardDeviationSigma, ptStandardDeviationSigma, },
  {enStatTab, frStatTab, esStatTab, deStatTab, ptStatTab, },
  {enStatsApp, frStatsApp, esStatsApp, deStatsApp, ptStatsApp, },
  {enStatsAppCapital, frStatsAppCapital, esStatsAppCapital, deStatsAppCapital, ptStatsAppCapital, },
  {enStep, frStep, esStep, deStep, ptStep, },
  {enStorageMemoryFull1, frStorageMemoryFull1, esStorageMemoryFull1, deStorageMemoryFull1, ptStorageMemoryFull1, },
  {enStorageMemoryFull2, frStorageMemoryFull2, esStorageMemoryFull2, deStorageMemoryFull2, ptStorageMemoryFull2, },
  {enStoreExpressionNotAllowed, frStoreExpressionNotAllowed, esStoreExpressionNotAllowed, deStoreExpressionNotAllowed, ptStoreExpressionNotAllowed, },
  {enStudent, frStudent, esStudent, deStudent, ptStudent, },
  {enStudentDistribution, frStudentDistribution, esStudentDistribution, deStudentDistribution, ptStudentDistribution, },
  {enSuccessProbability, frSuccessProbability, esSuccessProbability, deSuccessProbability, ptSuccessProbability, },
  {enSum, frSum, esSum, deSum, ptSum, },
  {enSym, frSym, esSym, deSym, ptSym, },
  {enSymbolMultiplication, frSymbolMultiplication, esSymbolMultiplication, deSymbolMultiplication, ptSymbolMultiplication, },
  {enSymbolMultiplicationAutoSymbol, frSymbolMultiplicationAutoSymbol, esSymbolMultiplicationAutoSymbol, deSymbolMultiplicationAutoSymbol, ptSymbolMultiplicationAutoSymbol, },
  {enSymbolMultiplicationCross, frSymbolMultiplicationCross, esSymbolMultiplicationCross, deSymbolMultiplicationCross, ptSymbolMultiplicationCross, },
  {enSymbolMultiplicationMiddleDot, frSymbolMultiplicationMiddleDot, esSymbolMultiplicationMiddleDot, deSymbolMultiplicationMiddleDot, ptSymbolMultiplicationMiddleDot, },
  {enSymbolMultiplicationStar, frSymbolMultiplicationStar, esSymbolMultiplicationStar, deSymbolMultiplicationStar, ptSymbolMultiplicationStar, },
  {enSyntaxError, frSyntaxError, esSyntaxError, deSyntaxError, ptSyntaxError, },
  {enTEnd, frTEnd, esTEnd, deTEnd, ptTEnd, },
  {enTStart, frTStart, esTStart, deTStart, ptTStart, },
  {enTangent, frTangent, esTangent, deTangent, ptTangent, },
  {enTermSum, frTermSum, esTermSum, deTermSum, ptTermSum, },
  {enThermodynamics, frThermodynamics, esThermodynamics, deThermodynamics, ptThermodynamics, },
  {enThetaEnd, frThetaEnd, esThetaEnd, deThetaEnd, ptThetaEnd, },
  {enThetaStart, frThetaStart, esThetaStart, deThetaStart, ptThetaStart, },
  {enThirdQuartile, frThirdQuartile, esThirdQuartile, deThirdQuartile, ptThirdQuartile, },
  {enToZoom, frToZoom, esToZoom, deToZoom, ptToZoom, },
  {enTooManyVariables, frTooManyVariables, esTooManyVariables, deTooManyVariables, ptTooManyVariables, },
  {enToolbox, frToolbox, esToolbox, deToolbox, ptToolbox, },
  {enTotalSize, frTotalSize, esTotalSize, deTotalSize, ptTotalSize, },
  {enTrace, frTrace, esTrace, deTrace, ptTrace, },
  {enTranspose, frTranspose, esTranspose, deTranspose, ptTranspose, },
  {enTrigonometric, frTrigonometric, esTrigonometric, deTrigonometric, ptTrigonometric, },
  {enTrigonometrical, frTrigonometrical, esTrigonometrical, deTrigonometrical, ptTrigonometrical, },
  {enUSBConnected, frUSBConnected, esUSBConnected, deUSBConnected, ptUSBConnected, },
  {enUndefinedEquation, frUndefinedEquation, esUndefinedEquation, deUndefinedEquation, ptUndefinedEquation, },
  {enUndefinedValue, frUndefinedValue, esUndefinedValue, deUndefinedValue, ptUndefinedValue, },
  {enUniformDistribution, frUniformDistribution, esUniformDistribution, deUniformDistribution, ptUniformDistribution, },
  {enUniforme, frUniforme, esUniforme, deUniforme, ptUniforme, },
  {enUnitOfMesurement, frUnitOfMesurement, esUnitOfMesurement, deUnitOfMesurement, ptUnitOfMesurement, },
  {enUnrealEquation, frUnrealEquation, esUnrealEquation, deUnrealEquation, ptUnrealEquation, },
  {enUpdateAvailable, frUpdateAvailable, esUpdateAvailable, deUpdateAvailable, ptUpdateAvailable, },
  {enUpdateMessage1, frUpdateMessage1, esUpdateMessage1, deUpdateMessage1, ptUpdateMessage1, },
  {enUpdateMessage2, frUpdateMessage2, esUpdateMessage2, deUpdateMessage2, ptUpdateMessage2, },
  {enUpdateMessage3, frUpdateMessage3, esUpdateMessage3, deUpdateMessage3, ptUpdateMessage3, },
  {enUpdateMessage4, frUpdateMessage4, esUpdateMessage4, deUpdateMessage4, ptUpdateMessage4, },
  {enUpdatePopUp, frUpdatePopUp, esUpdatePopUp, deUpdatePopUp, ptUpdatePopUp, },
  {enUseEquationModel, frUseEquationModel, esUseEquationModel, deUseEquationModel, ptUseEquationModel, },
  {enUsername, frUsername, esUsername, deUsername, ptUsername, },
  {enVacuum_permeabilityTag, frVacuum_permeabilityTag, esVacuum_permeabilityTag, deVacuum_permeabilityTag, ptVacuum_permeabilityTag, },
  {enVacuum_permittivityTag, frVacuum_permittivityTag, esVacuum_permittivityTag, deVacuum_permittivityTag, ptVacuum_permittivityTag, },
  {enValueNotReachedByFunction, frValueNotReachedByFunction, esValueNotReachedByFunction, deValueNotReachedByFunction, ptValueNotReachedByFunction, },
  {enValueNotReachedByRegression, frValueNotReachedByRegression, esValueNotReachedByRegression, deValueNotReachedByRegression, ptValueNotReachedByRegression, },
  {enValueNotReachedBySequence, frValueNotReachedBySequence, esValueNotReachedBySequence, deValueNotReachedBySequence, ptValueNotReachedBySequence, },
  {enValues1, frValues1, esValues1, deValues1, ptValues1, },
  {enValues2, frValues2, esValues2, deValues2, ptValues2, },
  {enValues3, frValues3, esValues3, deValues3, ptValues3, },
  {enValuesTab, frValuesTab, esValuesTab, deValuesTab, ptValuesTab, },
  {enVariables, frVariables, esVariables, deVariables, ptVariables, },
  {enWarning, frWarning, esWarning, deWarning, ptWarning, },
  {enXEnd, frXEnd, esXEnd, deXEnd, ptXEnd, },
  {enXPrediction, frXPrediction, esXPrediction, deXPrediction, ptXPrediction, },
  {enXStart, frXStart, esXStart, deXStart, ptXStart, },
  {enYPrediction, frYPrediction, esYPrediction, deYPrediction, ptYPrediction, },
  {enYearLightTag, frYearLightTag, esYearLightTag, deYearLightTag, ptYearLightTag, },
  {enZeros, frZeros, esZeros, deZeros, ptZeros, },
  {enZoom, frZoom, esZoom, deZoom, ptZoom, },
};

const char * translate(Message m, Language l) {
  assert(m != Message::LocalizedMessageMarker);
  int localizedMessageOffset = (int)Message::LocalizedMessageMarker+1;
  if ((int)m < localizedMessageOffset) {
    assert(universalMessages[(int)m] != nullptr);
    return universalMessages[(int)m];
  }
  int languageIndex = (int)l;
  if (l == Language::Default) {
    languageIndex = (int) GlobalPreferences::sharedGlobalPreferences()->language();
  }
  assert(languageIndex > 0);
  int messageIndex = (int)m - localizedMessageOffset;
  assert((messageIndex*NumberOfLanguages+languageIndex-1)*sizeof(char *) < sizeof(messages));
  return messages[messageIndex][languageIndex-1];
}

}
