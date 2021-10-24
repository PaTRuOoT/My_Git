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
    cout << endl;    

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
            if (month == 12) {
                month = 1;
            } else {
                month++;
                if (days_in_month[month-1] > days_in_month[month-2]) {
                    to_do_list.resize(days_in_month[month-1], {});
                } else if (days_in_month[month-1] < days_in_month[month-2]) {
                    for (int i = days_in_month[month-1]; i < days_in_month[month-2]; i++) { 
                        for (int j = 0; j < to_do_list[i].size(); j++) {
                            to_do_list[days_in_month[month-1]-1].push_back(to_do_list[i][j]);
                        }
                        to_do_list.resize(days_in_month[month-1]);
                    }
                }
            }
        } else if (A == "DUMP") {
            int day;
            cin >> day;
            if (to_do_list[day-1].size() == 0) {
                cout << 0 << endl; 
            } else {
                PrintToDoListInDay(to_do_list, day);
            }
        } else if (A == "ADD") {
            int i;
            string s;
            cin >> i >> s;
            to_do_list[i-1].push_back(s);
        }
    }
    return 0;
}
