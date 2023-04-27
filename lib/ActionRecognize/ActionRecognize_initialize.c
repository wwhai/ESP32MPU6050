/*
 * File: ActionRecognize_initialize.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 26-Apr-2023 21:24:20
 */

/* Include Files */
#include "ActionRecognize_initialize.h"
#include "ActionRecognize_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void ActionRecognize_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_ActionRecognize = true;
}

/*
 * File trailer for ActionRecognize_initialize.c
 *
 * [EOF]
 */
