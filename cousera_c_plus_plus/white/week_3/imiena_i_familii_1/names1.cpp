#include <map>
#include <string>
#include <iostream>

using namespace std;

string Find_Name_From_Year (const map<int, string>& map, const int& year) {
  string str_name = "empty";
  for (const auto& i : map) {
    if (i.first <= year) {
      str_name = i.second;
    } else {
      break;
    }
  }
  return str_name;
}

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    map_first_name[year] = first_name;
  }
  void ChangeLastName(int year, const string& last_name) {
    map_last_name[year] = last_name;
  }
  string GetFullName(int year) {
    string str_first_name = Find_Name_From_Year(map_first_name, year);
    string str_last_name = Find_Name_From_Year(map_last_name, year);
    if (str_first_name == "empty" && str_last_name == "empty") {
      return "Incognito";
    } else if (str_first_name == "empty") {
      return str_last_name + " with unknown first name";
    } else if (str_last_name == "empty") {
      return str_first_name + " with unknown last name";
    } else {
      return str_first_name + " " + str_last_name;
    }
  }
private:
  map<int, string> map_first_name;
  map<int, string> map_last_name;
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