set<string> BuildMapValuesSet(const map<int, string>& m) {
    set<string> set;
    for (const auto& i : m) {
        set.insert(i.second);
    }
    return set;
}