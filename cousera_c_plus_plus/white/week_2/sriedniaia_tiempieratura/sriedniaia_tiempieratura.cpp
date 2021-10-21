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

double AverageTemperatureCalculation (vector<int> v) {
    double average_tmp = 0;
    double sum = 0;
    for (auto i : v) {
        sum += i;
    }
    average_tmp = sum / v.size();
    return average_tmp;
}

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
    vector<int> vect = {5, 6, 10, 8};
    cout << AverageTemperatureCalculation(vect);
}
