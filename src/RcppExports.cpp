// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Simulator__new
SEXP Simulator__new(SEXP name_, SEXP verbose_);
RcppExport SEXP simmer_Simulator__new(SEXP name_SEXP, SEXP verbose_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP);
    __result = Rcpp::wrap(Simulator__new(name_, verbose_));
    return __result;
END_RCPP
}
// reset_
void reset_(SEXP sim_);
RcppExport SEXP simmer_reset_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    reset_(sim_);
    return R_NilValue;
END_RCPP
}
// now_
double now_(SEXP sim_);
RcppExport SEXP simmer_now_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    __result = Rcpp::wrap(now_(sim_));
    return __result;
END_RCPP
}
// peek_
double peek_(SEXP sim_);
RcppExport SEXP simmer_peek_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    __result = Rcpp::wrap(peek_(sim_));
    return __result;
END_RCPP
}
// step_
void step_(SEXP sim_);
RcppExport SEXP simmer_step_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    step_(sim_);
    return R_NilValue;
END_RCPP
}
// run_
void run_(SEXP sim_, SEXP until_);
RcppExport SEXP simmer_run_(SEXP sim_SEXP, SEXP until_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type until_(until_SEXP);
    run_(sim_, until_);
    return R_NilValue;
END_RCPP
}
// add_generator_
void add_generator_(SEXP sim_, SEXP name_prefix_, SEXP first_activity_, SEXP dist_, SEXP mon_);
RcppExport SEXP simmer_add_generator_(SEXP sim_SEXP, SEXP name_prefix_SEXP, SEXP first_activity_SEXP, SEXP dist_SEXP, SEXP mon_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_prefix_(name_prefix_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type first_activity_(first_activity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type dist_(dist_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mon_(mon_SEXP);
    add_generator_(sim_, name_prefix_, first_activity_, dist_, mon_);
    return R_NilValue;
END_RCPP
}
// add_resource_
void add_resource_(SEXP sim_, SEXP name_, SEXP capacity_, SEXP queue_size_, SEXP mon_);
RcppExport SEXP simmer_add_resource_(SEXP sim_SEXP, SEXP name_SEXP, SEXP capacity_SEXP, SEXP queue_size_SEXP, SEXP mon_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type capacity_(capacity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type queue_size_(queue_size_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type mon_(mon_SEXP);
    add_resource_(sim_, name_, capacity_, queue_size_, mon_);
    return R_NilValue;
END_RCPP
}
// get_mon_arrivals_
SEXP get_mon_arrivals_(SEXP sim_);
RcppExport SEXP simmer_get_mon_arrivals_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    __result = Rcpp::wrap(get_mon_arrivals_(sim_));
    return __result;
END_RCPP
}
// get_mon_resource_
SEXP get_mon_resource_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_mon_resource_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_mon_resource_(sim_, name_));
    return __result;
END_RCPP
}
// get_capacity_
int get_capacity_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_capacity_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_capacity_(sim_, name_));
    return __result;
END_RCPP
}
// get_queue_size_
int get_queue_size_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_queue_size_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_queue_size_(sim_, name_));
    return __result;
END_RCPP
}
// get_server_count_
int get_server_count_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_server_count_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_server_count_(sim_, name_));
    return __result;
END_RCPP
}
// get_queue_count_
int get_queue_count_(SEXP sim_, SEXP name_);
RcppExport SEXP simmer_get_queue_count_(SEXP sim_SEXP, SEXP name_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP);
    __result = Rcpp::wrap(get_queue_count_(sim_, name_));
    return __result;
END_RCPP
}
// Seize__new
SEXP Seize__new(SEXP resource_, Function amount, bool provide_attrs);
RcppExport SEXP simmer_Seize__new(SEXP resource_SEXP, SEXP amountSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type resource_(resource_SEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    __result = Rcpp::wrap(Seize__new(resource_, amount, provide_attrs));
    return __result;
END_RCPP
}
// Release__new
SEXP Release__new(SEXP resource_, Function amount, bool provide_attrs);
RcppExport SEXP simmer_Release__new(SEXP resource_SEXP, SEXP amountSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type resource_(resource_SEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    __result = Rcpp::wrap(Release__new(resource_, amount, provide_attrs));
    return __result;
END_RCPP
}
// SetAttribute__new
SEXP SetAttribute__new(SEXP key_, Function value, bool provide_attrs);
RcppExport SEXP simmer_SetAttribute__new(SEXP key_SEXP, SEXP valueSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type key_(key_SEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    __result = Rcpp::wrap(SetAttribute__new(key_, value, provide_attrs));
    return __result;
END_RCPP
}
// Timeout__new
SEXP Timeout__new(Function task, bool provide_attrs);
RcppExport SEXP simmer_Timeout__new(SEXP taskSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Function >::type task(taskSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    __result = Rcpp::wrap(Timeout__new(task, provide_attrs));
    return __result;
END_RCPP
}
// Branch__new
SEXP Branch__new(Function option, SEXP merge_, SEXP trj_);
RcppExport SEXP simmer_Branch__new(SEXP optionSEXP, SEXP merge_SEXP, SEXP trj_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Function >::type option(optionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type merge_(merge_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type trj_(trj_SEXP);
    __result = Rcpp::wrap(Branch__new(option, merge_, trj_));
    return __result;
END_RCPP
}
// Rollback__new_times
SEXP Rollback__new_times(SEXP amount_, SEXP times_);
RcppExport SEXP simmer_Rollback__new_times(SEXP amount_SEXP, SEXP times_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type times_(times_SEXP);
    __result = Rcpp::wrap(Rollback__new_times(amount_, times_));
    return __result;
END_RCPP
}
// Rollback__new_check
SEXP Rollback__new_check(SEXP amount_, Function check);
RcppExport SEXP simmer_Rollback__new_check(SEXP amount_SEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP);
    Rcpp::traits::input_parameter< Function >::type check(checkSEXP);
    __result = Rcpp::wrap(Rollback__new_check(amount_, check));
    return __result;
END_RCPP
}
// activity_get_n_
int activity_get_n_(SEXP activity_);
RcppExport SEXP simmer_activity_get_n_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_get_n_(activity_));
    return __result;
END_RCPP
}
// activity_show_
void activity_show_(SEXP activity_, SEXP indent_);
RcppExport SEXP simmer_activity_show_(SEXP activity_SEXP, SEXP indent_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type indent_(indent_SEXP);
    activity_show_(activity_, indent_);
    return R_NilValue;
END_RCPP
}
// activity_get_next_
SEXP activity_get_next_(SEXP activity_);
RcppExport SEXP simmer_activity_get_next_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_get_next_(activity_));
    return __result;
END_RCPP
}
// activity_get_prev_
SEXP activity_get_prev_(SEXP activity_);
RcppExport SEXP simmer_activity_get_prev_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    __result = Rcpp::wrap(activity_get_prev_(activity_));
    return __result;
END_RCPP
}
// activity_chain_
void activity_chain_(SEXP activity_, SEXP the_next_);
RcppExport SEXP simmer_activity_chain_(SEXP activity_SEXP, SEXP the_next_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type the_next_(the_next_SEXP);
    activity_chain_(activity_, the_next_);
    return R_NilValue;
END_RCPP
}
