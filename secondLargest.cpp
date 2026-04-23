// Problem: Find Second Largest Element

#include <iostream>
#include <vector>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    int n = nums.size();
    int mx = nums[0];
    int secondLargest = -1;

    // Find maximum
    for(int i = 0; i < n; i++){
        if(nums[i] > mx){
            mx = nums[i];
        }
    }

    // Find second largest
    for(int i = 0; i < n; i++){
        if(nums[i] == mx)
            continue;
        else if(nums[i] > secondLargest){
            secondLargest = nums[i];
        }
    }

    return secondLargest;
}

int main() {
    vector<int> nums = {1, 5, 3, 4, 2};

    int ans = secondLargestElement(nums);

    if(ans == -1)
        cout << "No second largest element";
    else
        cout << "Second Largest: " << ans;

    return 0;
}
