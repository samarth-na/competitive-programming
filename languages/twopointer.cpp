#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void print_vector(vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << endl;
  }
  cout << endl;
}

int solve(vector<int> &nums) {
  print_vector(nums);
  return 1;
}
int count(vector<int> &nums) {
  unordered_map<int, int> count;
  for (int i : nums) {
    count[i]++;
    cout << count[i] << endl;
  }
  return count.max_bucket_count();
}

int main() {
  vector<int> nums = {1, 1, 1, 4, 5, 6, 7, 8, 9, 10};
  cout << count(nums) << endl;
}
