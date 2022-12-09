#include<iostream>

using namespace std;

class staticDemo{
	public:
		static int objcount;
		
		staticDemo()
		{
			cout<<"This is Defoult Construcor";
			objcount++;
		}
		
};

int staticDemo::objcount=0;

int main()
{
	staticDemo obj1,obj2,obj3;
	cout<<"\nobjcount : "<<obj1.objcount;
	return 0;
}