#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t) {

    cout << "start" << endl;
    unordered_map<char, int> seen;
    if (t.size() != s.size()) {
        return false;
    }

    cout << "start" << endl;

    cout << "start" << endl;
    for (int i = 0; i < t.size(); i++) {
        cout << i << endl;

        if (!seen.count(t[i])) {
            seen.insert({t[i], 1});
        } else {
            seen[t[i]]++;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (seen.count(s[i])) {
            seen[s[i]]--;
        }
    }
    for (pair<const int, int> i : seen) {
        cout << "count " << i.second << endl;
        if (i.second != 0) {
            cout << "false" << endl;
            return false;
        }
    }

    cout << "true" << endl;
    return true;
}
int main() { isAnagram("ewwe", "wwee"); }
