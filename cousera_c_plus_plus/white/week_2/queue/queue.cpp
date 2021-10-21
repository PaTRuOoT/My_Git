#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    vector<bool> people_in_queue = {};
    string A;
    int B = 0;
    int N = 0; // количество операций
    int size_vector = people_in_queue.size();
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A;
        if (A == "COME") 
        {
            cin >> B;
            size_vector += B;
            people_in_queue.resize(size_vector, false);
        } 
        else if (A == "WORRY") 
        {
            cin >> B;
            people_in_queue[B] = true;
        } 
        else if (A == "QUIET") 
        {
            cin >> B;
            people_in_queue[B] = false;
        } 
        else if (A == "WORRY_COUNT") 
        {
            cout << count(begin(people_in_queue), end(people_in_queue), true) << endl;
        }
    }  
    return 0;
}