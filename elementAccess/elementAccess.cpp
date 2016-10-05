#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
  {
  mat A = randu<mat>(4,5);
  mat B = randu<mat>(4,5);
  mat Out = A*B.t();
  cout << Out<< endl;
  cout << "2nd row, 3rd column" << endl << Out (1, 2) << endl;
  cout << "2nd column" << endl << Out.col(1) << endl;
  cout << "2nd row" << endl << Out.row(1) << endl;
  return 0;
  }
