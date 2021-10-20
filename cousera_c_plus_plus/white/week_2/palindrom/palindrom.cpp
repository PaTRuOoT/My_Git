#include <string>
#include <iostream>
using namespace std;

bool IsPalindrom (string str) {
    string inverted_string = "";
    for (int i = str.size()-1; i >= 0; --i) {
        inverted_string += str[i];
    }
    if (str == inverted_string) {
        return 1;
    } else {
        return 0;
    }
}

void test_IsPalindrom () {
    if (IsPalindrom("madam") == true) {
        cout << "test_1: OK" << endl;
    } else {
        cout << "test_1: FAIL" << endl;
    }
    if (IsPalindrom("gentleman") == false) {
        cout << "test_2: OK" << endl;
    } else {
        cout << "test_2: FAIL" << endl;
    }
    if (IsPalindrom("X") == true) {
        cout << "test_3: OK" << endl;
    } else {
        cout << "test_3: FAIL" << endl;
    }
}

int main () {
    test_IsPalindrom();
}