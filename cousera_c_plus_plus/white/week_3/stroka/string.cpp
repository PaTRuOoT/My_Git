#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class ReversibleString {
    public:
        ReversibleString() {}
        ReversibleString(const string& t_str) {
            str = t_str;
        }
        void Reverse () {
            reverse(begin(str), end(str));
        }
        string ToString () const {
            return str;
        }

    private:
        string str;
};


int main() {
    ReversibleString s("live");
    s.Reverse();

  cout << s.ToString() << endl;
  
  s.Reverse();
  const ReversibleString& s_ref = s;
  string tmp = s_ref.ToString();
  cout << tmp << endl;
  
  ReversibleString empty;
  cout << '"' << empty.ToString() << '"' << endl;
  
  return 0;
}