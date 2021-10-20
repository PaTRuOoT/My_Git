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
    return 0;
}