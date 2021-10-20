#include <string>
#include <iostream>
using namespace std;

bool IsPalindrom (string str) {
    return 0;
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
    if (IsPalindrom("X") == false) {
        cout << "test_3: OK" << endl;
    } else {
        cout << "test_3: FAIL" << endl;
    }
}

int main () {
    test_IsPalindrom();
    return 0;
}