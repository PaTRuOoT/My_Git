/* 
Problem_1:
ENG:
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

RUS:
Если выписать все натуральные числа меньше 10, кратные 3 или 5, 
то получим 3, 5, 6 и 9. Сумма этих чисел равна 23.

Найдите сумму всех чисел меньше 1000, кратных 3 или 5.
 */
#include <iostream>
#include <vector>

using namespace std;

int FindTheSumOfAllNumbersLessThan_N_MultiplesOf_A_or_B (int N, int A, int B) {

    /* 
    The function takes an integer N. Prints the sum of all natural 
    numbers divisible by A or B 
    */
    int sum = 0; // Variable for calculating the sum of numbers
    for (int i = 0; i < N; i++) { // We iterate over all numbers 
    // from 0 to N. If the number satisfies the condition, 
    // we increase sum by this number
        if (i % A == 0 || i % B == 0) {
            sum += i;
        }
    }
    return sum; // return the required number
}

void test_FindingTheSumOfNaturalNumbersLessThanN () {
    if (FindTheSumOfAllNumbersLessThan_N_MultiplesOf_A_or_B(10, 3, 5) == 23) {
        cout << "Test-1: OK" << endl;
    } else {
        cout << "Test-1: FAIL" << endl;
    }
}

int main () {
    test_FindingTheSumOfNaturalNumbersLessThanN();
    cout << FindTheSumOfAllNumbersLessThan_N_MultiplesOf_A_or_B(1000, 3, 5);
    return 0;
}