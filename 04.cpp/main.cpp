//vowel consonant_switch case


#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"Write a letter" <<endl;
    cin>>ch;
    ch=tolower(ch);
    
    switch(ch)
        
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            cout<<"Vowel"<<endl;
            break;
            
        default:
            cout<<"consonant"<<endl;
    }
    return 0;
}


