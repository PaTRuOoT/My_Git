#include <iostream>

#include <set>
#include <map>

using namespace std;

int main () {
    int Q = 0; // общее количество запросов
    cin >> Q; // считываем общее количество запросов
    int count_stop = 1; // количество уникальных остановок в map
    set<string> v_stop; // множество для добавления остановок в map
    map<set<string>, int> bus_stop; // map хранящая остановки
    for (int q = 0; q < Q; q++) {
        // проходим циклом от 0 до Q, равному количеству запросов
        int N = 0; // переменная для считывания количество остановок в запросе
        cin >> N; // считываем N
        v_stop.clear(); // очищаем ранее добавленные остановки в вектор
        for (int n=0; n < N; n++) {
            // проходим циклом от 0 до N, равному количеству остановок в запросе
            string tmp_stop; // переменная для считывания названия остановки
            cin >> tmp_stop; // считываем название остановки
            v_stop.insert(tmp_stop); // добавляем остановку во временный сет
        }
        if (bus_stop.count(v_stop) != 0) {
            // проверяем условем
            // если указанный набор остановок существует, то:
            cout << "Already exists for " << bus_stop[v_stop] << endl;
        } else { 
            // если данный набор остановок отсутствует
            // добавлем набор оставк в map
            // увеличиваем счетчик количества уникальных остановок в запросе на 1
            bus_stop[v_stop] = count_stop;
            cout << "New bus " << count_stop << endl;
            count_stop++;
        }
        
    }
    return 0; // программа завершилась без ошибок
}

//////////////////////////

// Решение coursera


/* 

#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {
  int q;
  cin >> q;

  map<set<string>, int> buses;

  for (int i = 0; i < q; ++i) {
    int n;
    cin >> n;
    set<string> stops;
    for (int j = 0; j < n; ++j) {
      string stop;
      cin >> stop;
      stops.insert(stop);
    }
    if (buses.count(stops) == 0) {
      const int new_number = buses.size() + 1;
      buses[stops] = new_number;
      cout << "New bus " << new_number << endl;
    } else {
      cout << "Already exists for " << buses[stops] << endl;
    }
  }

  return 0;
}


 */