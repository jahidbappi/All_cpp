//structure_time difference


#include <iostream>
using namespace std;

struct Time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    Time t1, t2, diff;
    
    cout<<"Event 1: "<<endl;
    cin>>t1.hour;
    cin>>t1.min;
    cin>>t1.sec;
    
    cout<<"Event 2: "<<endl;
    cin>>t2.hour;
    cin>>t2.min;
    cin>>t2.sec;
    
    int Time1 = t1.sec + t1.min*60 + t1.hour*3600;
    int Time2 = t2.sec + t2.min*60 + t2.hour*3600;
    int td = abs (Time1-Time2);
    diff.hour = td/3600;
    diff.min = (td%3600)/60;
    diff.sec =(td%3600)%60;
    
    cout<<diff.hour<<" Hour"<<endl;
    cout<<diff.min<<" Minutes"<<endl;
    cout<<diff.sec<<" seconds"<<endl;
    
    return 0;
}

