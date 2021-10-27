#include <iostream>
#include <string>
#include <set>

using namespace std;

int main () {
    int N = 0; // количество уникальных строк
    cin >> N;
    set<string> many_unique_strings;
    for (int i=0; i < N; i++) {
        string tmp_str;
        cin >> tmp_str;
        many_unique_strings.insert(tmp_str);
    }
    cout << many_unique_strings.size();
    return 0;
}