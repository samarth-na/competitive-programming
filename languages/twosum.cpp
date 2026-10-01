#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  int negetive;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        return {i, j};
      }
    }
  }
  return {};
}

vector<int> twoSum2(vector<int> &nums, int target) {
  // 9 [2,7,11,15]
  unordered_map<int, int> seen;

  for (int i = 0; i < nums.size(); i++) {
    if (seen.count(target - nums[i])) {
      seen.insert({nums[i], i});
    }
    return vector<int>{seen[target - nums[i]], i};
  }
  return {};
}
int main() {
  vector<int> nums = {3, 2, 4};
  vector<int> result = twoSum(nums, 6);
  for (int i : result) {
    cout << i << endl;
  }
}
