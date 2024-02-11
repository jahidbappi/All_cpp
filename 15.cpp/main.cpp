//Sum, compare _ funtion


#include <iostream>
using namespace std;


int sum (int x, int y, int z)
{
    return x+y+z;
}

double sum (float x, float y)
{
    return x+y;
}

double sum (float x, int y, int z)
{
    return x+y+z;
}

void Compare()
{
    int p,q,r;
    cout<<"Enter 3 integers: "<<endl;
    cin>>p>>q>>r;
    if(p>q && p>r)
    {
        cout<<"The greatest number is: "<<p<<endl;
    }
    else if(q>p && q>r)
    {
        cout<<"The greatest number is: "<<q<<endl;
    }
    else
    {
        cout<<"The greatest number is: "<<r<<endl;
    }
}

void compare ()
{
    char p,q,r;
    cout<<"Enter 3 character: "<<endl;
    cin>>p>>q>>r;
    if(p>q && p>r)
    {
        cout<<"The greatest character is: "<<p<<endl;
    }
    else if(q>p && q>r)
    {
        cout<<"The greatest character is: "<<q<<endl;
    }
    else
    {
        cout<<"The greatest character is: "<<r<<endl;
    }
    
}


int main()
{
    float a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<endl;
    Compare();
    cout<<endl;
    compare();
}

