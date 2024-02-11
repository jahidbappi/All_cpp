#include <iostream>
using namespace std;
int main()
{
    
    char arr[5] = {'a','b','c','d','e'};
    
    for(int i=0; i<5; i++)
    {
        char a =(char)arr[i]-32;
        cout<<(char)a<<endl;
    }

}
