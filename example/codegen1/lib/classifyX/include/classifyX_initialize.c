/*
 * File: classifyX_initialize.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "classifyX_initialize.h"
#include "classifyX_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void classifyX_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_classifyX = true;
}

/*
 * File trailer for classifyX_initialize.c
 *
 * [EOF]
 */
