#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> Reversed(vector<int> v) {
    vector<int> temp;
    for (int i = v.size() - 1; i >= 0; --i) {
        temp.push_back(v[i]);
    }
    return temp;
}

int main () {
    vector<int> numbers = {1, 5, 3, 4, 2};
    for (auto i : Reversed(numbers)) {
        cout << i;
    }
}