/*
 * File: _coder_classifyX_mex.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "_coder_classifyX_mex.h"
#include "_coder_classifyX_api.h"

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
  mexAtExit(&classifyX_atexit);
  /* Module initialization. */
  classifyX_initialize();
  /* Dispatch the entry-point. */
  unsafe_classifyX_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  classifyX_terminate();
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
void unsafe_classifyX_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                  const mxArray *prhs[1])
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
                        9, "classifyX");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "classifyX");
  }
  /* Call the function. */
  classifyX_api(prhs[0], &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/*
 * File trailer for _coder_classifyX_mex.c
 *
 * [EOF]
 */
