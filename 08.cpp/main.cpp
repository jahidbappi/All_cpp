// array_average


#include <iostream>
using namespace std;
int main()
{
    int i, sum=0, age[10];
    float avg;
    
    for (i=0; i<=9; i++)
    {
        cin>>age[i];
    }
    
    for (i=0; i<=9; i++)
    {
        sum += age[i];
        
    }
    
    avg = sum/10;
    cout <<avg<<endl;
    
    return 0;
}

