/* 
Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. 
Найдите номера дней (в нумерации с нуля) со значением температуры выше 
среднего арифметического за все N дней.
N - количество дней наблюдений
average_temp - среднее арифметичское значение температуры на N дней
K - число дней с темперурой > average_temp
Вход: N => значения температуры по дням
Выход: K => номера этих дней
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> FillingTemperature () {
    vector<int> FillingTemperatureVector;
    int tmp;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        FillingTemperatureVector.push_back(tmp);
    }
    return FillingTemperatureVector;
}

int main () {
    for (auto i : FillingTemperature()) {
        cout << i << endl;
    }
}
