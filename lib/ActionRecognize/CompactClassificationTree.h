/*
 * File: CompactClassificationTree.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 26-Apr-2023 21:24:20
 */

#ifndef COMPACTCLASSIFICATIONTREE_H
#define COMPACTCLASSIFICATIONTREE_H

/* Include Files */
#include "ActionRecognize_internal_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void ab_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void bb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void c_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void c_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[41], const double obj_Children[82],
    const double obj_CutPoint[41], const boolean_T obj_NanCutPoints[41],
    const double obj_ClassNames[5], const double obj_Cost[25],
    const double obj_ClassProbability[205], const double Xin[60],
    double *labels, double scores[5]);

void cb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void d_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void db_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void e_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void f_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void g_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void h_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void i_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void j_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void k_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void l_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void m_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void n_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void o_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void p_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void q_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void r_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void s_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void t_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void u_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void v_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void w_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void x_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

void y_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[41], double obj_Children[82],
    double obj_CutPoint[41], boolean_T obj_NanCutPoints[41],
    boolean_T obj_InfCutPoints[41], double obj_ClassNames[5],
    int obj_ClassNamesLength[5],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[5],
    boolean_T obj_ClassLogicalIndices[5], double obj_Cost[25],
    double obj_ClassProbability[205]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationTree.h
 *
 * [EOF]
 */
