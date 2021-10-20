#include<vector>
#include<string>
#include<iostream>
using namespace std;

void MoveString (vector<string> sourse, vector<string> destination) {

}
void test_MoveString () {
    vector<string> test_a = {"a", "b", "c"};
    vector<string> test_b = {"z"};
    vector<string> test_c = {};
    vector<string> test_d = {"a", "b", "c", "z"};
    MoveString(test_a, test_b);
    if (test_a == test_c && test_b == test_d) {
        cout << "test_1: OK" << endl;
    } else {
        cout << "test_1: FAIL" << endl;
    }
}

int main () {
    test_MoveString();
}