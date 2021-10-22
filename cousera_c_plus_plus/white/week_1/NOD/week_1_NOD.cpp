//============================================================================
// Name        : week_1_NOD.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : NOD in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int A, B, C, r, i;
	cin >> A >> B;
	if (B > A) {
		C = A;
		A = B;
		B = C;
	}
	r = 1;
	C = A - B;
	i = 1;
	while (r != 0) {
		while (B <= C) {
			C = A - B;
			A = C;
		}
		r = C;
		A = B;
		B = r;
		++i;
	}
	cout << A;
	return 0;
}
