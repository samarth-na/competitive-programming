#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &nums) {
  cout << nums[1] << endl;
  return 1;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < nums.size(); i++) {
    solve(nums, i);
  }
  return 0;
}
