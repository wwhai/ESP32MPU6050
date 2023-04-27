/*
 * File: classifyX_types.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

#ifndef CLASSIFYX_TYPES_H
#define CLASSIFYX_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x11
#define struct_emxArray_char_T_1x11
struct emxArray_char_T_1x11 {
  char data[11];
  int size[2];
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
  unsigned char codes;
  cell_wrap_0 categoryNames[4];
} categorical;
#endif /* typedef_categorical */

#endif
/*
 * File trailer for classifyX_types.h
 *
 * [EOF]
 */
