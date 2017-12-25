// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ctmcForwardBackward
NumericMatrix ctmcForwardBackward(NumericVector ts, double theta, NumericMatrix obs);
RcppExport SEXP _HMM_Rcpp_ctmcForwardBackward(SEXP tsSEXP, SEXP thetaSEXP, SEXP obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type obs(obsSEXP);
    rcpp_result_gen = Rcpp::wrap(ctmcForwardBackward(ts, theta, obs));
    return rcpp_result_gen;
END_RCPP
}
// ctmcViterbi
IntegerVector ctmcViterbi(NumericVector ts, double theta, NumericMatrix obs);
RcppExport SEXP _HMM_Rcpp_ctmcViterbi(SEXP tsSEXP, SEXP thetaSEXP, SEXP obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type obs(obsSEXP);
    rcpp_result_gen = Rcpp::wrap(ctmcViterbi(ts, theta, obs));
    return rcpp_result_gen;
END_RCPP
}


static const R_CallMethodDef CallEntries[] = {
    {"_HMM_Rcpp_ctmcForwardBackward", (DL_FUNC) &_HMM_Rcpp_ctmcForwardBackward, 3},
    {"_HMM_Rcpp_ctmcViterbi", (DL_FUNC) &_HMM_Rcpp_ctmcViterbi, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_HMM_Rcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
