#include<iostream>
using namespace std;

string insert_n()
{
string name;

getline(cin,name); 

return name;

}
double insert_num()
{
	double num;
	cin>>num;
	return num;
	}

int main()
{    string name,halat,study;
	double percent;
	cout<<"what is your name"<<endl;
	name = insert_n();
	cout<<"hi "<<name<<", how are you ?"<<endl;
	halat = insert_n();
	cout<<"i am also "<<halat<<" how is your studies?"<<endl;
	study=insert_n();
	cout<<"my studies are also "<<study<<", how much you get in your last exam?"<<endl;
	percent=insert_num();
	cout<<"thats wonderful ! "<<"you get "<<percent<<" in your last class."<<endl;
	cout <<"ok "<<name<<", Nice to meet you"<<endl;

}
