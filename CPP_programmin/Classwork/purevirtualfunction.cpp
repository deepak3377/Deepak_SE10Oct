#include<iostream>

using namespace std;

class Demo{
	public:
		void f1()
		{
			cout<<"\nNon pure Virtual function in class Demo";
		}
		
		virtual void f2();
};

class Sample : public Demo{
	public:
		void f3()
		{
			cout<<"\nNon pure Virtual Function in class sample";
			
		}
		
		void f2()
		{
			cout<<"\nPure Virtual Function in class Sample";
		}
};

int main()
{
	Sample obj1;
	obj1.f1();
	obj1.f2();
	obj1.f3();
	return 0;
}
