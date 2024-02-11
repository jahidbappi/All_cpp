//funtion_All


#include <iostream>
using namespace std;

int addition (int a, int b)
{
    return a+b;
}

int subtraction (int a, int b)
{
    return a-b;
}

int multiplication (int a, int b)
{
    return a*b;
}

double division (float a,float b)
{
    return a/b;
}

int reminder (int a, int b)
{
    return a%b;
}

int main()
{
    cout<< addition (3,4)<<endl;
    cout<< subtraction (5,2)<<endl;
    cout<< multiplication (10,3)<<endl;
    cout<< division (10,3)<<endl;
    cout<< reminder (10,3)<<endl;
}




