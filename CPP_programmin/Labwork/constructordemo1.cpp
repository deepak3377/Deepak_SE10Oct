#include<iostream>

using namespace std;

class Box{
	public:
		double width,height,depth;
		
		Box()
		{
			cout<<"\nDefault Constructor Called";
			width = 5;
			height = 6;
			depth = 7;
		}
		Box(double w,double h,double d)
		{
			cout<<"\nParameterized Constructor Called.";
			width = w;
			height = h;
			depth = d;
		}
		void display()
		{
			cout<<"\nVolume is :"<<(width*height*depth);
		}
};

int main()
{
	Box obj1,obj2;
	obj1.display();
	Box obj3(5,2,6);
	
	obj3.display();
	return 0;
}