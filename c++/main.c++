#include "./algo/bubble.c++"
#include <iostream>
int main() {
    vector<int> nums = {5, 7, 1, 4, 9, 1, 7, 1, 4, 5};
    nums = bubble(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
