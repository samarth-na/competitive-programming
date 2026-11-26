#include <iostream>
#include <vector>
using namespace std;

long long maxSubarraySum(vector<int> &nums) {
    int currentsum = nums[0];
    int maxsum = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size(); j++) {
            int element = nums[j];
            if (element == nums[i]) {
                element = 0;
            }
            currentsum = max(currentsum + element, element);
            if (currentsum > maxsum) {
                maxsum = currentsum;
            }
        }
    }
    return maxsum;
}
int main() {
    vector<int> nums = {-3, 2, -2, -1, 3, -2, 3};
    int ans = maxSubarraySum(nums);
    cout << ans;
}
