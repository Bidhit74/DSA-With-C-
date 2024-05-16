// Question : Sqrt(x) : Using Binary Search

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
        //By Using Binary Search
        //T.C = O(log n)
        int s = 0;
        int e = x;

        while(s <= e){
            int m = s + (e-s)/2;
            long long mid = (long long)m; // type cast integers not store big 
            long long y = (long long)x;
            if((mid*mid) == y){
                return m;
            }
            else if((mid*mid) < y){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
    return e;
    }


int main()
{
    int x = 256;
    cout << "Square root of " << x << " : " << mySqrt(x) << endl;
    cout << "Square root of " << x << " : " << sqrt(x)<< endl;

    return 0;
}