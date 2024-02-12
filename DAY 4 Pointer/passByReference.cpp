// #include <iostream>
// using namespace std;

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return;
// }

// int main()
// {
//     int x = 8, y = 15;
//     swap(&x, &y);

//     cout << x << " " << y << endl;

//     return 0;
// }


// Or

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int x = 8, y = 15;
    swap(x, y);

    cout << x << " " << y << endl;

    return 0;
}