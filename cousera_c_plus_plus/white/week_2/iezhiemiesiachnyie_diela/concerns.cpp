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
// ф-ция инициализации вектора на месяц month

void PrintToDoListInDay (const vector<vector<string>>& v, int day) {
    for (int i=0; i < v[day-1].size(); ++i) {
        cout << v[day-1][i] << " ";
    }    

}

int main () {
    int month = 1; // текущий месяц
    vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> to_do_list = {};
    to_do_list.resize(days_in_month[month-1], {});
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
            int i;
            string s;
            cin >> s >> i;
            to_do_list[i-1].push_back(s);
            // добавить дело s на день i текущего месяца
        }
    }
    return 0;
}
