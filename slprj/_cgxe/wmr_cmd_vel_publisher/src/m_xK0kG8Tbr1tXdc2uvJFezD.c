/* Include files */

#include "modelInterface.h"
#include "m_xK0kG8Tbr1tXdc2uvJFezD.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 2,     /* lineNo */
  "ros_rate",                          /* fcnName */
  "C:\\Users\\robot\\Desktop\\matlab_ros\\simulink_stack\\ros_rate.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 7,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 17,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 23,  /* lineNo */
  "ros_rate",                          /* fcnName */
  "C:\\Users\\robot\\Desktop\\matlab_ros\\simulink_stack\\ros_rate.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 166, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 174, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 184, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 190, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 192, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 76,  /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 42,  /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 1,   /* lineNo */
  "TimeProvider",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\TimeProvider.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\shared\\coder\\coder\\+coder\\ExternalDependency.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 401, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 390, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 72,  /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 57,  /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 313, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 446, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 447, /* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 89,  /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 19, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 25, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 33, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 29, /* lineNo */
  "ros_rate",                          /* fcnName */
  "C:\\Users\\robot\\Desktop\\matlab_ros\\simulink_stack\\ros_rate.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 224,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 235,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 269,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 273,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 275,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 281,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 477,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 480,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 101,/* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 387, /* lineNo */
  21,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 410, /* lineNo */
  61,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 410, /* lineNo */
  35,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 410, /* lineNo */
  21,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 57,  /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 447, /* lineNo */
  13,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 264, /* lineNo */
  57,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 264, /* lineNo */
  39,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 264, /* lineNo */
  25,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 101, /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 106, /* lineNo */
  17,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 275,   /* lineNo */
  33,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  1000,                                /* iLast */
  275,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 477, /* lineNo */
  29,                                  /* colNo */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  1000,                                /* iLast */
  477,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "Rate",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRSInfo nb_emlrtRSI = { 13, /* lineNo */
  "validatefinite",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 13, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 13, /* lineNo */
  "validatepositive",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 387,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 264,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 410,/* lineNo */
  "Rate",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\Rate.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 106,/* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\robotics\\robotcore\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const emlrtStack *sp, real_T b_RATE);
static void SystemCore_setup(const emlrtStack *sp, ros_rate *obj);
static void mw__internal__call__reset(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const emlrtStack *sp, real_T b_RATE);
static void mw__internal__call__step(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const emlrtStack *sp, real_T b_RATE);
static real_T Rate_getIndexOfOldestPeriod(robotics_Rate *obj);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, ros_rate *y);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, ros_rate *y);
static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, robotics_Rate *y);
static robotics_core_internal_SystemTimeProvider g_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static b_robotics_core_internal_OverrunActions h_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void b_assert(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void pause(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *b_RATE;
  init_simulink_io_address(moduleInstance);
  b_RATE = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st, *b_RATE);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *b_RATE;
  b_RATE = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st, *b_RATE);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *b_RATE;
  b_RATE = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *b_RATE);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance)
{
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\robot\\Desktop\\matlab_ros\\simulink_stack\\ros_rate.m",
                  0U, 2U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "ros_rate_ros_rate", 10, -1, 18);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "ros_rate_stepImpl", 516, -1, 693);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 10,
                      -1, 18);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 658,
                      -1, 679);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance)
{
  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
}

static void mw__internal__call__setup(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const emlrtStack *sp, real_T b_RATE)
{
  emlrtStack st;
  ros_rate *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    obj = &moduleInstance->sysobj;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &c_emlrtRSI;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    moduleInstance->sysobj.RATE = b_RATE;
  }

  st.site = &g_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static void SystemCore_setup(const emlrtStack *sp, ros_rate *obj)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  char_T u[51];
  int32_T kstr;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 51 };

  robotics_Rate *b_obj;
  real_T systemTime;
  const mxArray *b_y;
  boolean_T p;
  static const int32_T iv3[2] = { 1, 51 };

  char_T c_u[5];
  char_T d_u[28];
  const mxArray *c_y;
  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T f_u[28] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'R', 'a', 't',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't',
    'i', 'v', 'e' };

  static const int32_T iv4[2] = { 1, 5 };

  static const int32_T iv5[2] = { 1, 28 };

  char_T g_u[26];
  char_T h_u[48];
  static char_T i_u[26] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'R', 'a', 't',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a',
    'N' };

  static const int32_T iv6[2] = { 1, 26 };

  static char_T j_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static const int32_T iv7[2] = { 1, 48 };

  char_T k_u[46];
  static char_T l_u[26] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'R', 'a', 't',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't',
    'e' };

  char_T m_u[11];
  static const int32_T iv8[2] = { 1, 26 };

  static char_T n_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static const int32_T iv9[2] = { 1, 46 };

  static char_T o_u[11] = { 'd', 'e', 's', 'i', 'r', 'e', 'd', 'R', 'a', 't',
    'e' };

  static const int32_T iv10[2] = { 1, 11 };

  static char_T p_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static const int32_T iv11[2] = { 1, 46 };

  char_T validMethod_data[20];
  static char_T b[4] = { 's', 'l', 'i', 'p' };

  static const int32_T iv12[2] = { 1, 11 };

  int32_T exitg1;
  static char_T cv0[4] = { 'd', 'r', 'o', 'p' };

  static const int32_T iv13[2] = { 1, 11 };

  int32_T u_size[2];
  char_T u_data[29];
  static char_T cv1[7] = { 'A', 'c', 't', 'i', 'o', 'n', ' ' };

  char_T q_u[22];
  static char_T cv2[18] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's', 'u',
    'p', 'p', 'o', 'r', 't', 'e', 'd', '.' };

  char_T r_u[50];
  static char_T s_u[22] = { 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'O', 'v',
    'e', 'r', 'r', 'u', 'n', 'A', 'c', 't', 'i', 'o', 'n', ' ' };

  static const int32_T iv14[2] = { 1, 22 };

  emlrtStack f_st;
  static char_T t_u[50] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'c', 'o', 'r', 'e', ':', 'r', 'a', 't', 'e', ':', 'T',
    'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'N', 'o', 't', 'I',
    'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd' };

  const mxArray *m2 = NULL;
  static const int32_T iv15[2] = { 1, 50 };

  char_T u_u[7];
  static char_T v_u[7] = { 's', 'p', 'r', 'i', 'n', 't', 'f' };

  static const int32_T iv16[2] = { 1, 7 };

  char_T w_u[44];
  static char_T x_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'c', 'o', 'r', 'e', ':', 'r', 'a', 't', 'e', ':', 'T',
    'i', 'm', 'e', 'S', 'o', 'u', 'r', 'c', 'e', 'N', 'o', 't', 'C', 'o', 'n',
    'n', 'e', 'c', 't', 'e', 'd' };

  static const int32_T iv17[2] = { 1, 50 };

  static const int32_T iv18[2] = { 1, 46 };

  char_T y_u[2];
  static char_T ab_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv19[2] = { 1, 44 };

  const mxArray *d_y;
  static char_T bb_u[2] = { '%', 'd' };

  static const int32_T iv20[2] = { 1, 2 };

  static const int32_T iv21[2] = { 1, 46 };

  b_robotics_core_internal_OverrunActions cb_u;
  const mxArray *e_y;
  static const char * enumNames[2] = { "Drop", "Slip" };

  static const int32_T enumValues[2] = { 1, 2 };

  const mxArray *f_y;
  static const int32_T iv22[2] = { 1, 44 };

  char_T db_u[14];
  static char_T eb_u[14] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 'v', 'a',
    'l', 'i', 'd', '.' };

  static const int32_T iv23[2] = { 1, 14 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (obj->isInitialized != 0) {
    for (kstr = 0; kstr < 51; kstr++) {
      u[kstr] = b_u[kstr];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 51, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (kstr = 0; kstr < 51; kstr++) {
      u[kstr] = b_u[kstr];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(sp, 51, m1, &u[0]);
    emlrtAssign(&b_y, m1);
    for (kstr = 0; kstr < 5; kstr++) {
      c_u[kstr] = e_u[kstr];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(sp, 5, m1, &c_u[0]);
    emlrtAssign(&c_y, m1);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;

  /*  Public, tunable properties */
  /*  Pre-computed constants */
  /*  Perform one-time calculations, such as computing constants */
  /* obj.RateObj = robotics.Rate(1/obj.SampleTime); */
  b_st.site = &h_emlrtRSI;
  b_obj = &obj->rateObj;
  systemTime = obj->RATE;
  c_st.site = &i_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  d_st.site = &n_emlrtRSI;
  p = true;
  if (systemTime <= 0.0) {
    p = false;
  }

  if (!p) {
    for (kstr = 0; kstr < 28; kstr++) {
      d_u[kstr] = f_u[kstr];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&d_st, 28, m1, &d_u[0]);
    emlrtAssign(&y, m1);
    for (kstr = 0; kstr < 48; kstr++) {
      h_u[kstr] = j_u[kstr];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&d_st, 48, m1, &h_u[0]);
    emlrtAssign(&b_y, m1);
    for (kstr = 0; kstr < 11; kstr++) {
      m_u[kstr] = o_u[kstr];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&d_st, 11, m1, &m_u[0]);
    emlrtAssign(&c_y, m1);
    e_st.site = &pb_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  d_st.site = &n_emlrtRSI;
  p = true;
  if (muDoubleScalarIsNaN(systemTime)) {
    p = false;
  }

  if (!p) {
    for (kstr = 0; kstr < 26; kstr++) {
      g_u[kstr] = i_u[kstr];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&d_st, 26, m1, &g_u[0]);
    emlrtAssign(&y, m1);
    for (kstr = 0; kstr < 46; kstr++) {
      k_u[kstr] = n_u[kstr];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&d_st, 46, m1, &k_u[0]);
    emlrtAssign(&b_y, m1);
    for (kstr = 0; kstr < 11; kstr++) {
      m_u[kstr] = o_u[kstr];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(&d_st, 11, m1, &m_u[0]);
    emlrtAssign(&c_y, m1);
    e_st.site = &ob_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  d_st.site = &n_emlrtRSI;
  p = true;
  if (!((!muDoubleScalarIsInf(systemTime)) && (!muDoubleScalarIsNaN(systemTime))))
  {
    p = false;
  }

  if (!p) {
    for (kstr = 0; kstr < 26; kstr++) {
      g_u[kstr] = l_u[kstr];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&d_st, 26, m1, &g_u[0]);
    emlrtAssign(&y, m1);
    for (kstr = 0; kstr < 46; kstr++) {
      k_u[kstr] = p_u[kstr];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(&d_st, 46, m1, &k_u[0]);
    emlrtAssign(&b_y, m1);
    for (kstr = 0; kstr < 11; kstr++) {
      m_u[kstr] = o_u[kstr];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(&d_st, 11, m1, &m_u[0]);
    emlrtAssign(&c_y, m1);
    e_st.site = &nb_emlrtRSI;
    error(&e_st, y, getString(&e_st, message(&e_st, b_y, c_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  obj->rateObj.DesiredRate = systemTime;
  obj->rateObj.DesiredPeriod = 1.0 / obj->rateObj.DesiredRate;
  c_st.site = &k_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  e_st.site = &q_emlrtRSI;
  b_obj->TimeProvider.StartTime = -1.0;
  obj->rateObj.InternalOverrunAction =
    robotics_core_internal_OverrunActions_Slip;
  c_st.site = &l_emlrtRSI;
  for (kstr = 0; kstr < 4; kstr++) {
    validMethod_data[kstr] = b[kstr];
  }

  p = false;
  kstr = 1;
  do {
    exitg1 = 0;
    if (kstr - 1 < 4) {
      if (validMethod_data[kstr - 1] != cv0[kstr - 1]) {
        exitg1 = 1;
      } else {
        kstr++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (p) {
    kstr = 0;
  } else {
    p = false;
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 4) {
        if (validMethod_data[kstr - 1] != b[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      kstr = 1;
    } else {
      kstr = -1;
    }
  }

  switch (kstr) {
   case 0:
    obj->rateObj.InternalOverrunAction =
      robotics_core_internal_OverrunActions_Drop;
    break;

   case 1:
    obj->rateObj.InternalOverrunAction =
      robotics_core_internal_OverrunActions_Slip;
    break;

   default:
    u_size[0] = 1;
    u_size[1] = 29;
    for (kstr = 0; kstr < 7; kstr++) {
      u_data[kstr] = cv1[kstr];
    }

    for (kstr = 0; kstr < 4; kstr++) {
      u_data[kstr + 7] = validMethod_data[kstr];
    }

    for (kstr = 0; kstr < 18; kstr++) {
      u_data[kstr + 11] = cv2[kstr];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, u_size);
    emlrtInitCharArrayR2013a(&c_st, 29, m1, &u_data[0]);
    emlrtAssign(&y, m1);
    d_st.site = &qb_emlrtRSI;
    b_error(&d_st, y, &e_emlrtMCI);
    break;
  }

  d_st.site = &s_emlrtRSI;
  e_st.site = &t_emlrtRSI;
  p = (b_obj->TimeProvider.StartTime != -1.0);
  if (p) {
    switch (obj->rateObj.InternalOverrunAction) {
     case robotics_core_internal_OverrunActions_Slip:
      obj->rateObj.NextExecutionIndex = 0.0;
      d_st.site = &r_emlrtRSI;
      e_st.site = &u_emlrtRSI;
      p = (b_obj->TimeProvider.StartTime != -1.0);
      if (!p) {
        for (kstr = 0; kstr < 50; kstr++) {
          r_u[kstr] = t_u[kstr];
        }

        y = NULL;
        m2 = emlrtCreateCharArray(2, iv15);
        emlrtInitCharArrayR2013a(&d_st, 50, m2, &r_u[0]);
        emlrtAssign(&y, m2);
        for (kstr = 0; kstr < 50; kstr++) {
          r_u[kstr] = t_u[kstr];
        }

        b_y = NULL;
        m2 = emlrtCreateCharArray(2, iv17);
        emlrtInitCharArrayR2013a(&d_st, 50, m2, &r_u[0]);
        emlrtAssign(&b_y, m2);
        e_st.site = &u_emlrtRSI;
        error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &i_emlrtMCI),
               &i_emlrtMCI), &i_emlrtMCI);
      }

      systemTime = ctimefun();
      systemTime -= b_obj->TimeProvider.StartTime;
      obj->rateObj.ExecutionStartTime = systemTime;
      break;

     case robotics_core_internal_OverrunActions_Drop:
      obj->rateObj.NextExecutionIndex = 0.0;
      obj->rateObj.ExecutionStartTime = 0.0;
      break;

     default:
      y = NULL;
      m1 = emlrtCreateLogicalScalar(false);
      emlrtAssign(&y, m1);
      for (kstr = 0; kstr < 22; kstr++) {
        q_u[kstr] = s_u[kstr];
      }

      b_y = NULL;
      m1 = emlrtCreateCharArray(2, iv14);
      emlrtInitCharArrayR2013a(&c_st, 22, m1, &q_u[0]);
      emlrtAssign(&b_y, m1);
      for (kstr = 0; kstr < 7; kstr++) {
        u_u[kstr] = v_u[kstr];
      }

      c_y = NULL;
      m1 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(&c_st, 7, m1, &u_u[0]);
      emlrtAssign(&c_y, m1);
      for (kstr = 0; kstr < 2; kstr++) {
        y_u[kstr] = bb_u[kstr];
      }

      d_y = NULL;
      m1 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(&c_st, 2, m1, &y_u[0]);
      emlrtAssign(&d_y, m1);
      cb_u = obj->rateObj.InternalOverrunAction;
      e_y = NULL;
      emlrtCheckEnumR2012b(&c_st, "robotics.core.internal.OverrunActions", 2,
                           enumNames, enumValues);
      f_y = NULL;
      m1 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      *(int32_T *)emlrtMxGetData(m1) = cb_u;
      emlrtAssign(&f_y, m1);
      emlrtAssign(&m2, f_y);
      emlrtAssign(&e_y, emlrtCreateEnumR2012b(&c_st,
        "robotics.core.internal.OverrunActions", m2));
      emlrtDestroyArray(&m2);
      for (kstr = 0; kstr < 14; kstr++) {
        db_u[kstr] = eb_u[kstr];
      }

      f_y = NULL;
      m2 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(&c_st, 14, m2, &db_u[0]);
      emlrtAssign(&f_y, m2);
      d_st.site = &sb_emlrtRSI;
      b_assert(&d_st, y, horzcat(&d_st, b_y, feval(&d_st, c_y, d_y, e_y,
                 &f_emlrtMCI), f_y, &g_emlrtMCI), &h_emlrtMCI);
      break;
    }
  }

  c_st.site = &m_emlrtRSI;
  obj->rateObj.NumOverruns = 0.0;
  obj->rateObj.PeriodCount = 0.0;
  obj->rateObj.NextExecutionIndex = 0.0;
  obj->rateObj.ExecutionStartTime = 0.0;
  obj->rateObj.LastWakeTime = rtNaN;
  d_st.site = &v_emlrtRSI;
  e_st.site = &w_emlrtRSI;
  b_obj->TimeProvider.StartTime = ctimefun();
  f_st.site = &y_emlrtRSI;
  e_st.site = &x_emlrtRSI;
  f_st.site = &t_emlrtRSI;
  p = (b_obj->TimeProvider.StartTime != -1.0);
  if (!p) {
    for (kstr = 0; kstr < 46; kstr++) {
      k_u[kstr] = x_u[kstr];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(&d_st, 46, m2, &k_u[0]);
    emlrtAssign(&y, m2);
    for (kstr = 0; kstr < 46; kstr++) {
      k_u[kstr] = x_u[kstr];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(&d_st, 46, m2, &k_u[0]);
    emlrtAssign(&b_y, m2);
    e_st.site = &x_emlrtRSI;
    error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &j_emlrtMCI),
           &j_emlrtMCI), &j_emlrtMCI);
  }

  obj->rateObj.LastWakeTime = 0.0;
  st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (kstr = 0; kstr < 44; kstr++) {
      w_u[kstr] = ab_u[kstr];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(&st, 44, m2, &w_u[0]);
    emlrtAssign(&y, m2);
    for (kstr = 0; kstr < 44; kstr++) {
      w_u[kstr] = ab_u[kstr];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(&st, 44, m2, &w_u[0]);
    emlrtAssign(&b_y, m2);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->TunablePropsChanged = false;
}

static void mw__internal__call__reset(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const emlrtStack *sp, real_T b_RATE)
{
  emlrtStack st;
  emlrtStack b_st;
  ros_rate *obj;
  char_T u[45];
  boolean_T tunablePropChangedBeforeResetImpl;
  int32_T i0;
  emlrtStack c_st;
  emlrtStack d_st;
  char_T b_u[44];
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m3;
  static const int32_T iv24[2] = { 1, 45 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv25[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv26[2] = { 1, 45 };

  static const int32_T iv27[2] = { 1, 44 };

  char_T e_u[5];
  const mxArray *c_y;
  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv28[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    obj = &moduleInstance->sysobj;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &c_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (obj->isInitialized == 1);
    if (tunablePropChangedBeforeResetImpl) {
      obj->TunablePropsChanged = true;
    }

    moduleInstance->sysobj.RATE = b_RATE;
  }

  st.site = &ab_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i0 = 0; i0 < 45; i0++) {
      u[i0] = c_u[i0];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(&st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i0 = 0; i0 < 45; i0++) {
      u[i0] = c_u[i0];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv26);
    emlrtInitCharArrayR2013a(&st, 45, m3, &u[0]);
    emlrtAssign(&b_y, m3);
    for (i0 = 0; i0 < 5; i0++) {
      e_u[i0] = f_u[i0];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv28);
    emlrtInitCharArrayR2013a(&st, 5, m3, &e_u[0]);
    emlrtAssign(&c_y, m3);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i0 = 0; i0 < 44; i0++) {
      b_u[i0] = d_u[i0];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv25);
    emlrtInitCharArrayR2013a(&st, 44, m3, &b_u[0]);
    emlrtAssign(&y, m3);
    for (i0 = 0; i0 < 44; i0++) {
      b_u[i0] = d_u[i0];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(&st, 44, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const emlrtStack *sp, real_T b_RATE)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  ros_rate *obj;
  boolean_T flag;
  char_T u[45];
  int32_T i1;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m4;
  static const int32_T iv29[2] = { 1, 45 };

  robotics_Rate *b_obj;
  const mxArray *b_y;
  static const int32_T iv30[2] = { 1, 45 };

  char_T c_u[4];
  char_T d_u[50];
  real_T systemTime;
  real_T currentTime;
  const mxArray *c_y;
  static char_T e_u[4] = { 's', 't', 'e', 'p' };

  static char_T f_u[50] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'c', 'o', 'r', 'e', ':', 'r', 'a', 't', 'e', ':', 'T',
    'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'N', 'o', 't', 'I',
    'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd' };

  static const int32_T iv31[2] = { 1, 4 };

  static const int32_T iv32[2] = { 1, 50 };

  char_T g_u[14];
  static const int32_T iv33[2] = { 1, 50 };

  const mxArray *m5 = NULL;
  emlrtStack g_st;
  static char_T h_u[14] = { 'O', 'v', 'e', 'r', 'r', 'u', 'n', 'A', 'c', 't',
    'i', 'o', 'n', ' ' };

  static const int32_T iv34[2] = { 1, 50 };

  static const int32_T iv35[2] = { 1, 14 };

  char_T i_u[46];
  char_T j_u[7];
  static char_T k_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'c', 'o', 'r', 'e', ':', 'r', 'a', 't', 'e', ':', 'T',
    'i', 'm', 'e', 'S', 'o', 'u', 'r', 'c', 'e', 'N', 'o', 't', 'C', 'o', 'n',
    'n', 'e', 'c', 't', 'e', 'd' };

  static char_T l_u[7] = { 's', 'p', 'r', 'i', 'n', 't', 'f' };

  static const int32_T iv36[2] = { 1, 46 };

  static const int32_T iv37[2] = { 1, 50 };

  static const int32_T iv38[2] = { 1, 7 };

  char_T m_u[44];
  static const int32_T iv39[2] = { 1, 50 };

  char_T n_u[2];
  static char_T o_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv40[2] = { 1, 44 };

  const mxArray *d_y;
  static char_T p_u[2] = { '%', 'd' };

  static const int32_T iv41[2] = { 1, 46 };

  static const int32_T iv42[2] = { 1, 2 };

  static const int32_T iv43[2] = { 1, 50 };

  b_robotics_core_internal_OverrunActions q_u;
  const mxArray *e_y;
  static const char * enumNames[2] = { "Drop", "Slip" };

  static const int32_T enumValues[2] = { 1, 2 };

  const mxArray *f_y;
  static const int32_T iv44[2] = { 1, 44 };

  static const int32_T iv45[2] = { 1, 46 };

  static char_T r_u[14] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 'v', 'a',
    'l', 'i', 'd', '.' };

  static const int32_T iv46[2] = { 1, 14 };

  static const int32_T iv47[2] = { 1, 46 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    obj = &moduleInstance->sysobj;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &c_emlrtRSI;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    moduleInstance->sysobj.RATE = b_RATE;
  }

  if (moduleInstance->sysobj.RATE != b_RATE) {
    st.site = &bb_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &c_emlrtRSI;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    moduleInstance->sysobj.RATE = b_RATE;
  }

  st.site = &cb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = b_u[i1];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv29);
    emlrtInitCharArrayR2013a(&st, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = b_u[i1];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv30);
    emlrtInitCharArrayR2013a(&st, 45, m4, &u[0]);
    emlrtAssign(&b_y, m4);
    for (i1 = 0; i1 < 4; i1++) {
      c_u[i1] = e_u[i1];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv31);
    emlrtInitCharArrayR2013a(&st, 4, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(&c_st, obj);

    /*  Initialize / reset discrete-state properties */
  }

  b_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  b_st.site = &d_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);

  /*  Implement algorithm. Calculate y as a function of input u and */
  /*  discrete states. */
  c_st.site = &db_emlrtRSI;
  b_obj = &obj->rateObj;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &u_emlrtRSI;
  flag = (obj->rateObj.TimeProvider.StartTime != -1.0);
  if (!flag) {
    for (i1 = 0; i1 < 50; i1++) {
      d_u[i1] = f_u[i1];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv32);
    emlrtInitCharArrayR2013a(&d_st, 50, m4, &d_u[0]);
    emlrtAssign(&y, m4);
    for (i1 = 0; i1 < 50; i1++) {
      d_u[i1] = f_u[i1];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv33);
    emlrtInitCharArrayR2013a(&d_st, 50, m4, &d_u[0]);
    emlrtAssign(&b_y, m4);
    e_st.site = &u_emlrtRSI;
    error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &i_emlrtMCI),
           &i_emlrtMCI), &i_emlrtMCI);
  }

  systemTime = ctimefun();
  currentTime = systemTime - obj->rateObj.TimeProvider.StartTime;
  if (currentTime < obj->rateObj.LastWakeTime) {
    d_st.site = &fb_emlrtRSI;
    e_st.site = &kb_emlrtRSI;
    systemTime = Rate_getIndexOfOldestPeriod(&obj->rateObj);
    i1 = (int32_T)emlrtIntegerCheckR2012b(systemTime, &b_emlrtDCI, &d_st);
    emlrtDynamicBoundsCheckR2012b(i1, 1, 1000, &b_emlrtBCI, &d_st);
    obj->rateObj.NextExecutionIndex = 0.0;
    obj->rateObj.ExecutionStartTime = 0.0;
    e_st.site = &lb_emlrtRSI;
    f_st.site = &w_emlrtRSI;
    b_obj->TimeProvider.StartTime = ctimefun();
    g_st.site = &y_emlrtRSI;
    f_st.site = &x_emlrtRSI;
    g_st.site = &t_emlrtRSI;
    flag = (b_obj->TimeProvider.StartTime != -1.0);
    if (!flag) {
      for (i1 = 0; i1 < 46; i1++) {
        i_u[i1] = k_u[i1];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv36);
      emlrtInitCharArrayR2013a(&e_st, 46, m5, &i_u[0]);
      emlrtAssign(&y, m5);
      for (i1 = 0; i1 < 46; i1++) {
        i_u[i1] = k_u[i1];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv41);
      emlrtInitCharArrayR2013a(&e_st, 46, m5, &i_u[0]);
      emlrtAssign(&b_y, m5);
      f_st.site = &x_emlrtRSI;
      error(&f_st, y, getString(&f_st, b_message(&f_st, b_y, &j_emlrtMCI),
             &j_emlrtMCI), &j_emlrtMCI);
    }

    obj->rateObj.LastWakeTime = 0.0;
    obj->rateObj.LastWakeTime = currentTime;
    obj->rateObj.PeriodCount++;
  } else {
    obj->rateObj.NextExecutionIndex++;
    systemTime = (obj->rateObj.NextExecutionIndex * obj->rateObj.DesiredPeriod +
                  obj->rateObj.ExecutionStartTime) - currentTime;
    if (systemTime < 0.0) {
      obj->rateObj.NumOverruns++;
      switch (obj->rateObj.InternalOverrunAction) {
       case robotics_core_internal_OverrunActions_Drop:
        systemTime = (currentTime - obj->rateObj.ExecutionStartTime) /
          obj->rateObj.DesiredPeriod;
        obj->rateObj.NextExecutionIndex = muDoubleScalarCeil(systemTime);
        systemTime = (obj->rateObj.NextExecutionIndex *
                      obj->rateObj.DesiredPeriod +
                      obj->rateObj.ExecutionStartTime) - currentTime;
        break;

       case robotics_core_internal_OverrunActions_Slip:
        obj->rateObj.NextExecutionIndex = 0.0;
        obj->rateObj.ExecutionStartTime = currentTime;
        systemTime = 0.0;
        break;

       default:
        y = NULL;
        m4 = emlrtCreateLogicalScalar(false);
        emlrtAssign(&y, m4);
        for (i1 = 0; i1 < 14; i1++) {
          g_u[i1] = h_u[i1];
        }

        b_y = NULL;
        m4 = emlrtCreateCharArray(2, iv35);
        emlrtInitCharArrayR2013a(&c_st, 14, m4, &g_u[0]);
        emlrtAssign(&b_y, m4);
        for (i1 = 0; i1 < 7; i1++) {
          j_u[i1] = l_u[i1];
        }

        c_y = NULL;
        m4 = emlrtCreateCharArray(2, iv38);
        emlrtInitCharArrayR2013a(&c_st, 7, m4, &j_u[0]);
        emlrtAssign(&c_y, m4);
        for (i1 = 0; i1 < 2; i1++) {
          n_u[i1] = p_u[i1];
        }

        d_y = NULL;
        m4 = emlrtCreateCharArray(2, iv42);
        emlrtInitCharArrayR2013a(&c_st, 2, m4, &n_u[0]);
        emlrtAssign(&d_y, m4);
        q_u = obj->rateObj.InternalOverrunAction;
        e_y = NULL;
        emlrtCheckEnumR2012b(&c_st, "robotics.core.internal.OverrunActions", 2,
                             enumNames, enumValues);
        f_y = NULL;
        m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
        *(int32_T *)emlrtMxGetData(m4) = q_u;
        emlrtAssign(&f_y, m4);
        emlrtAssign(&m5, f_y);
        emlrtAssign(&e_y, emlrtCreateEnumR2012b(&c_st,
          "robotics.core.internal.OverrunActions", m5));
        emlrtDestroyArray(&m5);
        for (i1 = 0; i1 < 14; i1++) {
          g_u[i1] = r_u[i1];
        }

        f_y = NULL;
        m5 = emlrtCreateCharArray(2, iv46);
        emlrtInitCharArrayR2013a(&c_st, 14, m5, &g_u[0]);
        emlrtAssign(&f_y, m5);
        d_st.site = &rb_emlrtRSI;
        b_assert(&d_st, y, horzcat(&d_st, b_y, feval(&d_st, c_y, d_y, e_y,
                   &k_emlrtMCI), f_y, &l_emlrtMCI), &m_emlrtMCI);
        break;
      }
    }

    d_st.site = &gb_emlrtRSI;
    e_st.site = &mb_emlrtRSI;
    flag = (b_obj->TimeProvider.StartTime != -1.0);
    if (!flag) {
      for (i1 = 0; i1 < 50; i1++) {
        d_u[i1] = f_u[i1];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv34);
      emlrtInitCharArrayR2013a(&d_st, 50, m5, &d_u[0]);
      emlrtAssign(&y, m5);
      for (i1 = 0; i1 < 50; i1++) {
        d_u[i1] = f_u[i1];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv37);
      emlrtInitCharArrayR2013a(&d_st, 50, m5, &d_u[0]);
      emlrtAssign(&b_y, m5);
      e_st.site = &mb_emlrtRSI;
      error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &n_emlrtMCI),
             &n_emlrtMCI), &n_emlrtMCI);
    }

    y = NULL;
    m5 = emlrtCreateDoubleScalar(systemTime);
    emlrtAssign(&y, m5);
    e_st.site = &tb_emlrtRSI;
    pause(&e_st, y, &o_emlrtMCI);
    d_st.site = &hb_emlrtRSI;
    e_st.site = &u_emlrtRSI;
    flag = (b_obj->TimeProvider.StartTime != -1.0);
    if (!flag) {
      for (i1 = 0; i1 < 50; i1++) {
        d_u[i1] = f_u[i1];
      }

      y = NULL;
      m5 = emlrtCreateCharArray(2, iv39);
      emlrtInitCharArrayR2013a(&d_st, 50, m5, &d_u[0]);
      emlrtAssign(&y, m5);
      for (i1 = 0; i1 < 50; i1++) {
        d_u[i1] = f_u[i1];
      }

      b_y = NULL;
      m5 = emlrtCreateCharArray(2, iv43);
      emlrtInitCharArrayR2013a(&d_st, 50, m5, &d_u[0]);
      emlrtAssign(&b_y, m5);
      e_st.site = &u_emlrtRSI;
      error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &i_emlrtMCI),
             &i_emlrtMCI), &i_emlrtMCI);
    }

    systemTime = ctimefun();
    currentTime = systemTime - b_obj->TimeProvider.StartTime;
    if (currentTime > obj->rateObj.LastWakeTime) {
      d_st.site = &ib_emlrtRSI;
      systemTime = Rate_getIndexOfOldestPeriod(&obj->rateObj);
      i1 = (int32_T)emlrtIntegerCheckR2012b(systemTime, &emlrtDCI, &c_st);
      emlrtDynamicBoundsCheckR2012b(i1, 1, 1000, &emlrtBCI, &c_st);
      obj->rateObj.PeriodCount++;
      obj->rateObj.LastWakeTime = currentTime;
    } else {
      d_st.site = &jb_emlrtRSI;
      e_st.site = &kb_emlrtRSI;
      systemTime = Rate_getIndexOfOldestPeriod(&obj->rateObj);
      i1 = (int32_T)emlrtIntegerCheckR2012b(systemTime, &b_emlrtDCI, &d_st);
      emlrtDynamicBoundsCheckR2012b(i1, 1, 1000, &b_emlrtBCI, &d_st);
      obj->rateObj.NextExecutionIndex = 0.0;
      obj->rateObj.ExecutionStartTime = 0.0;
      e_st.site = &lb_emlrtRSI;
      f_st.site = &w_emlrtRSI;
      b_obj->TimeProvider.StartTime = ctimefun();
      g_st.site = &y_emlrtRSI;
      f_st.site = &x_emlrtRSI;
      g_st.site = &t_emlrtRSI;
      flag = (b_obj->TimeProvider.StartTime != -1.0);
      if (!flag) {
        for (i1 = 0; i1 < 46; i1++) {
          i_u[i1] = k_u[i1];
        }

        y = NULL;
        m5 = emlrtCreateCharArray(2, iv45);
        emlrtInitCharArrayR2013a(&e_st, 46, m5, &i_u[0]);
        emlrtAssign(&y, m5);
        for (i1 = 0; i1 < 46; i1++) {
          i_u[i1] = k_u[i1];
        }

        b_y = NULL;
        m5 = emlrtCreateCharArray(2, iv47);
        emlrtInitCharArrayR2013a(&e_st, 46, m5, &i_u[0]);
        emlrtAssign(&b_y, m5);
        f_st.site = &x_emlrtRSI;
        error(&f_st, y, getString(&f_st, b_message(&f_st, b_y, &j_emlrtMCI),
               &j_emlrtMCI), &j_emlrtMCI);
      }

      obj->rateObj.LastWakeTime = 0.0;
      obj->rateObj.LastWakeTime = currentTime;
      obj->rateObj.PeriodCount++;
    }
  }

  b_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (i1 = 0; i1 < 44; i1++) {
      m_u[i1] = o_u[i1];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv40);
    emlrtInitCharArrayR2013a(&b_st, 44, m5, &m_u[0]);
    emlrtAssign(&y, m5);
    for (i1 = 0; i1 < 44; i1++) {
      m_u[i1] = o_u[i1];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv44);
    emlrtInitCharArrayR2013a(&b_st, 44, m5, &m_u[0]);
    emlrtAssign(&b_y, m5);
    c_st.site = &d_emlrtRSI;
    error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static real_T Rate_getIndexOfOldestPeriod(robotics_Rate *obj)
{
  real_T x;
  real_T r;
  x = obj->PeriodCount;
  if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x))) {
    if (x == 0.0) {
      r = 0.0;
    } else {
      r = muDoubleScalarRem(x, 1000.0);
      if (r == 0.0) {
        r = 0.0;
      } else {
        if (x < 0.0) {
          r += 1000.0;
        }
      }
    }
  } else {
    r = rtNaN;
  }

  return r + 1.0;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance)
{
  const mxArray *st;
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *y;
  int32_T hoistedGlobal_isInitialized;
  boolean_T hoistedGlobal_TunablePropsChanged;
  real_T hoistedGlobal_RATE;
  real_T hoistedGlobal_rateObj_DesiredRate;
  real_T hoistedGlobal_rateObj_DesiredPeriod;
  real_T hoistedGlobal_rateObj_LastWakeTime;
  real_T hoistedGlobal_rateObj_TimeProvider_StartTime;
  b_robotics_core_internal_OverrunActions
    hoistedGlobal_rateObj_InternalOverrunAction;
  real_T hoistedGlobal_rateObj_PeriodCount;
  real_T hoistedGlobal_rateObj_NumOverruns;
  real_T hoistedGlobal_rateObj_NextExecutionIndex;
  real_T hoistedGlobal_rateObj_ExecutionStartTime;
  const mxArray *b_y;
  static const char * sv0[4] = { "isInitialized", "TunablePropsChanged", "RATE",
    "rateObj" };

  const mxArray *c_y;
  const mxArray *m6;
  static const char * sv1[9] = { "DesiredRate", "DesiredPeriod", "LastWakeTime",
    "TimeProvider", "InternalOverrunAction", "PeriodCount", "NumOverruns",
    "NextExecutionIndex", "ExecutionStartTime" };

  const mxArray *d_y;
  static const char * sv2[1] = { "StartTime" };

  const mxArray *e_y;
  static const char * enumNames[2] = { "Drop", "Slip" };

  static const int32_T enumValues[2] = { 1, 2 };

  const mxArray *m7 = NULL;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  hoistedGlobal_isInitialized = moduleInstance->sysobj.isInitialized;
  hoistedGlobal_TunablePropsChanged = moduleInstance->sysobj.TunablePropsChanged;
  hoistedGlobal_RATE = moduleInstance->sysobj.RATE;
  hoistedGlobal_rateObj_DesiredRate = moduleInstance->sysobj.rateObj.DesiredRate;
  hoistedGlobal_rateObj_DesiredPeriod =
    moduleInstance->sysobj.rateObj.DesiredPeriod;
  hoistedGlobal_rateObj_LastWakeTime =
    moduleInstance->sysobj.rateObj.LastWakeTime;
  hoistedGlobal_rateObj_TimeProvider_StartTime =
    moduleInstance->sysobj.rateObj.TimeProvider.StartTime;
  hoistedGlobal_rateObj_InternalOverrunAction =
    moduleInstance->sysobj.rateObj.InternalOverrunAction;
  hoistedGlobal_rateObj_PeriodCount = moduleInstance->sysobj.rateObj.PeriodCount;
  hoistedGlobal_rateObj_NumOverruns = moduleInstance->sysobj.rateObj.NumOverruns;
  hoistedGlobal_rateObj_NextExecutionIndex =
    moduleInstance->sysobj.rateObj.NextExecutionIndex;
  hoistedGlobal_rateObj_ExecutionStartTime =
    moduleInstance->sysobj.rateObj.ExecutionStartTime;
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 4, sv0));
  c_y = NULL;
  m6 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m6) = hoistedGlobal_isInitialized;
  emlrtAssign(&c_y, m6);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  c_y = NULL;
  m6 = emlrtCreateLogicalScalar(hoistedGlobal_TunablePropsChanged);
  emlrtAssign(&c_y, m6);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", c_y, 1);
  c_y = NULL;
  m6 = emlrtCreateDoubleScalar(hoistedGlobal_RATE);
  emlrtAssign(&c_y, m6);
  emlrtSetFieldR2017b(b_y, 0, "RATE", c_y, 2);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 9, sv1));
  d_y = NULL;
  m6 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_DesiredRate);
  emlrtAssign(&d_y, m6);
  emlrtSetFieldR2017b(c_y, 0, "DesiredRate", d_y, 0);
  d_y = NULL;
  m6 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_DesiredPeriod);
  emlrtAssign(&d_y, m6);
  emlrtSetFieldR2017b(c_y, 0, "DesiredPeriod", d_y, 1);
  d_y = NULL;
  m6 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_LastWakeTime);
  emlrtAssign(&d_y, m6);
  emlrtSetFieldR2017b(c_y, 0, "LastWakeTime", d_y, 2);
  d_y = NULL;
  emlrtAssign(&d_y, emlrtCreateStructMatrix(1, 1, 1, sv2));
  e_y = NULL;
  m6 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_TimeProvider_StartTime);
  emlrtAssign(&e_y, m6);
  emlrtSetFieldR2017b(d_y, 0, "StartTime", e_y, 0);
  emlrtSetFieldR2017b(c_y, 0, "TimeProvider", d_y, 3);
  d_y = NULL;
  emlrtCheckEnumR2012b(&b_st, "robotics.core.internal.OverrunActions", 2,
                       enumNames, enumValues);
  e_y = NULL;
  m6 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m6) = hoistedGlobal_rateObj_InternalOverrunAction;
  emlrtAssign(&e_y, m6);
  emlrtAssign(&m7, e_y);
  emlrtAssign(&d_y, emlrtCreateEnumR2012b(&b_st,
    "robotics.core.internal.OverrunActions", m7));
  emlrtDestroyArray(&m7);
  emlrtSetFieldR2017b(c_y, 0, "InternalOverrunAction", d_y, 4);
  d_y = NULL;
  m7 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_PeriodCount);
  emlrtAssign(&d_y, m7);
  emlrtSetFieldR2017b(c_y, 0, "PeriodCount", d_y, 5);
  d_y = NULL;
  m7 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_NumOverruns);
  emlrtAssign(&d_y, m7);
  emlrtSetFieldR2017b(c_y, 0, "NumOverruns", d_y, 6);
  d_y = NULL;
  m7 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_NextExecutionIndex);
  emlrtAssign(&d_y, m7);
  emlrtSetFieldR2017b(c_y, 0, "NextExecutionIndex", d_y, 7);
  d_y = NULL;
  m7 = emlrtCreateDoubleScalar(hoistedGlobal_rateObj_ExecutionStartTime);
  emlrtAssign(&d_y, m7);
  emlrtSetFieldR2017b(c_y, 0, "ExecutionStartTime", d_y, 8);
  emlrtSetFieldR2017b(b_y, 0, "rateObj", c_y, 3);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m7 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m7);
  emlrtSetCell(y, 1, b_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, ros_rate *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, ros_rate *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "isInitialized", "TunablePropsChanged",
    "RATE", "rateObj" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "RATE";
  y->RATE = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "RATE")), &thisId);
  thisId.fIdentifier = "rateObj";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "rateObj")),
                     &thisId, &y->rateObj);
  emlrtDestroyArray(&u);
}

static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, robotics_Rate *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[9] = { "DesiredRate", "DesiredPeriod",
    "LastWakeTime", "TimeProvider", "InternalOverrunAction", "PeriodCount",
    "NumOverruns", "NextExecutionIndex", "ExecutionStartTime" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 9, fieldNames, 0U, &dims);
  thisId.fIdentifier = "DesiredRate";
  y->DesiredRate = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "DesiredRate")), &thisId);
  thisId.fIdentifier = "DesiredPeriod";
  y->DesiredPeriod = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 1, "DesiredPeriod")), &thisId);
  thisId.fIdentifier = "LastWakeTime";
  y->LastWakeTime = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 2, "LastWakeTime")), &thisId);
  thisId.fIdentifier = "TimeProvider";
  y->TimeProvider = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 3, "TimeProvider")), &thisId);
  thisId.fIdentifier = "InternalOverrunAction";
  y->InternalOverrunAction = h_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 4, "InternalOverrunAction")), &thisId);
  thisId.fIdentifier = "PeriodCount";
  y->PeriodCount = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 5, "PeriodCount")), &thisId);
  thisId.fIdentifier = "NumOverruns";
  y->NumOverruns = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 6, "NumOverruns")), &thisId);
  thisId.fIdentifier = "NextExecutionIndex";
  y->NextExecutionIndex = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 7, "NextExecutionIndex")), &thisId);
  thisId.fIdentifier = "ExecutionStartTime";
  y->ExecutionStartTime = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 8, "ExecutionStartTime")), &thisId);
  emlrtDestroyArray(&u);
}

static robotics_core_internal_SystemTimeProvider g_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  robotics_core_internal_SystemTimeProvider y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[1] = { "StartTime" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 1, fieldNames, 0U, &dims);
  thisId.fIdentifier = "StartTime";
  y.StartTime = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    0, "StartTime")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static b_robotics_core_internal_OverrunActions h_emlrt_marshallIn(const
  emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  b_robotics_core_internal_OverrunActions y;
  static const char * enumNames[2] = { "Drop", "Slip" };

  static const int32_T enumValues[2] = { 1, 2 };

  static const int32_T dims = 0;
  emlrtCheckEnumR2012b(sp, "robotics.core.internal.OverrunActions", 2, enumNames,
                       enumValues);
  emlrtCheckBuiltInR2012b(sp, parentId, u,
    "robotics.core.internal.OverrunActions", false, 0U, &dims);
  y = emlrtGetEnumElementR2009a(u, 0);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *u;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  u = emlrtAlias(st);
  emlrt_marshallIn(&b_st, emlrtAlias(emlrtGetCell(&b_st, "sysobj", u, 0)),
                   "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = i_emlrt_marshallIn(&b_st, emlrtAlias
    (emlrtGetCell(&b_st, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m9;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m10;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m10, 3, pArrays, "feval", true, location);
}

static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 3, pArrays, "horzcat", true,
    location);
}

static void b_assert(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "assert", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 1, &pArray, "message", true,
    location);
}

static void pause(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "pause", true, location);
}

static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S, int_T tid)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S, int_T tid)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
  InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *moduleInstance =
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD *)calloc(1, sizeof
    (InstanceStruct_xK0kG8Tbr1tXdc2uvJFezD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_xK0kG8Tbr1tXdc2uvJFezD);
  ssSetmdlInitializeConditions(S, mdlInitialize_xK0kG8Tbr1tXdc2uvJFezD);
  ssSetmdlUpdate(S, mdlUpdate_xK0kG8Tbr1tXdc2uvJFezD);
  ssSetmdlTerminate(S, mdlTerminate_xK0kG8Tbr1tXdc2uvJFezD);
  ssSetmdlEnable(S, mdlEnable_xK0kG8Tbr1tXdc2uvJFezD);
  ssSetmdlDisable(S, mdlDisable_xK0kG8Tbr1tXdc2uvJFezD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S)
{
}

void method_dispatcher_xK0kG8Tbr1tXdc2uvJFezD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_xK0kG8Tbr1tXdc2uvJFezD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_xK0kG8Tbr1tXdc2uvJFezD(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_xK0kG8Tbr1tXdc2uvJFezD(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_xK0kG8Tbr1tXdc2uvJFezD(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: xK0kG8Tbr1tXdc2uvJFezD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_xK0kG8Tbr1tXdc2uvJFezD_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,1);
  elem_6 = mxCreateString("ctimefun.h");
  mxSetCell(elem_5,0,elem_6);
  mxSetCell(elem_3,1,elem_5);
  elem_7 = mxCreateCellMatrix(1,1);
  elem_8 = mxCreateString("");
  mxSetCell(elem_7,0,elem_8);
  mxSetCell(elem_3,2,elem_7);
  elem_9 = mxCreateCellMatrix(1,1);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  mxSetCell(elem_3,3,elem_9);
  mxSetCell(elem_1,1,elem_3);
  elem_11 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_11);
  elem_12 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_12);
  elem_13 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_13);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_14);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_15 = mxCreateCellMatrix(1,1);
  elem_16 = mxCreateString("robotics.core.internal.SystemTimeProvider");
  mxSetCell(elem_15,0,elem_16);
  mxSetCell(mxBIArgs,1,elem_15);
  elem_17 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_17);
  return mxBIArgs;
}

mxArray *cgxe_xK0kG8Tbr1tXdc2uvJFezD_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.SystemTimeProvider");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
