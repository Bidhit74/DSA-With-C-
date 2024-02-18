// Question** -- Find the next permutations of array.
// Note:- if not possible then print the sorted order in ascending order. (Leetcode - 31)
// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// Example 1:
// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:
// Input: nums = [3,2,1]
// Output: [1,2,3]

#include <iostream>
#include <vector>
using namespace std;

void reversePartofArray(int start , int end, vector<int> &arr){
    while(start <= end){
        int temp = arr.at(start);
        arr.at(start) = arr.at(end);
        arr.at(end) = temp;
        start++;
        end--;
    }
}

void nextPermutation(vector<int>& nums) {
        int pivotIndex = -1;
        int n = nums.size();
        // Step 1 - finding pivot Index

        for (int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i+1]){
                pivotIndex = i;
                break;
            }
        }
        // Step 2 - Sorting/Reverse After Pivot Index
        if(pivotIndex==-1){ // if array is already greatest
            reversePartofArray(0, n - 1, nums);
            return;
        }
        reversePartofArray(pivotIndex + 1, n - 1, nums);
        // Step 3 - fining the pivotIndex se just greater element index 
        int justGreaterIndex = -1;
        for(int i = pivotIndex+1 ; i<n; i++){
            if(nums[i]>nums[pivotIndex]){
                justGreaterIndex = i;
                break;
            }
        }
        // Step 4 - Swaping PivotIndex and justGreaterIndex
        int temp = nums[pivotIndex];
        nums[pivotIndex] = nums[justGreaterIndex];
        nums[justGreaterIndex] = temp;
        return;
    }

int main()
{
    vector<int> nums = {1, 4, 3, 2};
    nextPermutation(nums);
    for(int i = 0; i < nums.size();i++) {
        cout << nums[i] << " ";
    }

    return 0;
}