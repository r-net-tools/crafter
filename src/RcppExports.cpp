// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "crafter_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// load_pcap
pcapptr load_pcap(std::string capture_file, std::string filter);
RcppExport SEXP crafter_load_pcap(SEXP capture_fileSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type capture_file(capture_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter(filterSEXP);
    __result = Rcpp::wrap(load_pcap(capture_file, filter));
    return __result;
END_RCPP
}
// num_packets
int num_packets(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP crafter_num_packets(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    __result = Rcpp::wrap(num_packets(pcap));
    return __result;
END_RCPP
}
// get_packet_info
DataFrame get_packet_info(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP crafter_get_packet_info(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    __result = Rcpp::wrap(get_packet_info(pcap));
    return __result;
END_RCPP
}
// get_ip_layer
DataFrame get_ip_layer(Rcpp::XPtr< std::vector<Crafter::Packet*> > pcap);
RcppExport SEXP crafter_get_ip_layer(SEXP pcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::XPtr< std::vector<Crafter::Packet*> > >::type pcap(pcapSEXP);
    __result = Rcpp::wrap(get_ip_layer(pcap));
    return __result;
END_RCPP
}
