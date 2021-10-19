//============================================================================
// Name        : week_1_dvoichnyie-chisla.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : dvoichnyie-chisla in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	string number = "";
	string out = "";
	while (a != 0) {
		if (a % 2 == 0) {
			number += "0";
		} else {
			number += "1";
		}
		a /= 2;
	}
	for (char i = number.size()-1; i >= 0; --i) {
		out += number[i];
	}
	cout << out;
	return 0;
}
