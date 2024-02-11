//OOP


#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    
    string SID;
    string SNAME;
    string CGPA;
    
    void display()
    {
        cout<<"Student ID: "<<SID<<endl;
        cout<<"Student Name: "<<SNAME<<endl;
        cout<<"CGPA: "<<CGPA<<endl;
    }
};


class Employee
{
public:
    
    string EID;
    string ENAME;
    string salary;
    
    void display()
    {
        cout<<"Employee ID: "<<EID<<endl;
        cout<<"Employee Name: "<<ENAME<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};


class Fruit
{
public:
    
    string FNAME;
    string color;
    string season;
    
    void display()
    {
        cout<<"Fruit name: "<<FNAME<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Season: "<<season<<endl;
    }
};



int main()
{
    Student s1,s2;
    cout<<"Enter Student info: "<<endl;
    cin>>s1.SID;
    cin>>s1.SNAME;
    cin>>s1.CGPA;
    s1.display();
    cout<<endl;
    cout<<"Enter Student info: "<<endl;
    cin>>s2.SID;
    cin>>s2.SNAME;
    cin>>s2.CGPA;
    s2.display();
    cout<<endl;
    
    
    Employee e1,e2;
    cout<<"Enter Employee info: "<<endl;
    cin>>e1.EID;
    cin>>e1.ENAME;
    cin>>e1.salary;
    e1.display();
    cout<<endl;
    cout<<"Enter Employee info: "<<endl;
    cin>>e2.EID;
    cin>>e2.ENAME;
    cin>>e2.salary;
    e2.display();
    cout<<endl;
    
    
    Fruit f1, f2;
    cout<<"Enter fruit info: "<<endl;
    cin>>f1.FNAME;
    cin>>f1.color;
    cin>>f1.season;
    f1.display();
    cout<<endl;
    cout<<"Enter fruit info: "<<endl;
    cin>>f2.FNAME;
    cin>>f2.color;
    cin>>f2.season;
    f2.display();
    cout<<endl;
    
    
    return 0;
}



