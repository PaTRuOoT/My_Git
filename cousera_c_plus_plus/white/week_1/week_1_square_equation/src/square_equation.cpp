//============================================================================
// Name        : square_equation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : square_equation in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
// если B = 0??
int main() {
	double A, B, C; // quadratic equation parameters
	double X1, X2;
	double D; // discriminant
	cin >> A >> B >> C;
	D = B*B - 4*A*C;
	if (A == 0 && B == 0) {
		cout << "";
	} else if (A == 0 && C == 0) {
		X1 = -1 * (C/B);
		cout << X1;
	} else if (B == 0 && C == 0) {
		cout << 0;
	} else if (A == 0) {
		X1 = -1 * (C/B);
		cout << X1;
	} else if (D == 0) {
		X1 = (-1*B)/(2*A);
		cout << X1;
	} else if (D > 0) {
		X1 = ((-1*B)+(sqrt(D)))/(2*A);
		X2 = ((-1*B)-(sqrt(D)))/(2*A);
		cout << X1 << " " << X2;
	} else {
		cout << "";
	}
	return 0;
}
