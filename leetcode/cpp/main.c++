#include <iostream>
#include <vector>

using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    vector<int> msum = {};
    for (int i = 0; i + k <= nums.size(); i++) {
        int current = 0;
        for (int j = i; j < i + k; j++) {
            cout << i << k << " " << j << " " << nums[j] << endl;
            current = max(nums[j], current);
        }
        cout << current << endl;
        msum.push_back(current);

        cout << endl;
    }

    return msum;
}

int main() {

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> anss = maxSlidingWindow(nums, k);
    cout << "answer" << endl;
    for (int i : anss) {
        cout << i << endl;
    }
}
