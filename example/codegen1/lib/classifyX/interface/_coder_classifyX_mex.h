/*
 * File: _coder_classifyX_mex.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

#ifndef _CODER_CLASSIFYX_MEX_H
#define _CODER_CLASSIFYX_MEX_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_classifyX_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                  const mxArray *prhs[1]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyX_mex.h
 *
 * [EOF]
 */
