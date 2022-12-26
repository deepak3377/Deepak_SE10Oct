#include<iostream>

using namespace std; 

int main()
{
	string fname;
	cout<<"\nEnter Name : ";
	getline(cin,fname);
	cout<<"\nName : "<<fname;
	string lname;
	lname = fname;
	cout<<"\nString Copied : "<<lname;
	cout<<"\nString Concatenate : "<<fname+lname;
	cout<<"\nString Length : "<<fname.size();
	return 0;
}