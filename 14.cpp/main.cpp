//basic calculator, basic info


#include <iostream>
#include <string.h>
using namespace std;

double addition (float a, float b, float c)
{
    return a+b+c;
}

double subtraction (float a, float b, float c)
{
    return a-b-c;
}

double multiplication (float a, float b, float c)
{
    return a*b*c;
}

double division (float a, float b, float c)
{
    return a/b/c;
}

void info()
{
    string p;
    cout<<"Enter student name: "<<endl;
    cin>>p;
    
    string q;
    cout<<"Enter ID: "<<endl;
    cin>>q;
    
    string r;
    cout<<"Enter CGPA: "<<endl;
    cin>>r;
    
    string s;
    cout<<"Enter semester: "<<endl;
    cin>>s;
    cout<<endl;
}

void finish()
{
    cout<<"The code is finished."<<endl;
}

int main()
{
    float x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<addition(x,y,z)<<endl;
    cout<<subtraction(x,y,z)<<endl;
    cout<<multiplication(x,y,z)<<endl;
    cout<<division(x,y,z)<<endl;
    info();
    info();
    info();
    finish();
}
