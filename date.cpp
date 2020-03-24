#include<iostream>
using namespace std;

void portal()
{
    cout<<"******************************************************************************\n"<<

 "                            "<<  "date show portal. \n"
"                "<<"welcome on our portal where a simple c++ program is run.\n"


"********************************************************************************\n";
    }

int date()
{
    int n;
cout<<"enter your date in two digits:";
cin>>n;
return n;


    }
    
    int month()
    {
        int n;
        cout<<"enter your month no:";
cin>>n;
return n;
        
        }
        int year()
        {
            int n;
            cout<<"enter year of birth:";
            cin>>n;
            return n;
            }
            int main()
            {
				int y,m,d;
                portal();
                y = year();
                m = month();
                d = date();
                
                
                cout <<"The date of your birth is:"<< d<<"-"<<m<<"-"<<y;
                }
            
