/*
 * File: _coder_classifyX_api.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Apr-2023 22:21:26
 */

/* Include Files */
#include "_coder_classifyX_api.h"
#include "_coder_classifyX_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "classifyX",                                          /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6];

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                                 const char_T *identifier))[6];

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const categorical *u);

/* Function Definitions */
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[6]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6]
{
  real_T(*y)[6];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[6]
 */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6]
{
  static const int32_T dims[2] = {1, 6};
  real_T(*ret)[6];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  ret = (real_T(*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *X
 *                const char_T *identifier
 * Return Type  : real_T (*)[6]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                                 const char_T *identifier))[6]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(X), &thisId);
  emlrtDestroyArray(&X);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const categorical *u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const categorical *u)
{
  const mxArray *propValues[5];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *y;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  const char_T *propClasses[5] = {
      "matlab.internal.coder.categorical", "matlab.internal.coder.categorical",
      "matlab.internal.coder.categorical", "matlab.internal.coder.categorical",
      "matlab.internal.coder.categorical"};
  const char_T *propNames[5] = {"codes", "categoryNames", "isProtected",
                                "isOrdinal", "numCategoriesUpperBound"};
  char_T u_data[11];
  y = NULL;
  m = NULL;
  m1 = NULL;
  m2 = NULL;
  m3 = NULL;
  m4 = NULL;
  emlrtAssign(&y, emlrtCreateClassInstance(
                      (const char_T *)"matlab.internal.coder.categorical"));
  m = NULL;
  b_y = NULL;
  m5 = emlrtCreateNumericMatrix(1, 1, mxUINT8_CLASS, mxREAL);
  *(uint8_T *)emlrtMxGetData(m5) = u->codes;
  emlrtAssign(&b_y, m5);
  emlrtAssign(&m, b_y);
  propValues[0] = m;
  m1 = NULL;
  c_y = NULL;
  i = 4;
  emlrtAssign(&c_y, emlrtCreateCellArrayR2014a(1, &i));
  for (i = 0; i < 4; i++) {
    loop_ub = u->categoryNames[i].f1.size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      u_data[i1] = u->categoryNames[i].f1.data[i1];
    }
    e_y = NULL;
    iv[0] = 1;
    i1 = u->categoryNames[i].f1.size[1];
    iv[1] = i1;
    m5 = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, i1, m5, &u_data[0]);
    emlrtAssign(&e_y, m5);
    emlrtSetCell(c_y, i, e_y);
  }
  emlrtAssign(&m1, c_y);
  propValues[1] = m1;
  m2 = NULL;
  d_y = NULL;
  m5 = emlrtCreateLogicalScalar(false);
  emlrtAssign(&d_y, m5);
  emlrtAssign(&m2, d_y);
  propValues[2] = m2;
  m3 = NULL;
  f_y = NULL;
  m5 = emlrtCreateLogicalScalar(false);
  emlrtAssign(&f_y, m5);
  emlrtAssign(&m3, f_y);
  propValues[3] = m3;
  m4 = NULL;
  g_y = NULL;
  m5 = emlrtCreateDoubleScalar(4.0);
  emlrtAssign(&g_y, m5);
  emlrtAssign(&m4, g_y);
  propValues[4] = m4;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 5, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0,
                      (const char_T *)"matlab.internal.coder.categorical"));
  return y;
}

/*
 * Arguments    : const mxArray *prhs
 *                const mxArray **plhs
 * Return Type  : void
 */
void classifyX_api(const mxArray *prhs, const mxArray **plhs)
{
  categorical label;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*X)[6];
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  X = emlrt_marshallIn(&st, emlrtAlias(prhs), "X");
  /* Invoke the target function */
  classifyX(*X, &label);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(&st, &label);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void classifyX_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  classifyX_xil_terminate();
  classifyX_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void classifyX_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void classifyX_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_classifyX_api.c
 *
 * [EOF]
 */
