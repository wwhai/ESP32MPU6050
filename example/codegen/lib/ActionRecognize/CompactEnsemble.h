/*
 * File: CompactEnsemble.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 27-Apr-2023 21:14:07
 */

#ifndef COMPACTENSEMBLE_H
#define COMPACTENSEMBLE_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void CompactEnsemble_ensemblePredict(const boolean_T obj_IsCached[30],
                                     const double obj_LearnerWeights[30],
                                     const double X[60],
                                     const double classnames[5],
                                     double score[5]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactEnsemble.h
 *
 * [EOF]
 */
