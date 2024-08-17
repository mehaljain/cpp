#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reversal(vector<int> &nums, int s, int e) {
        while(s < e) {
            int temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
            s++;
            e--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reversal(nums, 0, nums.size() - 1);
        reversal(nums, 0, k - 1);
        reversal(nums, k, nums.size() - 1);
    }
};

int main() {
    // Initialize the vector and k value
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // Create an object of the Solution class
    Solution sol;
    
    // Call the rotate function
    sol.rotate(nums, k);

    // Print the rotated array
    cout << "Rotated array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
