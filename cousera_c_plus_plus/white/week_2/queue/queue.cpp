#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main () {
    vector<bool> people_in_queue = {};
    string A;
    int B;
    int N = 0; // количество операций
    int size_vector = people_in_queue.size();
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A >> B;
        if (A == "COME") {
            size_vector += B;
            people_in_queue.resize(size_vector, false);
        }
        cout << "size: " << (people_in_queue.size()) << endl;
    }
    // WORRY i - X
    // QUIET i - X
    // COME k - X
    // COME -k - X
    // WORRY_COUNT - X
    
    return 0;
}