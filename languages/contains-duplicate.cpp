#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

bool hasduplicate_set(vector<int> &nums) {
  unordered_set<int> seen; // declare the set
  for (int i : nums) {
    if (seen.count(i)) {
      return true;
    }
    seen.insert(i);
  }
  return false;
}
bool hasduplicate_sort(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == nums[i + 1]) {
      return true;
    }
  }
  return false;
}
