// star pattern_loop


#include <iostream>
using namespace std;
 int main ()
{
     int row,space,i,j;
     cout<<"Type the row"<<endl;
     cin>>row;
     
     for(i=row;i>=1;i--)
     {
         for(space=i;row>space;space++)
             cout<<" ";
         for(j=1;j<=i;j++)
             cout<<" *";
         cout<<endl;
     }
     for (i=2; i<=row; i++)
     {
         for(space=i+1;space<=row; space++)
             cout<<" ";
         for (j=1;j<=i;j++)
             cout<<" *";
         cout<<endl;
     }
         
 }

