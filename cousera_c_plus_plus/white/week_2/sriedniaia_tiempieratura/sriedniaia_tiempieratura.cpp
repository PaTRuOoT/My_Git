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
#include <vector>
#include <iostream>

using namespace std;

double AverageTemperatureCalculation (const vector<int>& v) {
    double average_tmp = 0;
    double sum = 0;
    for (auto i : v) {
        sum += i;
    }
    average_tmp = sum / v.size();
    return average_tmp;
}

vector<int> MeanTemperatureFilter (const vector<int>& v) {
    vector<int> MeanTemperatureVector;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > AverageTemperatureCalculation(v)) {
            MeanTemperatureVector.push_back(i);
        }
     }
    cout << MeanTemperatureVector.size() << endl;
    for (const auto& i : MeanTemperatureVector) {
        cout << i << " ";
    }
    return MeanTemperatureVector;
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
    MeanTemperatureFilter(FillingTemperature());
}
