#include<iostream>
using namespace std;

class box{
	public:
		double widht,height,depth;
		
		box()
		{
			cout<<"default constructor called";
			widht = 5;
			height = 6;
			depth = 7;
			
		}
		
		void display()
		{
			cout<<"\nVolume is"<<(widht*height*depth);
		}
};


int main()
{
	box obj1;
	obj1.display();
	return 0;
}