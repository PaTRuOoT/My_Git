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