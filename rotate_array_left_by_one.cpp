#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();

        int temp = nums[0];
        for(int i = 1; i < n; i++){
            nums[i-1] = nums[i];
        }
        nums[n-1] = temp;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    Solution obj;
    obj.rotateArrayByOne(nums);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}
