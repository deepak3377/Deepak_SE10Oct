#include<iostream>
using namespace std;

class Distance{
	public:
		double feet,inches;
		
		Distance(double f,double i)
		{
			feet = f;
			inches = i;
		}
		
		Distance operator-()
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet,inches);
		}
		
		void display()
		{
			cout<<"\nFeet = "<<feet<<"\nInches = "<<inches;
		}
		
};


int main()
{
	Distance obj1(-5,4);
	-obj1;
	obj1.display();
	
	
	return 0;
}