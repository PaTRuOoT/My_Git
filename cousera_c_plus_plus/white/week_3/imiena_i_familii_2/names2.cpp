#include <map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

// если имя неизвестно, возвращает пустую строку

void ClearVector(vector<string>& tmp_v) {
    for (int i = 0; i < tmp_v.size() - 1; i++) {
        if (tmp_v[i] == tmp_v[i + 1]) {
            tmp_v.erase(tmp_v.begin() + i + 1);
            i--;
        }
    }
}

string FindNameByYear(const map<int, string>& names, int year) {
  string name;  // изначально имя неизвестно
  
  // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
  for (const auto& item : names) {
    // если очередной год не больше данного, обновляем имя
    if (item.first <= year) {
      name = item.second;
    } else {
      // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
      break;
    }
  }
  return name;
}

vector<string> FindNameUntilYear(const map<int, string>& names, int year) {
  vector<string> v_name = {};
  for (const auto& item : names) {
    // если очередной год не больше данного, обновляем имя
    if (item.first <= year) {
      v_name.push_back(item.second);
    } else {
      // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
      break;
    }
  }
  return v_name;
}

string StringWithVector(vector<string> tmp_v) {
  string str = "";
  ClearVector(tmp_v);
  if (tmp_v.size() == 1) {
    str = tmp_v[0];
    return str;
  } else if (tmp_v.size() == 2) {
    str = tmp_v[1] + " " + "(" + tmp_v[0] + ")";
    return str;
  } else {
    int iterator = tmp_v.size() - 1;
    str += tmp_v[iterator];
    str += " ";
    str += + "(";
    for (int i = tmp_v.size() - 2; i >= 1; i--) {
      str += tmp_v[i] + ", ";
    }
    str += tmp_v[0];
    str += ")";
    return str;
  }
}

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    first_names[year] = first_name;
  }
  void ChangeLastName(int year, const string& last_name) {
    last_names[year] = last_name;
  }
  string GetFullName(int year) {
    // получаем имя и фамилию по состоянию на год year
    const string first_name = FindNameByYear(first_names, year);
    const string last_name = FindNameByYear(last_names, year);
    
    // если и имя, и фамилия неизвестны
    if (first_name.empty() && last_name.empty()) {
      return "Incognito";
    
    // если неизвестно только имя
    } else if (first_name.empty()) {
      return last_name + " with unknown first name";
      
    // если неизвестна только фамилия
    } else if (last_name.empty()) {
      return first_name + " with unknown last name";
      
    // если известны и имя, и фамилия
    } else {
      return first_name + " " + last_name;
    }
  }
  
  string GetFullNameWithHistory(int year) {
    // получить все имена и фамилии по состоянию на конец года year
    const vector<string> v_first_name = FindNameUntilYear(first_names, year);
    const vector<string> v_last_name = FindNameUntilYear(last_names, year);
    if (v_first_name.size() == 0 && v_last_name.size() == 0) {
      return "Incognito";
    } else if (v_first_name.size() == 0 && v_last_name.size() != 0) {
      string str = StringWithVector(v_last_name);
      return str + " with unknown first name";
    } else if (v_first_name.size() != 0 && v_last_name.size() == 0) {
      string str = StringWithVector(v_first_name);
      return str + " with unknown last name";
    } else {
      string str_1 = StringWithVector(v_first_name);
      string str_2 = StringWithVector(v_last_name);
      return str_1 + " " + str_2;
    }
  }
private:
  map<int, string> first_names;
  map<int, string> last_names;
};

int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeFirstName(1990, "Polina");
  person.ChangeLastName(1990, "Volkova-Sergeeva");
  cout << person.GetFullNameWithHistory(1990) << endl;
  
  person.ChangeFirstName(1966, "Pauline");
  cout << person.GetFullNameWithHistory(1966) << endl;
  
  person.ChangeLastName(1960, "Sergeeva");
  for (int year : {1960, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }
  
  person.ChangeLastName(1961, "Ivanova");
  cout << person.GetFullNameWithHistory(1967) << endl;
  
  return 0;
}