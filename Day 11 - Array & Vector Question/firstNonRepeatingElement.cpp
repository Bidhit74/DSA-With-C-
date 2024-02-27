// Question - Find the first non-repeating element in the array.
// Example = [ 4, 5, 6, 7, 8, 4, 5 ];
// output = 6 // jabki non-repeating element (6, 7 , 8) lekin first non-repeating element
// element 6 esliye answer bhi 6 hi hoga

#include <iostream>
using namespace std;

void firstNonRepeatingElement(int fac[], int n){
    for(int i = 0; i < n; i++){
        int j = 0;
        for(j = 0; j < n; j++){
            if(fac[i] == fac[j] && i != j){
                break;
            }
        }
        if(j == n){
            cout << fac[i];
            break;
        }
    }
    
}

int main()
{
    int n = 7;
    int fact[] = {4, 5, 6, 7, 8, 4, 5,6};

    cout << "First Non-Repeating Element: " ;
    firstNonRepeatingElement(fact, n);

    return 0;
}