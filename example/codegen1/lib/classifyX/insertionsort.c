/*
 * File: insertionsort.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "insertionsort.h"
#include "classifyX_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : int x[4]
 *                const cell_wrap_0 cmp_workspace_c[4]
 * Return Type  : void
 */
void insertionsort(int x[4], const cell_wrap_0 cmp_workspace_c[4])
{
  int exitg2;
  int idx;
  int j;
  int k;
  int n;
  int xc;
  boolean_T exitg1;
  boolean_T varargout_1;
  xc = x[1] - 1;
  idx = 0;
  exitg1 = false;
  while ((!exitg1) && (idx + 1 >= 1)) {
    j = x[idx];
    if (cmp_workspace_c[xc].f1.size[1] <
        cmp_workspace_c[x[idx] - 1].f1.size[1]) {
      n = cmp_workspace_c[xc].f1.size[1];
    } else {
      n = cmp_workspace_c[x[idx] - 1].f1.size[1];
    }
    varargout_1 = (cmp_workspace_c[xc].f1.size[1] <
                   cmp_workspace_c[x[idx] - 1].f1.size[1]);
    k = 0;
    do {
      exitg2 = 0;
      if (k <= n - 1) {
        if (cmp_workspace_c[xc].f1.data[0] !=
            cmp_workspace_c[x[idx] - 1].f1.data[0]) {
          varargout_1 = (cmp_workspace_c[xc].f1.data[0] <
                         cmp_workspace_c[x[idx] - 1].f1.data[0]);
          exitg2 = 1;
        } else {
          k++;
        }
      } else {
        if (cmp_workspace_c[xc].f1.size[1] ==
            cmp_workspace_c[j - 1].f1.size[1]) {
          varargout_1 = (xc + 1 < j);
        }
        exitg2 = 1;
      }
    } while (exitg2 == 0);
    if (varargout_1) {
      x[idx + 1] = x[idx];
      idx--;
    } else {
      exitg1 = true;
    }
  }
  x[idx + 1] = xc + 1;
  xc = x[2] - 1;
  idx = 1;
  exitg1 = false;
  while ((!exitg1) && (idx + 1 >= 1)) {
    j = x[idx];
    if (cmp_workspace_c[xc].f1.size[1] <
        cmp_workspace_c[x[idx] - 1].f1.size[1]) {
      n = cmp_workspace_c[xc].f1.size[1];
    } else {
      n = cmp_workspace_c[x[idx] - 1].f1.size[1];
    }
    varargout_1 = (cmp_workspace_c[xc].f1.size[1] <
                   cmp_workspace_c[x[idx] - 1].f1.size[1]);
    k = 0;
    do {
      exitg2 = 0;
      if (k <= n - 1) {
        if (cmp_workspace_c[xc].f1.data[0] !=
            cmp_workspace_c[x[idx] - 1].f1.data[0]) {
          varargout_1 = (cmp_workspace_c[xc].f1.data[0] <
                         cmp_workspace_c[x[idx] - 1].f1.data[0]);
          exitg2 = 1;
        } else {
          k++;
        }
      } else {
        if (cmp_workspace_c[xc].f1.size[1] ==
            cmp_workspace_c[j - 1].f1.size[1]) {
          varargout_1 = (xc + 1 < j);
        }
        exitg2 = 1;
      }
    } while (exitg2 == 0);
    if (varargout_1) {
      x[idx + 1] = x[idx];
      idx--;
    } else {
      exitg1 = true;
    }
  }
  x[idx + 1] = xc + 1;
  xc = x[3] - 1;
  idx = 2;
  exitg1 = false;
  while ((!exitg1) && (idx + 1 >= 1)) {
    j = x[idx];
    if (cmp_workspace_c[xc].f1.size[1] <
        cmp_workspace_c[x[idx] - 1].f1.size[1]) {
      n = cmp_workspace_c[xc].f1.size[1];
    } else {
      n = cmp_workspace_c[x[idx] - 1].f1.size[1];
    }
    varargout_1 = (cmp_workspace_c[xc].f1.size[1] <
                   cmp_workspace_c[x[idx] - 1].f1.size[1]);
    k = 0;
    do {
      exitg2 = 0;
      if (k <= n - 1) {
        if (cmp_workspace_c[xc].f1.data[0] !=
            cmp_workspace_c[x[idx] - 1].f1.data[0]) {
          varargout_1 = (cmp_workspace_c[xc].f1.data[0] <
                         cmp_workspace_c[x[idx] - 1].f1.data[0]);
          exitg2 = 1;
        } else {
          k++;
        }
      } else {
        if (cmp_workspace_c[xc].f1.size[1] ==
            cmp_workspace_c[j - 1].f1.size[1]) {
          varargout_1 = (xc + 1 < j);
        }
        exitg2 = 1;
      }
    } while (exitg2 == 0);
    if (varargout_1) {
      x[idx + 1] = x[idx];
      idx--;
    } else {
      exitg1 = true;
    }
  }
  x[idx + 1] = xc + 1;
}

/*
 * File trailer for insertionsort.c
 *
 * [EOF]
 */
