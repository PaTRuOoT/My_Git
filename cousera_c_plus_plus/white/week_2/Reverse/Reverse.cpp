#include<iostream>
#include<vector>
#include<string>

using namespace std;

void Reverse(vector<int>& v) {
    vector<int> temp;
    for (int i = v.size() - 1; i >= 0; --i) {
        temp.push_back(v[i]);
    }
    v = temp;
}

int main () {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
}