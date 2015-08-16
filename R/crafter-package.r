#' A package to work with packet captures (PCAPs)
#'
#' The main function - \code{read_pcap} returns a hybrid S3 \code{crafter}
#' object with the with callable internal methods and accessible variables.
#'
#' Callable internal methods & accesible variables  of the \code{crafter} object:
#'
#' \describe{
#'   \item{\code{packet_count}}{Total packets in capture}
#'   \item{\code{get_ips(src_or_dst)}}{Retrieve a data frame of IP addresses.
#'         "\code{src_or_dst}" can be one of "\code{src}", "\code{dst}" or "\code{all}" }
#'   \item{\code{packet_info()}}{Retrieve a data frame of high-level packet information}
#'   \item{\code{get_payload(num)}}{Retrieve the payload of a specific packet number}
#'   \item{\code{get_layer(layer_name)}}{Get all the packets from a layer,
#'        "\code{layer_name}" can be one of \code{TCP, IP, ICMP}}
#'   \item{\code{summary()}}{Prints summary information about the packet capture}
#' }
#'
#' @examples
#' ncap <- read_pcap(system.file("pcaps/Ncapture.pcap", package="crafter"))
#'
#' # get overall capture summary
#' summary(ncap)
#'
#' # same thing
#' ncap$summary()
#'
#' # high level packet info
#' ncap_info <- ncap$packet_info()
#' head(ncap_info)
#'
#' # retrieve specific layers
#' ncap_ip <- ncap$get_layer("IP")
#' head(ncap_ip)
#'
#' ncap_tcp <- ncap$get_layer("TCP")
#' head(ncap_tcp)
#'
#' # get the IPs from the capture
#' ncap$get_ips("all")
#'
#' # get packet payload
#' ncap$get_payload(7119)
#'
#' @name crafter
#' @docType package
#' @author Bob Rudis (@@hrbrmstr)
#' @useDynLib crafter
#' @importFrom Rcpp sourceCpp
#' @importFrom stringr str_trim str_split
#' @importFrom dplyr data_frame bind_rows bind_cols mutate arrange
#' @importFrom tidyr separate
#' @importFrom crayon bold red
NULL
