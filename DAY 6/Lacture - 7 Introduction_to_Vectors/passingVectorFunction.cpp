#include <iostream>
#include <vector>
using namespace std;

void Nchange(vector<int> a){ // pass by value
    a[0] = 75;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}
void change(vector<int> &a){ // pass by reference
    a[0] = 75;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}

int main()
{
    vector<int>v;
    v.push_back(30);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(10);

    for(auto vValue : v){
        cout << vValue << " ";
    }
    cout << endl;
    // Nchange(v); // Abhi function original vector ko change nahi kar sakta

    change(v); // Ab function original vector ko change kar sakta
    cout << endl;
    for(auto vValue : v){
        cout << vValue << " ";
    }

    return 0;
}