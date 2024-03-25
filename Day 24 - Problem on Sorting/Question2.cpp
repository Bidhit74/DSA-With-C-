// Question : Given an array , arr[] containing 'n' integers, the task is to find an integer (say K) such that after replacing each and every index of the array by |ai - K| Where (i belong to [1,n]), results in a sorted array. if no such integer exists that satisfies the above condition then return -1. (Find the range of K).

#include <iostream>
using namespace std;

float max(float a,float b){
    if(a >= b) return a;
    else return b;
}
float min(float a,float b){
    if(a < b) return a;
    else return b;
}

int main()
{
    int arr[] = {5,3,5};
    int n = 3;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;

    for(int i = 0; i < n-1; i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin,((arr[i]+arr[i+1])/2.0));
        }
        else{
            kmax = min(kmax,((arr[i]+arr[i+1])/2.0));
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }

    if(flag==false)
        cout << -1;
    else if(kmax==kmin){
        if(kmin-(int)kmin==0){
            cout << "There is only one value of K : " << kmin << endl;
        }
        else
            cout << -1;
    }
    else{
        if(kmin-(int)kmin>0) kmin = (int)kmin + 1;
        cout << "Range of K is : [" << kmin << "," << (int)kmax << "]";
    }

    return 0;
}