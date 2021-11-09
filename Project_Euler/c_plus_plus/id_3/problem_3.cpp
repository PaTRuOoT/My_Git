#include <iostream>
#include <set>
#include <vector>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vector(6000000);
    set<int> set = {};
     
    /* while (i < N) {
        if (set.count(i) == 1) {
            i++;
            continue;
        } else {
            vector.push_back(i);
            int j = i * i;
            while (j < N) {
                //cout << j << " :j" << endl;
                set.insert(j);
                j += i;
            }
            i++;
        }
    }
    for (const auto& v : vector) {
        cout << v << " ";
    } */
    return 0;
}
