#include<iostream>

using namespace std;

class A{
	public:
		void msg()
		{
			cout<<"\n\tHello Msg from A ";
			
		}
};

class B : virtual public A{
	
};

class C : virtual public A{
	
};

class D :public B,public C{
	
};

int main()
{
	D obj1;
	obj1.msg();
	return 0;
}