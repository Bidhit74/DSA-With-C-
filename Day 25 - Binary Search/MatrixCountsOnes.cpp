// Question : Given a matrix having 0-1 only where each row is sorted in increasing order , find the row with the maximum number of 1's;
//By using Binary Search
//Time Complexity : O(m log n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][6] = {{1, 1, 1, 1, 1, 1}, {0, 0, 1, 1, 1, 1}, {0, 0, 0, 0, 1, 1}, {0, 0, 0, 0, 0, 1}, {0,1, 1, 1, 1, 1}};
    int n = 5, m = 6;
        int maxOnes = 0;
        int newindex = 0;
    for(int i = 0; i < n; i++){
        int s = 0;
        int e = m - 1;
        int count = 0;
        int index = 0;
        while(s <= e){
            int mid = s + (e - s) / 2;
            index = i;
            if(arr[i][mid] == 1){
                if(arr[i][mid-1]!=1){
                    index = i;
                    count = m - mid;
                    break;
                }
                else{
                    e = mid - 1;
                }
            }
            else{
                if(arr[i][mid+1]==1){
                    index = i;
                    count = m - (mid + 1);
                    break;
                }
                else{
                    s = mid + 1;
                }
            }
        }
        cout << index << " : " <<count << endl;
        maxOnes = max(maxOnes,count);
        if(maxOnes==count){
            newindex = index;
        }
    }

    cout << "Row No.: " << newindex << " : maximum number of 1's : " << maxOnes;
    return 0;
}