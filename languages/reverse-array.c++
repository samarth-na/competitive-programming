#include <iostream>
#include <vector>

using namespace std;

// void reverseString(vector<char> &s) {
//     int lo = 0;
//     int hi = s.size() - 1;
//     while (lo < hi) {
//         swap(s[lo], s[hi]);
//         lo++;
//         hi--;
//     }
// }

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }
    return nums1;
}

int main() {

    vector<int> nums1 = {1, 1, 2, 4, 6, 0, 0, 0, 0, 0}; // size 10, m=5
    vector<int> nums2 = {2, 2, 4, 9, 10};               // size 5,  n=5
    vector<int> nums3 = merge(nums1, 5, nums2, 5);      // size 15, m=10, n=5

    for (int i = 0; i < nums3.size(); i++) {
        cout << nums3[i] << " ";
    }
    cout << endl;

    return 0;
}
