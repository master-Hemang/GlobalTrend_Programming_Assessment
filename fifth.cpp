#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;  // in case k is greater than n
    if (k == 0) return;  // no need to rotate if k is 0
    
    // Step 1: Reverse the entire array
    reverse(nums.begin(), nums.end());
    
    // Step 2: Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);
    
    // Step 3: Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

// Helper function to print the array
void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 4;
    
    cout << "Original array: ";
    printArray(nums);
    
    rotate(nums, k);
    
    cout << "Rotated array by " << k << " steps: ";
    printArray(nums);
    
    return 0;
}
