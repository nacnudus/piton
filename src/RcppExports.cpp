// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// peg_sum
Rcpp::NumericVector peg_sum(Rcpp::CharacterVector x);
RcppExport SEXP piton_peg_sum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(peg_sum(x));
    return rcpp_result_gen;
END_RCPP
}
