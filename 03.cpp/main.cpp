//Fiboncci series(upto 100)


#include <iostream>
using namespace std;
int main()
{
    int x=0,y=1,sum=0;
    int i=0;
    while(i<10)
    {
        sum=x+y;
        x=y;
        y=sum;
        cout<<sum<<" ";
        i++;
    }
    
    return 0;
}
