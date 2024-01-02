// // Quetion - Print the given pattern : Binary Traingle
// n = 4
// 1
// 01
// 101
// 0101

// First Methods
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     int b = 0;
//     for(int i = 1; i <=n; i++){
//         if(i%2!=0) b = 1;
//         for(int j = 1; j <=i; j++){
//             cout << b << " ";
//             // fliping elements
//             if(b == 0) b = 1;
//             else b = 0;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Second Methods

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=i; j++){
            if((i+j)%2==0)
                cout << 1;
            else 
                cout << 0;

        }
        cout << endl;
    }

    return 0;
}