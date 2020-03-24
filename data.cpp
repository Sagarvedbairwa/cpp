#include<iostream>
#include<string>
using namespace std;

void portal()
{
    cout<<"******************************************************************************\n"<<

 "                            "<<  "data show portal. \n"
"                "<<"welcome on our portal where a simple c++ program is run.\n"


"********************************************************************************\n";
    }
    string your_name()
    {
    string name;
    cout<<"enter your name:";
    getline(cin, name);
    return name;
    
    }
    string father_name()
    {string fname;
    cout<<"enter father name:";
    getline(cin, fname);
    return fname;
     }
        
    string mother_name()
    {string mname;
    cout<<"enter mother name:";
    getline(cin, mname);
    return mname;
    
        
        }
    
    int main()
    {string name,fname,mname;
    name=your_name();
    fname=father_name();
    mname=mother_name();

    portal();
    cout<<"your name:  "<<name<<endl;
    cout<<"father name:"<<fname<<endl;
    cout<<"mother name:"<<mname<<endl;
    }
    
