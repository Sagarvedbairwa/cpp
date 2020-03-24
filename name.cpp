#include<iostream>
using namespace std;

string name()
{
    string name;
    cout<<"enter name:";
    getline(cin,name);
    return name;
    }
    
    int main()
    {
        string yname, fname,sname;
        yname= name();
        fname= name();
        sname= name();
        cout<<yname<<" "<<fname<<" "<<sname;
        }
