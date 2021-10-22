//============================================================================
// Name        : raschiot_stoimosti_tovara.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : raschiot-stoimosti-tovara in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;
	// N - исх стоимость товара
	// A - если N > A, то применяется скидка X
	// B - если N > B, то применяется скидка Y
	if (N > B) {
		N = N - N * (Y/100);
	} else if (N > A) {
		N = N - N * (X/100);
	}
	cout << N;
	return 0;
}
