#include<iostream>

using namespace std;


class A 
{
	public:
		void show()
		{
			cout<<"\nshow from A";
			
		}
};
class B : public A
{
	public:
		void show()
		{
			A::show();
			cout<<"\nshow from B";
			
		}
};
class c : public B
{
	public:
		void show()
		{
			B::show();
			cout<<"\nshow from c";
		}
};

	

int main()
{
	c obj3;
	obj3.show();
	return 0;
}	
	
	