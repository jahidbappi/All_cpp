//2D array



#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3], arr2[3][3];
    
    cout<<"Matrix 1: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    
    cout<<"Matrix 2: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    cout<<"Matrix 1 + matrix 2"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr1[i][j] + arr2[i][j] <<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Matrix 1 - matrix 2"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr1[i][j] - arr2[i][j] <<"\t";
        }
        cout<<endl;
    }
    return 0;
}

