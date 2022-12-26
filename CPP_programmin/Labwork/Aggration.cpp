#include<iostream>

using namespace std;

class Address{
	public:
		string addressline,city,state;
		
		Address(string a,string c,string s)
		
		{
			addressline = a;
			city =c ;
			state = s;
		}	
};

class Employee{
	private:
		Address *address;
		public:
			int id;
			string name;
			Employee(int i,string n,Address *a)
			{
				id = i;
				name = n;
				address = a;
			}
			
			void display()
			{
				cout<<id<<" "<<name<<" "<<
				address->addressline<<" "<<address->city<<" "<<address->state<<endl;
			}
			
};



int main(void)
{
	Address a1("A-22 sector 15 ","noida","up");
	Employee e1(101,"devin",&a1);
	e1.display();
	return 0;
}