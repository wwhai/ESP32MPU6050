/*
 * File: introsort.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "introsort.h"
#include "classifyX_types.h"
#include "insertionsort.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : int x[4]
 *                const cell_wrap_0 cmp_workspace_c[4]
 * Return Type  : void
 */
void introsort(int x[4], const cell_wrap_0 cmp_workspace_c[4])
{
  insertionsort(x, cmp_workspace_c);
}

/*
 * File trailer for introsort.c
 *
 * [EOF]
 */
