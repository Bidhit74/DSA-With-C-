// My Problem Hollow Rectangle
// *  *  *  *  *  * 
// *              *
// *  *  *  *  *  * 

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < 3; i++) {
//         string space = "  ";
//         if(i == 1){
//             cout << "* ";
//             for (int k = 0; k < 3; k++)
//             {
//                 cout << space;
//             }
//             cout << "* ";
//         }
//         for (int j = 0; j < 5; j++){
//             if( i == 0 || i ==2)
//             cout << "* ";
//         }
//         cout << endl;
//     }
//         return 0;
// }

// Or

// #include<iostream>
// using namespace std;

// int main(){
//     for (int row = 0; row < 3; row++) {
//         if(row == 0 || row == 2){
//             for(int col = 0; col < 5; col++) {
//                 cout << "* ";
//             }
//         }
//         else{
//             cout << "* ";
//             for (int space = 0; space < 3; space++) {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }

//         return 0;
// }

// My Problem Hollow Square
// *  *  *  *  * 
// *           *
// *           *
// *           *
// *  *  *  *  * 

#include<iostream>
using namespace std;

int main(){
    int rowCount, columnCount;
    cout << "How many numbers are rows\n";
    cin >> rowCount;
    cout << "How many numbers are columns\n";
    cin>>columnCount;


    for (int row = 0; row < rowCount; row++) {
        if(row == 0 || row == rowCount-1){
            for(int col = 0; col < columnCount; col++) {
                cout << "* ";
            }
        }
        else{
            cout << "* ";
            for (int space = 0; space < columnCount-2; space++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

        return 0;
}