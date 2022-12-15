#include<iostream>

using namespace std;

class MO{
	public:
		void demo()
		{
			int a= 10;
			cout<<"A ="<<a;
			
		}
		
		void demo(int a)
		{
			if(a%2==0)
			{
				cout<<"\n it is Even";
			}
			else
			{
				cout<<"\n It is Odd";
				
			}
		}
		
		int demo(int a,int b)
		{
			return a+b;
		}
};



int main()
{
	MO obj1;
	obj1.demo();
	obj1.demo(52);
	cout<<"\n\nAddition : "<<obj1.demo(54,69);
	return 0;
	
}