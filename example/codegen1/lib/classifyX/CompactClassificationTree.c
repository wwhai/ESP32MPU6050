/*
 * File: CompactClassificationTree.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "CompactClassificationTree.h"
#include "categorical.h"
#include "cellstr_unique.h"
#include "classifyX_data.h"
#include "classifyX_types.h"
#include "rt_nonfinite.h"
#include "strtrim.h"
#include "rt_nonfinite.h"

/* Type Definitions */
#ifndef typedef_emxArray_cell_wrap_0_4
#define typedef_emxArray_cell_wrap_0_4
typedef struct {
  cell_wrap_0 data[4];
  int size[1];
} emxArray_cell_wrap_0_4;
#endif /* typedef_emxArray_cell_wrap_0_4 */

/* Function Definitions */
/*
 * Arguments    : const double obj_CutPredictorIndex[73]
 *                const double obj_Children[146]
 *                const double obj_CutPoint[73]
 *                const double obj_PruneList_data[]
 *                const boolean_T obj_NanCutPoints[73]
 *                const unsigned char obj_ClassNames_codes[4]
 *                const char obj_ClassNames_categoryNames[4]
 *                const double obj_Prior[4]
 *                const double obj_Cost[16]
 *                const double obj_ClassProbability[292]
 *                const double Xin[6]
 *                categorical *labels
 * Return Type  : void
 */
void c_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[73], const double obj_Children[146],
    const double obj_CutPoint[73], const double obj_PruneList_data[],
    const boolean_T obj_NanCutPoints[73],
    const unsigned char obj_ClassNames_codes[4],
    const char obj_ClassNames_categoryNames[4], const double obj_Prior[4],
    const double obj_Cost[16], const double obj_ClassProbability[292],
    const double Xin[6], categorical *labels)
{
  static const char cv[11] = {'<', 'u', 'n', 'd', 'e', 'f',
                              'i', 'n', 'e', 'd', '>'};
  categorical labelTemp;
  cell_wrap_0 names[5];
  cell_wrap_0 rv[4];
  cell_wrap_0 tempnames[4];
  cell_wrap_0 inData;
  cell_wrap_0 ycell;
  emxArray_cell_wrap_0_4 r;
  emxArray_cell_wrap_0_4 r1;
  double a__4[4];
  double d;
  double ex;
  int b_j1;
  int i;
  int idx;
  int k;
  int m;
  boolean_T b[4];
  boolean_T exitg1;
  boolean_T y;
  m = 0;
  exitg1 = false;
  while (!(exitg1 || (obj_PruneList_data[m] <= 0.0))) {
    d = Xin[(int)obj_CutPredictorIndex[m] - 1];
    if (rtIsNaN(d) || obj_NanCutPoints[m]) {
      exitg1 = true;
    } else if (d < obj_CutPoint[m]) {
      m = (int)obj_Children[m << 1] - 1;
    } else {
      m = (int)obj_Children[(m << 1) + 1] - 1;
    }
  }
  for (i = 0; i < 4; i++) {
    k = i << 2;
    a__4[i] = ((obj_ClassProbability[m] * obj_Cost[k] +
                obj_ClassProbability[m + 73] * obj_Cost[k + 1]) +
               obj_ClassProbability[m + 146] * obj_Cost[k + 2]) +
              obj_ClassProbability[m + 219] * obj_Cost[k + 3];
  }
  ex = obj_Prior[0];
  b_j1 = 0;
  if (obj_Prior[0] < obj_Prior[1]) {
    ex = obj_Prior[1];
    b_j1 = 1;
  }
  if (ex < obj_Prior[2]) {
    ex = obj_Prior[2];
    b_j1 = 2;
  }
  if (ex < obj_Prior[3]) {
    b_j1 = 3;
  }
  if (!rtIsNaN(a__4[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!rtIsNaN(a__4[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    idx = 1;
  } else {
    ex = a__4[idx - 1];
    i = idx + 1;
    for (k = i; k < 5; k++) {
      d = a__4[k - 1];
      if (ex > d) {
        ex = d;
        idx = k;
      }
    }
  }
  b[0] = rtIsNaN(obj_ClassProbability[m]);
  b[1] = rtIsNaN(obj_ClassProbability[m + 73]);
  b[2] = rtIsNaN(obj_ClassProbability[m + 146]);
  b[3] = rtIsNaN(obj_ClassProbability[m + 219]);
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!b[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  names[0].f1.size[0] = 1;
  names[0].f1.size[1] = 11;
  for (i = 0; i < 11; i++) {
    names[0].f1.data[i] = cv[i];
  }
  names[1].f1.size[0] = 1;
  names[1].f1.size[1] = 1;
  names[1].f1.data[0] = '1';
  names[2].f1.size[0] = 1;
  names[2].f1.size[1] = 1;
  names[2].f1.data[0] = '2';
  names[3].f1.size[0] = 1;
  names[3].f1.size[1] = 1;
  names[3].f1.data[0] = '3';
  names[4].f1.size[0] = 1;
  names[4].f1.size[1] = 1;
  names[4].f1.data[0] = '4';
  ycell.f1.size[0] = 1;
  i = (int)(obj_ClassNames_codes[b_j1] + 1U);
  k = i;
  if ((unsigned int)i > 255U) {
    k = 255;
  }
  ycell.f1.size[1] = names[(unsigned char)k - 1].f1.size[1];
  k = i;
  if ((unsigned int)i > 255U) {
    k = 255;
  }
  m = names[(unsigned char)k - 1].f1.size[1];
  for (k = 0; k < m; k++) {
    b_j1 = i;
    if ((unsigned int)i > 255U) {
      b_j1 = 255;
    }
    ycell.f1.data[k] = names[(unsigned char)b_j1 - 1].f1.data[k];
  }
  if (!y) {
    ycell.f1.size[0] = 1;
    ycell.f1.size[1] = 1;
    ycell.f1.data[0] = obj_ClassNames_categoryNames[idx - 1];
  }
  strtrim(ycell.f1.data, ycell.f1.size, inData.f1.data, inData.f1.size);
  for (k = 0; k < 4; k++) {
    labelTemp.categoryNames[k].f1.size[0] = 1;
    labelTemp.categoryNames[k].f1.size[1] = 0;
    b_j1 = 1;
    m = 1;
    if (bv[(unsigned char)obj_ClassNames_categoryNames[k]]) {
      b_j1 = 2;
      m = 0;
    }
    m = (b_j1 <= m);
    rv[k].f1.size[0] = 1;
    rv[k].f1.size[1] = m;
    if (0 <= m - 1) {
      rv[k].f1.data[0] = obj_ClassNames_categoryNames[k];
    }
  }
  cellstr_unique(rv, r.data, &r.size[0]);
  categorical_initDataValueSet(&labelTemp, inData, rv);
  names[0].f1.size[0] = 1;
  names[0].f1.size[1] = 11;
  for (i = 0; i < 11; i++) {
    names[0].f1.data[i] = cv[i];
  }
  names[1].f1.size[0] = 1;
  names[1].f1.size[1] = labelTemp.categoryNames[0].f1.size[1];
  m = labelTemp.categoryNames[0].f1.size[1];
  for (i = 0; i < m; i++) {
    names[1].f1.data[i] = labelTemp.categoryNames[0].f1.data[i];
  }
  names[2].f1.size[0] = 1;
  names[2].f1.size[1] = labelTemp.categoryNames[1].f1.size[1];
  m = labelTemp.categoryNames[1].f1.size[1];
  for (i = 0; i < m; i++) {
    names[2].f1.data[i] = labelTemp.categoryNames[1].f1.data[i];
  }
  names[3].f1.size[0] = 1;
  names[3].f1.size[1] = labelTemp.categoryNames[2].f1.size[1];
  m = labelTemp.categoryNames[2].f1.size[1];
  for (i = 0; i < m; i++) {
    names[3].f1.data[i] = labelTemp.categoryNames[2].f1.data[i];
  }
  names[4].f1.size[0] = 1;
  names[4].f1.size[1] = labelTemp.categoryNames[3].f1.size[1];
  m = labelTemp.categoryNames[3].f1.size[1];
  for (i = 0; i < m; i++) {
    names[4].f1.data[i] = labelTemp.categoryNames[3].f1.data[i];
  }
  tempnames[0].f1.size[0] = 1;
  tempnames[0].f1.size[1] = 1;
  tempnames[0].f1.data[0] = '1';
  tempnames[1].f1.size[0] = 1;
  tempnames[1].f1.size[1] = 1;
  tempnames[1].f1.data[0] = '2';
  tempnames[2].f1.size[0] = 1;
  tempnames[2].f1.size[1] = 1;
  tempnames[2].f1.data[0] = '3';
  tempnames[3].f1.size[0] = 1;
  tempnames[3].f1.size[1] = 1;
  tempnames[3].f1.data[0] = '4';
  i = (int)(labelTemp.codes + 1U);
  if (labelTemp.codes + 1U > 255U) {
    i = 255;
  }
  strtrim(names[(unsigned char)i - 1].f1.data,
          names[(unsigned char)i - 1].f1.size, inData.f1.data, inData.f1.size);
  labels->categoryNames[0].f1.size[0] = 1;
  labels->categoryNames[0].f1.size[1] = 0;
  strtrim(tempnames[0].f1.data, tempnames[0].f1.size, rv[0].f1.data,
          rv[0].f1.size);
  labels->categoryNames[1].f1.size[0] = 1;
  labels->categoryNames[1].f1.size[1] = 0;
  strtrim(tempnames[1].f1.data, tempnames[1].f1.size, rv[1].f1.data,
          rv[1].f1.size);
  labels->categoryNames[2].f1.size[0] = 1;
  labels->categoryNames[2].f1.size[1] = 0;
  strtrim(tempnames[2].f1.data, tempnames[2].f1.size, rv[2].f1.data,
          rv[2].f1.size);
  labels->categoryNames[3].f1.size[0] = 1;
  labels->categoryNames[3].f1.size[1] = 0;
  strtrim(tempnames[3].f1.data, tempnames[3].f1.size, rv[3].f1.data,
          rv[3].f1.size);
  cellstr_unique(rv, r1.data, &r1.size[0]);
  categorical_initDataValueSet(labels, inData, rv);
}

/*
 * File trailer for CompactClassificationTree.c
 *
 * [EOF]
 */
