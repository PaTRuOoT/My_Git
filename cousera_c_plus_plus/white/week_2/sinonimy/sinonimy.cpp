#include <set>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int Q = 0;
    cin >> Q; // количество запросов
    map<string, set<string>> synonyms;
    for (int i = 0; i < Q; i++) {
        string inquiry;
        cin >> inquiry; // считываем запрос
        if (inquiry == "ADD") {
            string word_1, word_2;
            cin >> word_1 >> word_2;
            synonyms[word_1].insert(word_2);
            synonyms[word_2].insert(word_1);
        } else if (inquiry == "COUNT") {
            string word_for_count;
            cin >> word_for_count;
            cout << synonyms[word_for_count].size() << endl;;
        } else if (inquiry == "CHECK") {
            string word_1, word_2;
            cin >> word_1 >> word_2;
            if (synonyms[word_1].count(word_2) == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
