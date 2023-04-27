/*
 * File: strtrim.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "strtrim.h"
#include "classifyX_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const char x_data[]
 *                const int x_size[2]
 *                char y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
void strtrim(const char x_data[], const int x_size[2], char y_data[],
             int y_size[2])
{
  int b_j1;
  int i;
  int j2;
  b_j1 = 0;
  while ((b_j1 + 1 <= x_size[1]) && bv[(unsigned char)x_data[b_j1]]) {
    b_j1++;
  }
  j2 = x_size[1];
  while ((j2 > 0) && bv[(unsigned char)x_data[j2 - 1]]) {
    j2--;
  }
  if (b_j1 + 1 > j2) {
    b_j1 = 0;
    j2 = 0;
  }
  y_size[0] = 1;
  j2 -= b_j1;
  y_size[1] = j2;
  for (i = 0; i < j2; i++) {
    y_data[i] = x_data[b_j1 + i];
  }
}

/*
 * File trailer for strtrim.c
 *
 * [EOF]
 */
