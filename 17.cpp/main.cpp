//2D array_pointer_swap variable


#include <iostream>
using namespace std;

int main() {
    int x, y;
    int *p, *q;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    p = &x;
    q = &y;
    
    int a = *p;
    *p = *q;
    *q = a;

    cout << "After swapping: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}



