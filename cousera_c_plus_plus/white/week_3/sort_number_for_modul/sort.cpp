#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N = 0;
    cin >> N;
    vector<int> vector;
    for (int i = 0; i < N; i++) {    
        int number = 0;
        cin >> number;
        vector.push_back(number);
    }
    sort(begin(vector), end(vector), [](int x, int y) {return abs(x) < abs(y);});
    // на вход два числа x и y
    // необходимо получить true, если |x| < |y|
    // взятие числа по модулю функция abs()
    for (const auto& i : vector) {
        cout << i << " ";
    }
    return 0;
}
