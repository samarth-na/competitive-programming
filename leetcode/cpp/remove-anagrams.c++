#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

vector<string> removeAnagrams(vector<string> &words) {

    sort(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    return words;
}

int main() {
    vector<string> words = {"abcde", "123",   "123",   "an",
                            "an",    "hello", "world", "leetcode"};
    vector<string> ans = removeAnagrams(words);
    // for (int i = 0; i < ans.size(); i++) {
    //     cout << ans[i] << " ";
    // }

    return 0;
}
