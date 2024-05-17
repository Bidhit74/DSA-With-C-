// Question : Give a number 'n' Predict whether 'n' is a valid perfect square or not.
//Leetcode No. 367
//By Using Binary Search   ||  T.C = O(log n)

#include <iostream>
using namespace std;

bool checkPerfectSquare(int num){
        //By Using Binary Search
        //T.C = O(log n)
        int s = 0;
        int e = num;
        bool flag = false;
        while(s <= e){
            int m = s + (e-s)/2;
            long long mid = (long long)m; // type cast integers not store big 
            long long y = (long long)num;
            if((mid*mid) == y){
                flag = true;
                break;
            }
            else if((mid*mid) < y){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
    return flag;
}

int main()
{
    int num = 20;
    if(checkPerfectSquare(num)){
        cout << num << " : Perfect square";
    }
    else{
        cout << num << " : Not perfect square";
    }
    return 0;
}