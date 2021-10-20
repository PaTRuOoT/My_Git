#include <iostream>
using namespace std;

int Factorial (int x) {
    int answer;
    if (x <= 1) {
        return 1;
    }
    answer = Factorial(x-1) * (x);
    return answer;
}

void test_Factorial () {
    
    if (Factorial(0) == 1) {
        cout << "test_1: OK" << endl;
    } else {
        cout << "test_1: FAIL" << endl;
    }
    if (Factorial(1) == 1) {
        cout << "test_2: OK" << endl;
    } else {
        cout << "test_2: FAIL" << endl;
    }
    if (Factorial(5) == 120) {
        cout << "test_3: OK" << endl;
    } else {
        cout << "test_3: FAIL" << endl;
    }
    if (Factorial(-2) == 1) {
        cout << "test_4: OK" << endl;
    } else {
        cout << "test_4: FAIL" << endl;
    }
}

int main () {
    return 0;
}