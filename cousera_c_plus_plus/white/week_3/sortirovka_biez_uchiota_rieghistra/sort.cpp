#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool modulo_string_comparison (string x, string y) {
    for (auto& i : x) {
        i = tolower(i);
    }
    for (auto& i : y) {
        i = tolower(i);
    }
    return x < y;
}

int main(int argc, char const *argv[])
{
    vector<string> v_string;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        v_string.push_back(str);
    }
    sort(begin(v_string), end(v_string), modulo_string_comparison);
    for (const auto& i : v_string) {
        cout << i << " ";
    }
    return 0;
}
