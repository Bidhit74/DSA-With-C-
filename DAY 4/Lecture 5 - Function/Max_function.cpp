// Find max of 3 number;
#include <iostream>
using namespace std;

void max(int a, int b, int c){
    if(a>b && a>c){
        cout << "Max: " << a;
    }
    else if(a<b && c<b){
        cout << "Max: " << b;
    }
    else{
        cout << "Max: " << c;
    }
}


int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    max(a, b, c);
    
    return 0;
}