#include <map>
#include <iostream>
#include <string>

using namespace std;

map<char, int> BuildCharCounter (const string& temp_str) {
    map<char, int> result_map;
    for (const char& i : temp_str) {
        ++result_map[i];
    } 
    return result_map;
}

int main () {
    int N; // количество операций
    cin >> N;
    for (int i = 0; i < N; i++) {
        string word_1, word_2;
        cin >> word_1 >> word_2;
        if (BuildCharCounter(word_1) == BuildCharCounter(word_2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}