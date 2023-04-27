/*
 * File: categorical.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "categorical.h"
#include "classifyX_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : categorical *b
 *                const cell_wrap_0 inputData
 *                const cell_wrap_0 valueSet[4]
 * Return Type  : void
 */
void categorical_initDataValueSet(categorical *b, const cell_wrap_0 inputData,
                                  const cell_wrap_0 valueSet[4])
{
  int exitg2;
  int i;
  int kstr;
  int loop_ub;
  boolean_T b_bool;
  boolean_T exitg1;
  b->categoryNames[0].f1.size[0] = 1;
  b->categoryNames[0].f1.size[1] = valueSet[0].f1.size[1];
  loop_ub = valueSet[0].f1.size[1];
  for (i = 0; i < loop_ub; i++) {
    b->categoryNames[0].f1.data[i] = valueSet[0].f1.data[i];
  }
  b->categoryNames[1].f1.size[0] = 1;
  b->categoryNames[1].f1.size[1] = valueSet[1].f1.size[1];
  loop_ub = valueSet[1].f1.size[1];
  for (i = 0; i < loop_ub; i++) {
    b->categoryNames[1].f1.data[i] = valueSet[1].f1.data[i];
  }
  b->categoryNames[2].f1.size[0] = 1;
  b->categoryNames[2].f1.size[1] = valueSet[2].f1.size[1];
  loop_ub = valueSet[2].f1.size[1];
  for (i = 0; i < loop_ub; i++) {
    b->categoryNames[2].f1.data[i] = valueSet[2].f1.data[i];
  }
  b->categoryNames[3].f1.size[0] = 1;
  b->categoryNames[3].f1.size[1] = valueSet[3].f1.size[1];
  loop_ub = valueSet[3].f1.size[1];
  for (i = 0; i < loop_ub; i++) {
    b->categoryNames[3].f1.data[i] = valueSet[3].f1.data[i];
  }
  i = 0;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 4)) {
    b_bool = false;
    if (inputData.f1.size[1] == valueSet[loop_ub].f1.size[1]) {
      kstr = 0;
      do {
        exitg2 = 0;
        if (kstr <= valueSet[loop_ub].f1.size[1] - 1) {
          if (inputData.f1.data[0] != valueSet[loop_ub].f1.data[0]) {
            exitg2 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }
    if (b_bool) {
      i = loop_ub + 1;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  b->codes = (unsigned char)i;
}

/*
 * File trailer for categorical.c
 *
 * [EOF]
 */
