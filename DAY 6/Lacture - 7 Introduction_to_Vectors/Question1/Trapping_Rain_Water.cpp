// Trapping Rain Water (Leetcode - 42) - (Hard Question)
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

#include <iostream>
#include <vector>
using namespace std;
/*
int trap(vector<int>& height) {
    int preGreater[height.size()];
    int nextGreater[height.size()];
    int n = height.size();
    int max = height[0];
    int max1 = height[n-1];
    int output = 0;

    // Step 1 - Find the Previous Greater element from the vector.
    preGreater[0] = -1;
    preGreater[n-1] = -1;
    for(int i = 1; i < n-1; i++){
        preGreater[i] = max;
        if(max < height[i]){
            max = height[i];
        }
    }

    // Step 2 - Find the Next Greater element from the vector.
    nextGreater[0] = -1;
    nextGreater[n-1] = -1;
    for(int i = n-2; i > 0; i--){
        nextGreater[i] = max1;
        if(max1 < height[i]){
            max1 = height[i];
        }
    }

    // Step 3 - Finding minimum element preGreater vs nextGreater then merging the element in preGreater array.
    for(int i = 0; i < height.size(); i++){
        if(preGreater[i] > nextGreater[i]){
            preGreater[i] = nextGreater[i];
        }
    }
    // Step 4 - Find the element (preGreater - height) then merging the element in height vector.
    for(int i = 0; i < height.size(); i++){
        height[i] = preGreater[i] - height[i];
    }

    // Step 5 - Add karna positive element ko output variable me .
    for(int i = 0; i < height.size(); i++){
        if(height[i]>0){
            output += height[i];
        }
    }
    return output;
}
*/

// Optimize solution

int trap(vector<int>& height) {
    int n = height.size();
    int preGreater[n];
    int max = height[0];
    int water = 0;

    // Step 1 - Find the Previous Greater element from the vector.
    preGreater[0] = -1;
    for(int i = 1; i < n-1; i++){
        preGreater[i] = max;
        if(max < height[i]){
            max = height[i];
        }
    }

    // Step 2 - Find the Next Greater element from the vector. >> preGreater as Next Greater
    preGreater[n-1] = -1;
    max = height[n-1];
    for(int i = n-2; i > 0; i--){
        if(max < preGreater[i]) {
            preGreater[i] = max;
        }
        if(max < height[i]){
            max = height[i];
        }
    }

    // Step 3 - Add karna positive element ko output variable me .
    for(int i = 0; i < height.size(); i++){
        if(height[i]<preGreater[i]){
            water += (preGreater[i] - height[i]);
        }
    }
    return water;
}

int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int output = trap(height);

    cout << "Trapping Rain Water : " << output << endl;

    
    return 0;
}