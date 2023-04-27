/*
 * File: cellstr_unique.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "cellstr_unique.h"
#include "classifyX_types.h"
#include "introsort.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const cell_wrap_0 a[4]
 *                cell_wrap_0 u_data[]
 *                int *u_size
 * Return Type  : void
 */
void cellstr_unique(const cell_wrap_0 a[4], cell_wrap_0 u_data[], int *u_size)
{
  cell_wrap_0 c[4];
  int ia_data[4];
  int idx[4];
  int b_i;
  int b_idx;
  int exitg1;
  int i;
  int k;
  int nz;
  int y_size_idx_1;
  signed char ii_data[4];
  signed char y_data[4];
  signed char b_y_data[3];
  signed char i1;
  boolean_T d[4];
  boolean_T b;
  boolean_T b_bool;
  boolean_T exitg2;
  idx[0] = 1;
  idx[1] = 2;
  idx[2] = 3;
  idx[3] = 4;
  introsort(idx, a);
  c[0].f1.size[1] = a[idx[0] - 1].f1.size[1];
  nz = a[idx[0] - 1].f1.size[1];
  for (i = 0; i < nz; i++) {
    c[0].f1.data[i] = a[idx[0] - 1].f1.data[i];
  }
  c[1].f1.size[1] = a[idx[1] - 1].f1.size[1];
  nz = a[idx[1] - 1].f1.size[1];
  for (i = 0; i < nz; i++) {
    c[1].f1.data[i] = a[idx[1] - 1].f1.data[i];
  }
  c[2].f1.size[1] = a[idx[2] - 1].f1.size[1];
  nz = a[idx[2] - 1].f1.size[1];
  for (i = 0; i < nz; i++) {
    c[2].f1.data[i] = a[idx[2] - 1].f1.data[i];
  }
  c[3].f1.size[1] = a[idx[3] - 1].f1.size[1];
  nz = a[idx[3] - 1].f1.size[1];
  for (i = 0; i < nz; i++) {
    c[3].f1.data[i] = a[idx[3] - 1].f1.data[i];
  }
  d[0] = true;
  b_bool = false;
  b = (c[0].f1.size[1] == 0);
  if (b && (c[1].f1.size[1] == 0)) {
    b_bool = true;
  } else if (c[0].f1.size[1] == c[1].f1.size[1]) {
    b_idx = 0;
    do {
      exitg1 = 0;
      if (b_idx <= c[1].f1.size[1] - 1) {
        if (c[0].f1.data[0] != c[1].f1.data[0]) {
          exitg1 = 1;
        } else {
          b_idx++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b = !b_bool;
  d[1] = b;
  nz = b + 1;
  b_bool = false;
  b = (c[1].f1.size[1] == 0);
  if (b && (c[2].f1.size[1] == 0)) {
    b_bool = true;
  } else if (c[1].f1.size[1] == c[2].f1.size[1]) {
    b_idx = 0;
    do {
      exitg1 = 0;
      if (b_idx <= c[2].f1.size[1] - 1) {
        if (c[1].f1.data[0] != c[2].f1.data[0]) {
          exitg1 = 1;
        } else {
          b_idx++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b = !b_bool;
  d[2] = b;
  nz += b;
  b_bool = false;
  b = (c[2].f1.size[1] == 0);
  if (b && (c[3].f1.size[1] == 0)) {
    b_bool = true;
  } else if (c[2].f1.size[1] == c[3].f1.size[1]) {
    b_idx = 0;
    do {
      exitg1 = 0;
      if (b_idx <= c[3].f1.size[1] - 1) {
        if (c[2].f1.data[0] != c[3].f1.data[0]) {
          exitg1 = 1;
        } else {
          b_idx++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  b = !b_bool;
  d[3] = b;
  nz += b;
  *u_size = nz;
  b_idx = 0;
  nz = 0;
  exitg2 = false;
  while ((!exitg2) && (nz < 4)) {
    if (d[nz]) {
      b_idx++;
      ii_data[b_idx - 1] = (signed char)(nz + 1);
      if (b_idx >= 4) {
        exitg2 = true;
      } else {
        nz++;
      }
    } else {
      nz++;
    }
  }
  if (1 > b_idx) {
    b_idx = 0;
  }
  for (b_i = 0; b_i < b_idx; b_i++) {
    if (b_i + 1 != b_idx) {
      i = ii_data[b_i + 1] - 1;
      i1 = ii_data[b_i];
      if (i < i1) {
        y_size_idx_1 = 0;
      } else {
        nz = i - i1;
        y_size_idx_1 = nz + 1;
        for (i = 0; i <= nz; i++) {
          b_y_data[i] = (signed char)(ii_data[b_i] + i);
        }
      }
      nz = idx[b_y_data[0] - 1];
      for (k = 2; k <= y_size_idx_1; k++) {
        i = idx[b_y_data[k - 1] - 1];
        if (nz > i) {
          nz = i;
        }
      }
      ia_data[b_i] = nz;
    } else {
      nz = 4 - ii_data[b_i];
      y_size_idx_1 = nz + 1;
      for (i = 0; i <= nz; i++) {
        y_data[i] = (signed char)(ii_data[b_i] + i);
      }
      nz = idx[y_data[0] - 1];
      for (k = 2; k <= y_size_idx_1; k++) {
        i = idx[y_data[k - 1] - 1];
        if (nz > i) {
          nz = i;
        }
      }
      ia_data[b_i] = nz;
    }
  }
  for (b_i = 0; b_i < b_idx; b_i++) {
    u_data[b_i].f1.size[0] = 1;
    i = ia_data[b_i];
    u_data[b_i].f1.size[1] = a[i - 1].f1.size[1];
    nz = a[i - 1].f1.size[1];
    for (i = 0; i < nz; i++) {
      u_data[b_i].f1.data[i] = a[ia_data[b_i] - 1].f1.data[i];
    }
  }
}

/*
 * File trailer for cellstr_unique.c
 *
 * [EOF]
 */
