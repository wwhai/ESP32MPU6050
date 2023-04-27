/*
 * File: predictOneWithCache.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 27-Apr-2023 21:14:07
 */

/* Include Files */
#include "predictOneWithCache.h"
#include "CompactClassificationTree.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const double X[60]
 *                double cachedScore[5]
 *                double *cachedWeights
 *                const double weak_learner_CutPredictorIndex[41]
 *                const double weak_learner_Children[82]
 *                const double weak_learner_CutPoint[41]
 *                const boolean_T weak_learner_NanCutPoints[41]
 *                const double weak_learner_ClassNames[5]
 *                const double weak_learner_Cost[25]
 *                const double weak_learner_ClassProbability[205]
 *                double learnerWeights
 *                boolean_T *cached
 *                const double classnames[5]
 *                boolean_T initCache
 *                double score[5]
 * Return Type  : void
 */
void predictOneWithCache(const double X[60], double cachedScore[5],
                         double *cachedWeights,
                         const double weak_learner_CutPredictorIndex[41],
                         const double weak_learner_Children[82],
                         const double weak_learner_CutPoint[41],
                         const boolean_T weak_learner_NanCutPoints[41],
                         const double weak_learner_ClassNames[5],
                         const double weak_learner_Cost[25],
                         const double weak_learner_ClassProbability[205],
                         double learnerWeights, boolean_T *cached,
                         const double classnames[5], boolean_T initCache,
                         double score[5])
{
  double b_dv[5];
  double learnerscore[5];
  double absx;
  int iloc[5];
  int exponent;
  int i;
  int k;
  boolean_T tf[5];
  boolean_T exitg1;
  boolean_T y;
  for (k = 0; k < 5; k++) {
    learnerscore[k] = rtNaN;
  }
  for (k = 0; k < 5; k++) {
    iloc[k] = 0;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 5)) {
      absx = fabs(classnames[i] / 2.0);
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
      if (fabs(classnames[i] - weak_learner_ClassNames[k]) < absx) {
        iloc[k] = i + 1;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }
  c_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints, weak_learner_ClassNames,
      weak_learner_Cost, weak_learner_ClassProbability, X, &absx, b_dv);
  for (k = 0; k < 5; k++) {
    learnerscore[iloc[k] - 1] = b_dv[k];
  }
  if (initCache) {
    for (k = 0; k < 5; k++) {
      cachedScore[k] = 0.0;
    }
  } else {
    for (k = 0; k < 5; k++) {
      tf[k] = rtIsNaN(cachedScore[k]);
    }
    y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!tf[k]) {
        k++;
      } else {
        y = true;
        exitg1 = true;
      }
    }
    if (y) {
      for (i = 0; i < 5; i++) {
        if (tf[i]) {
          cachedScore[i] = 0.0;
        }
      }
    }
  }
  if (!*cached) {
    *cached = true;
    for (k = 0; k < 5; k++) {
      cachedScore[k] += learnerscore[k] * learnerWeights;
    }
    *cachedWeights += learnerWeights;
  }
  for (k = 0; k < 5; k++) {
    score[k] = cachedScore[k];
  }
}

/*
 * File trailer for predictOneWithCache.c
 *
 * [EOF]
 */
