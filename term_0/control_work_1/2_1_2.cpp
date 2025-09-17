#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {3, 5, -1};
  bool ans = true;
  bool rev = false;

  for (int i=0; i < nums.size()-1; i++){
    if (rev & (nums[i] > nums[i+1])){
        ans = false;
        break;
    } else if(nums[i] > nums[i+1]){
        rev = true;
    }
    }
    if (ans and rev) { cout << "YES";}
    else{ cout << "NO";}
  return 0;
 
}
