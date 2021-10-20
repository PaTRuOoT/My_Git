bool IsPalindrom (string str) {
    string inverted_string = "";
    for (int i = str.size()-1; i >= 0; --i) {
        inverted_string += str[i];
    }
    if (str == inverted_string) {
        return 1;
    } else {
        return 0;
    }
}

vector<string> PalindromFilter (vector<string> words, int minLength) {
    vector <string> result = {};
    for (auto i : words) {
        if ((IsPalindrom(i) == true) && (i.size() >= minLength)) {
            result.push_back(i);
        }
    }
    return result;
}