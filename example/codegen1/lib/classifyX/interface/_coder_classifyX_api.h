/*
 * File: _coder_classifyX_api.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

#ifndef _CODER_CLASSIFYX_API_H
#define _CODER_CLASSIFYX_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x11
#define struct_emxArray_char_T_1x11
struct emxArray_char_T_1x11 {
  char_T data[11];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x11 */
#ifndef typedef_emxArray_char_T_1x11
#define typedef_emxArray_char_T_1x11
typedef struct emxArray_char_T_1x11 emxArray_char_T_1x11;
#endif /* typedef_emxArray_char_T_1x11 */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_char_T_1x11 f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

#ifndef typedef_categorical
#define typedef_categorical
typedef struct {
  uint8_T codes;
  cell_wrap_0 categoryNames[4];
} categorical;
#endif /* typedef_categorical */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void classifyX(real_T X[6], categorical *label);

void classifyX_api(const mxArray *prhs, const mxArray **plhs);

void classifyX_atexit(void);

void classifyX_initialize(void);

void classifyX_terminate(void);

void classifyX_xil_shutdown(void);

void classifyX_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyX_api.h
 *
 * [EOF]
 */
