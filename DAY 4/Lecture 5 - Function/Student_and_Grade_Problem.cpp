#include<iostream>
using namespace std;
char grade(int marks){
    if(marks>=90){
        return 'O';
    }
    else if(marks>=80){
        return 'A';
    }
    else if(marks>=70){
        return 'B';
    }
    else if(marks>=60){
        return 'C';
    }
    else if(marks>=45){
        return 'D';
    }
    else{
        return 'E';
    }
}
int main(){
    int marks = 95;
    cout<<grade(marks);
    return 0;
}