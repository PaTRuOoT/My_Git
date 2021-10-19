//============================================================================
// Name        : chiotnyie-chisla.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : chiotnyie-chisla in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	for (int i = A; i <= B; ++i) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	return 0;
}
