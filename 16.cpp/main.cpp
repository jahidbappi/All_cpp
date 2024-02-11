//pointer


#include <iostream>
using namespace std;

int main()
{
    int *p,*q;
    int a=2, b=3, sum, sub, mul, div;
    p=&a;
    q=&b;
    //cout<<p<<endl;
    //cout<<q<<endl;
    sum = *p + *q;
    sub = *p - *q;
    mul = *p * *q;
    div = *p / *q;
    cout<<sum<<endl;
    cout<<sub<<endl;
    cout<<mul<<endl;
    cout<<div<<endl;
    
    return 0;
}
