#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

struct FullName {
    string FirstName;
    string LastName;
};

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
        if (person_name.count(year) == 0) person_name[year].LastName = "";
        person_name[year].FirstName = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        if (person_name.count(year) == 0) person_name[year].FirstName = "";
        person_name[year].LastName = last_name;
    }
    string GetFullName(int year) {
        if (person_name.size() == 0) {
            return "Incognito";
        }
        else {
            for (const auto& i : person_name) {
                if (year < i.first) return "Incognito";
                break;
            }
        }
        string nm = "";
        string sn = "";
        for (const auto& i : person_name) {
            if (i.first <= year && i.second.LastName != "") sn = i.second.LastName;
            if (i.first <= year && i.second.FirstName != "") nm = i.second.FirstName;
        }
        if(nm == "") return sn + " with unknown first name";
        else if(sn == "") return nm + " with unknown last name";
        else return nm + " " + sn;
    }
private:
    map<int, FullName> person_name;
};

int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  return 0;
}