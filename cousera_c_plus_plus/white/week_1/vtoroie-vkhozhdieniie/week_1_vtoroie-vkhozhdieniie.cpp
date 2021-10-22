//============================================================================
// Name        : week_1_vtoroie-vkhozhdieniie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : vtoroie-vkhozhdieniie in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int sum = 0;
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == 'f') {
			sum += 1;
		}
		if (sum == 2) {
			cout << i;
			break;
		}
	}
	if (sum == 1) {
		cout << -1;
	} else if (sum == 0) {
		cout << -2;
	}
	return 0;
}
