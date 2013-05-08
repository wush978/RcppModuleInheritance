#include <Rcpp.h>

using namespace Rcpp;

struct A {
  int a;
};

struct B : public A {
  int b;
};

RCPP_MODULE(A) {
  class_<A>("A")
  .constructor()
  .field("a", &A::a)
  ;
}

RCPP_MODULE(B) {
  class_<B>("B")
  .derives<A>("A")
  .constructor()
  .field("b", &B::b)
  ;
}