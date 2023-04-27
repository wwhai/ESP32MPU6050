/*
 * File: CompactClassificationTree.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

#ifndef COMPACTCLASSIFICATIONTREE_H
#define COMPACTCLASSIFICATIONTREE_H

/* Include Files */
#include "classifyX_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void c_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[73], const double obj_Children[146],
    const double obj_CutPoint[73], const double obj_PruneList_data[],
    const boolean_T obj_NanCutPoints[73],
    const unsigned char obj_ClassNames_codes[4],
    const char obj_ClassNames_categoryNames[4], const double obj_Prior[4],
    const double obj_Cost[16], const double obj_ClassProbability[292],
    const double Xin[6], categorical *labels);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationTree.h
 *
 * [EOF]
 */
