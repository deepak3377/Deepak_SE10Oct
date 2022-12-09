#include<iostream>

using namespace std;

class ScopDemo{
	public:
		void func();
		void func2()
		{
			cout<<"\nTish is a func2";
		}
};

void ScopDemo::func()
{
	cout<<"This is function from scopdemo";
	ScopDemo::func2();
}

int main()
{
	ScopDemo s;
	s.func();
	return 0;
}