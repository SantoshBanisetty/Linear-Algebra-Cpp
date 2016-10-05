#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
  {
  mat A = randu<mat>(3,3);
  cout << "Matrix A" << endl << A << endl;
  cout << "A inverse" << endl << inv(A) << endl;
  cout << "A transpose" << endl << trans(A) << endl;
  return 0;
  }
