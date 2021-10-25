#include <map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void PrintMap (const map<int, vector<string>>& m) {
    if (m.size() == 0) {
        cout << "No buses" << endl;
    } else {
        for (const auto& i : m) {
            cout << "Bus " << i.second[0] << ": ";
            for (int j = 1; j < i.second.size(); j++) {
                cout << i.second[j] << " ";
            }
            cout << endl;
        }
    }
}

void Print_BUSES_FOR_STOP (const string& stop, const map<int, vector<string>>& m) {
    int count_stop = 0;
    for (const auto& i : m) {
        for (int j = 1; j < i.second.size(); j++) {
            if (i.second[j] == stop) {
                cout << i.second[0] << " ";
                count_stop++;
            }
        }
    }
    if (count_stop == 0) {
        cout << "No stop" << endl;
    } else {
        cout << endl;
    }
    // No stop
    // No buses
    // return: vector ? string
    // string == bus. Stop stop: no interchange
    // else cout << string
}

int main() {

    int Q = 0;
    cin >> Q;
    map<int, vector<string>> bus_routes;
    int count_bus_routes = 0;
    for (int i = 0; i < Q; i++) {
        string inquiry;
        cin >> inquiry;
        if (inquiry == "NEW_BUS") {
            string bus, stop;
            int stop_count;
            cin >> bus >> stop_count;
            bus_routes[count_bus_routes].push_back(bus);
            for (int i = 0; i < stop_count; i++) {
                cin >> stop;
                bus_routes[count_bus_routes].push_back(stop);
            }
            count_bus_routes++;
        } else if (inquiry == "BUSES_FOR_STOP") {
            string stop;
            cin >> stop;
            Print_BUSES_FOR_STOP(stop, bus_routes);
        } else if (inquiry == "STOPS_FOR_BUS") {
            string bus;
            cin >> bus;
        } else if (inquiry == "ALL_BUSES") {
            PrintMap(bus_routes);
        }
     }
    return 0;
}

