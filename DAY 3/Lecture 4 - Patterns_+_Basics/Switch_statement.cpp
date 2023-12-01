#include<iostream>
using namespace std;
int main(){
    int val;
    cin>>val;
    switch(val){ // expression should be integer or character expression here
        case 1:cout<<"Bidhit"; break; // always use break after each case
        case 2: cout<<"Bidhit2";break;
        case 3: cout<<"Bidhit3";break;
        default: cout<<"Default Case";break;
    }
    
    return 0;  
}