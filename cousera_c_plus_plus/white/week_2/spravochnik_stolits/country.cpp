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
        cout << " ";
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
            if (country_with_capital.count(B) == 0) {
                cout << "Introduce new country " << B << " with capital ";
                cout << C << endl;
                country_with_capital[B] = C; 
            } else if (country_with_capital[B] == C) {
                cout << "Country " << B << " hasn't changed its capital" << endl;
            } else {
                cout << "Country " << B << " has changed its capital from ";
                cout << country_with_capital[B] << " to " << C << endl;
                country_with_capital[B] = C; 
            }
        } else if (A == "RENAME") {
            string B, C;
            cin >> B >> C;
            if (B == C || 
                country_with_capital.count(B) == 0 ||
                country_with_capital.count(C) == 1) {
                cout << "Incorrect rename, skip" << endl;
            } else {
                cout << "Country " << B << " with capital " << country_with_capital[B];
                cout << " has been renamed to " << C << endl;
                country_with_capital[C] = country_with_capital[B];
                country_with_capital.erase(B);
            }
        } else if (A == "ABOUT") {
            string B;
            cin >> B;
            if (country_with_capital.count(B) == 0) {
                cout << "Country " << B << " doesn't exist" << endl;
            } else {
                cout << "Country " << B << " has capital " << country_with_capital[B] << endl;
            }
        } else if (A == "DUMP") {
            if (country_with_capital.size() == 0) {
                cout << "There are no countries in the world" << endl;
            } else { 
                PrintMap(country_with_capital);
            }
        }
    }
    return 0;
}