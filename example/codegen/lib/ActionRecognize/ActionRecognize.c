/*
 * File: ActionRecognize.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 27-Apr-2023 21:14:07
 */

/* Include Files */
#include "ActionRecognize.h"
#include "ActionRecognize_data.h"
#include "ActionRecognize_initialize.h"
#include "CompactEnsemble.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const double X[60]
 * Return Type  : double
 */
double ActionRecognize(const double X[60])
{
  static const double Model_LearnerWeights[30] = {
      0.16655773739401558, 0.15834088549173153,  0.1518254000024867,
      0.14875444125202866, 0.14298623646386438,  0.13801860550566555,
      0.13478862432555314, 0.12919006491562618,  0.12713130829460748,
      0.11753734497981963, 0.11542679582032325,  0.11193391393219213,
      0.11192737721725698, 0.10649698202609643,  0.10891691743388097,
      0.11729538755481275, 0.10708000156540141,  0.10565786284139121,
      0.10288152702394855, 0.10348906815781328,  0.097870772527675093,
      0.11024357159553451, 0.0927123774892678,   0.096316759475274266,
      0.0909437815575584,  0.091009911654481426, 0.084422135869475737,
      0.0872196938214862,  0.082163381431347826, 0.079972935792500088};
  double Model_Prior[5];
  double b_dv[5];
  double scoreIn[5];
  double ex;
  double label;
  int i;
  boolean_T Model_IsCached[30];
  boolean_T b[5];
  boolean_T exitg1;
  boolean_T y;
  if (!isInitialized_ActionRecognize) {
    ActionRecognize_initialize();
  }
  for (i = 0; i < 30; i++) {
    Model_IsCached[i] = false;
  }
  for (i = 0; i < 5; i++) {
    Model_Prior[i] = dv[i];
    b_dv[i] = (double)i + 1.0;
  }
  CompactEnsemble_ensemblePredict(Model_IsCached, Model_LearnerWeights, X, b_dv,
                                  scoreIn);
  for (i = 0; i < 5; i++) {
    b[i] = rtIsNaN(scoreIn[i]);
  }
  y = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 5)) {
    if (!b[i]) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }
  maximum(Model_Prior, &ex, &i);
  label = (signed char)((signed char)(i - 1) + 1);
  if (!y) {
    maximum(scoreIn, &ex, &i);
    if (i < 0) {
      i = 0;
    }
    label = (signed char)((signed char)(i - 1) + 1);
  }
  return label;
}

/*
 * File trailer for ActionRecognize.c
 *
 * [EOF]
 */
