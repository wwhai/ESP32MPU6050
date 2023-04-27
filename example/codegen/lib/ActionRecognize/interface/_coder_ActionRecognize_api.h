/*
 * File: _coder_ActionRecognize_api.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 27-Apr-2023 21:14:07
 */

#ifndef _CODER_ACTIONRECOGNIZE_API_H
#define _CODER_ACTIONRECOGNIZE_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T ActionRecognize(real_T X[60]);

void ActionRecognize_api(const mxArray *prhs, const mxArray **plhs);

void ActionRecognize_atexit(void);

void ActionRecognize_initialize(void);

void ActionRecognize_terminate(void);

void ActionRecognize_xil_shutdown(void);

void ActionRecognize_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_ActionRecognize_api.h
 *
 * [EOF]
 */
