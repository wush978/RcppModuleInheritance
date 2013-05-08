#'@useDynLib RcppModuleInheritance
#'@export A
#'@export B
.onLoad <- function(libname, pkgname) {
  loadRcppModules()
}