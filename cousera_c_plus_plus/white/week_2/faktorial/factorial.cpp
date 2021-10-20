#include <iostream>
using namespace std;

int Factorial (int x) {
    int answer;
    if (x <= 1) {
        return 1;
    }
    answer = Factorial(x) * (x-1);
    return answer;
}

void test_Factorial (int test_x) {
    
    if (Factorial(0) == 1) {
        cout << "test_1: OK" << endl;
    }
}

int main () {
    return 0;
}