/* 
CHANGE_CAPITAL country new_capital — изменение столицы страны country на 
new_capital, либо добавление такой страны с такой столицей, 
если раньше её не было.

RENAME old_country_name new_country_name — переименование страны 
из old_country_name в new_country_name.

ABOUT country — вывод столицы страны country.

DUMP — вывод столиц всех стран. 
*/

#include <map>
#include <string>
#include <iostream>

using namespace std;

void PrintMap (const map<string, string>& m) {
    for (const auto& i : m) {
        cout << i.first << "/" << i.second;
    }
    cout << endl;

}

int main () {
    map<string, string> country_with_capital;
    int Q = 0; // количество запросов
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        string A;
        cin >> A;
        if (A == "CHANGE_CAPITAL") {
            string B, C;
            cin >> B >> C;
            country_with_capital[B] = C; 
            // изменение сталицы country на new_capital
            // или добавление такой страны с такой сталицей
            // если её раньше не было
        } else if (A == "RENAME") {
            string B, C;
            cin >> B >> C;
            country_with_capital[C] = country_with_capital[B];
            country_with_capital.erase(B);
            // переименование страны из old_country_name
            // в new_country_name
        } else if (A == "ABOUT") {
            string B;
            cin >> B;
            cout <<  country_with_capital[B] << endl;
            // вывод сталицы страны country
        } else if (A == "DUMP") {
            PrintMap(country_with_capital);
            // вывод столиц всех стран
        }
    }
    return 0;
}