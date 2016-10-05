#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
{
	mat X = randu<mat>(5,5);

	mat U;
	vec s;
	mat V;
	svd(U,s,V,X);
	cout << U << endl;
	cout << s << endl;
	cout << V << endl;
	return 0;
}
