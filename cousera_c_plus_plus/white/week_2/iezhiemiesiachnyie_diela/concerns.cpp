/*
ADD i s - назначить дело s на день i
DUMP i - вывести все дела, запланированные на день i
NEXT - перейти к списку дел на месяц
Q - число операций
*/
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// вектор количества дней по месяцам (31, 30 и тд)
// вектор со списком дел ({месяц 1, 2 и тд}, {день}, {список дел})
// ф-ция вывода списка дел в конкретный день с аргументом день


int main () {
    int N = 0; // количество операций
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string A;
        cin >> A;
        if (A == "NEXT") {
            cout << "NEXT" << endl;
            // переход к списку дел на след месяц
        } else if (A == "DUMP") {
            cout << "DUMP" << endl;
            // функция вывода дел
        } else if (A == "ADD") {
            cout << "ADD" << endl;
            // добавить дело s на день i текущего месяца
        }
    }
    return 0;
}
