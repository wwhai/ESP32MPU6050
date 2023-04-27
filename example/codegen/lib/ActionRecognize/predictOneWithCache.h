/*
 * File: predictOneWithCache.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 27-Apr-2023 21:14:07
 */

#ifndef PREDICTONEWITHCACHE_H
#define PREDICTONEWITHCACHE_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
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
                         double score[5]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for predictOneWithCache.h
 *
 * [EOF]
 */
