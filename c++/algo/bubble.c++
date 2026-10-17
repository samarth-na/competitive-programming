#include <utility>
#include <vector>
using namespace std;

vector<int> bubble(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                swap(nums[i], nums[j]);
            }
        }
    }
    return nums;
}
