/*
 * File: _coder_ActionRecognize_mex.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 27-Apr-2023 21:14:07
 */

/* Include Files */
#include "_coder_ActionRecognize_mex.h"
#include "_coder_ActionRecognize_api.h"

/* Function Definitions */
/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&ActionRecognize_atexit);
  /* Module initialization. */
  ActionRecognize_initialize();
  /* Dispatch the entry-point. */
  unsafe_ActionRecognize_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  ActionRecognize_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
void unsafe_ActionRecognize_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                        int32_T nrhs, const mxArray *prhs[1])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        15, "ActionRecognize");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "ActionRecognize");
  }
  /* Call the function. */
  ActionRecognize_api(prhs[0], &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/*
 * File trailer for _coder_ActionRecognize_mex.c
 *
 * [EOF]
 */
