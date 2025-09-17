#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {-10, -10, -10, 1, 1, 1, 2};
  int m, l = 0, r = nums.size(), n;
  cout << "Enter number N (element in nums): ";
  cin >> n;
  while (r - l > 1) {
    m = (l + r) / 2;
    if (nums[m] > n) {
      r = m;
    } else {
      l = m;
    }
  }
  l++;
  cout << "Ansver: " << r + 1 << endl;
  return 0;
  
}
