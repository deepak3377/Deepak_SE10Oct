#include<iostream>

using namespace std;

class Details{
	public:
		string name;
		 void getname()
		{
			cout<<"\nEnter Your Name : ";
			//cin>>nae 
			getline(cin,name);
		}
		void nameshow()
		{
			cout<<"\nName Is : "<<name;
					
		}
			
};

int main()
{
	Details obj;
	obj.getname();
	obj.nameshow();
	
	
	return 0;
}