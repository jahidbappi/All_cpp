//structure


#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float grade;
};

int main()
{
    student s1 [3];
    
    for(int i=0; i<3; i++)
    {
        cout<<"Enter student's name "<<i+1<<": ";
        cin >>s1 [i].name;
        cout<<"Enter student's age "<<i+1<<": ";
        cin >>s1 [i].age;
        cout<<"Enter student's grade "<<i+1<<": ";
        cin >>s1 [i].grade;
        cout<<endl;
    }
    
    for(int i=0; i<3; i++)
    {
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Name: "<<s1[i].name<<endl;
        cout<<"Age: "<<s1[i].age<<endl;
        cout<<"Grade: "<<s1[i].grade<<endl;
        cout<<endl;
    }
    return 0;
}


