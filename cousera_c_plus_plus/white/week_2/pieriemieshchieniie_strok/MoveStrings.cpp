#include<vector>
#include<string>
#include<iostream>
using namespace std;

void MoveString (vector<string>& sourse, vector<string>& destination) {
    for (auto i : sourse) {
        destination.push_back(i);
    }
    sourse.clear();
}

int main () {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveString(source, destination);
    for (auto i : destination) {
        cout << i << " ";
    }
}