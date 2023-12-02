#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = a;
    int c = 20;
    cout<<"Address of a is : "<<&a << endl; // a hexadecimal value is printed which is the address of variable a.
    cout<<"Address of b is : "<<&b << endl;
    cout<<"Address of c is : "<<&c << endl;
    return 0;
}