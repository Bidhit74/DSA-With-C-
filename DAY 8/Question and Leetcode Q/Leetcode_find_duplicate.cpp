// 287 - Find The Duplicate Number 
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2

// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int findDuplicate(vector<int>& nums) {
//     int ans;
//     for(int i = 0; i < nums.size();i++){
//         for(int j = i+1; j < nums.size();j++){
//             if(nums[j] == nums[i]){
//                 ans = nums[j];
//                 break;
//             }
//         }
//     }
//     return ans;
// }

int findDuplicate(vector<int>& nums) {
    int ans;
// first solution
    // sort(nums.begin(),nums.end());
    // for(int i = 0; i<nums.size()-1;i++){
    //     if(nums[i]==nums[i+1]){
    //     ans = nums[i];
    //     }
    // }
    // return ans;

// second solution
// Visited solution
    ans = -1;
    for(int i = 0; i<nums.size();i++){
        int index = abs(nums[i]);

        // already visited
        if(nums[index]<0){
            ans = index;
            break;
        }

        // visited mark
        nums[index] *= -1;
    }
    return ans;

// third solution
// Position Method
    // while(nums[0] != nums[nums[0]]){
    //     swap(nums[0],nums[nums[0]]);
    // }
    // return nums[0];
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};

    cout <<  findDuplicate(nums) << endl;
    return 0;
}