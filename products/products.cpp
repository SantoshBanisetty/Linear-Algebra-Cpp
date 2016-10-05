#include <iostream>
#include <armadillo>
#include <cmath>

using namespace std;
using namespace arma;

int main()
  {
  mat A(10, 2);
  A.fill(2);
  cout << A << endl;
  vec X = A.col(0);
  //cout << X << endl;
  vec Y = A.col(1);
  //cout << Y << endl;
  cout << "Dot product" << endl << dot (X, Y) << endl;
  cout << "Scalar product" << endl << X*3 << endl;
  cout << "Raise to the power of 2, every element " << endl << pow(X, 2) << endl;
  cout << "Raise to the power of 3, every element " << endl << pow(X, 3) << endl;
  cout << "element-wise product" << endl << X%Y << endl;
  return 0;
  }
