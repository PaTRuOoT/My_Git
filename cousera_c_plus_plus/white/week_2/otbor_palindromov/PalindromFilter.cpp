#include<iostream>
#include<string>
#include<vector>
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

vector<string> PalindromFilter (vector<string> words, int minLength) {
    vector <string> result = {};
    for (auto i : words) {
        if ((IsPalindrom(i) == true) && (i.size() >= minLength)) {
            result.push_back(i);
        }
    }
    return result;
}

void test_PalindromFilter () {
    vector <string> test_1 = {"abacaba"};
    vector <string> test_2 = {"abacaba", "aba"};
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