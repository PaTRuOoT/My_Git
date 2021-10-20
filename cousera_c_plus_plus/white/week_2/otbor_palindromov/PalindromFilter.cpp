#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> PalindromFilter (vector<string> words, int minLength) {
    vector <string> result = {};
    return result;
}

void test_PalindromFilter () {
    vector <string> test_1 = {"abacaba"};
    vector <string> test_2 = {"abacaba, aba"};
    vector <string> test_3 = {"weew"};
    if (PalindromFilter({"abacaba", "aba"}, 5) == test_1) {
        cout << "test_1: OK" << endl;
    } else {
        cout << "test_1: FAIL" << endl;
    }
    if (PalindromFilter({"abacaba", "aba"}, 2) == test_2) {
        cout << "test_2: OK" << endl;
    } else {
        cout << "test_2: FAIL" << endl;
    }
    if (PalindromFilter({"weew", "bro", "code"}, 4) == test_3) {
        cout << "test_3: OK" << endl;
    } else {
        cout << "test_3: FAIL" << endl;
    }
    
}

int main () {
    test_PalindromFilter();
}