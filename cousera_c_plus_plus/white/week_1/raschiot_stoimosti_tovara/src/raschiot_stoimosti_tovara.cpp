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
	// N - ��� ��������� ������
	// A - ���� N > A, �� ����������� ������ X
	// B - ���� N > B, �� ����������� ������ Y
	if (N > B) {
		N = N - N * (Y/100);
	} else if (N > A) {
		N = N - N * (X/100);
	}
	cout << N;
	return 0;
}
