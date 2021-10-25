#include <map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void PrintMap (const map<string, map<int, string>>& m) {
    for (const auto& i : m) {
        cout << "Bus " << i.first << ":";
        for (const auto& j : i.second) {
            cout << " " << j.second;
        }
        cout << endl;
    }
}

int main() {

    int Q = 0; // количество запросов
    cin >> Q;
    map<string, map<int, string>> bus_routes;
    for (int i = 0; i < Q; i++) {
        string inquiry;
        cin >> inquiry;
        if (inquiry == "NEW_BUS") {
            map<int, string> tmp_map; // временный словарь
            int stop_count; // количество остановок на маршруте
            string bus; // название маршрута
            cin >> bus >> stop_count; 
            for (int i = 0; i < stop_count; i++) {
                string stop;
                cin >> stop;
                tmp_map[i] = stop; 
            }
            bus_routes[bus] = tmp_map;
        } else if (inquiry == "BUSES_FOR_STOP") {
            // список автобусов через остановку stop
            string stop;
            cin >> stop;
            int count_stop = 0;
            for (const auto& i : bus_routes) {
                for (const auto& j : i.second) {
                    if (j.second == stop) {
                        ++count_stop;
                        cout << i.first << " ";
                        break;
                    }
                }
            }
            if (count_stop == 0) {
                cout << "No stop" << endl;
            } else {
                cout << endl;
            }
        } else if (inquiry == "STOPS_FOR_BUS") {
            // описания остановок маршрута bus
            // описание каждой остановки Stop: bus1, bus2 ...
            // Если через остановку не проезжает ни один автобус,
            // кроме bus. Вывести no interchange
            // Если маршрута bus не существует
            // вывести No bus
        } else if (inquiry == "ALL_BUSES") {
            PrintMap(bus_routes);
        }
     }
    /* code */
    return 0;
}

