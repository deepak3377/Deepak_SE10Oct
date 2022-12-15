#include<iostream>

using namespace std;

class Distance{
	public:
		double feet,inchese;
		
		Distance(double f,double i)
		{
			feet = f;
			inches = i;
		}
		
		Distance operator-()
		{
			feet = -feet;
			inchese = -inchese;
			return Distance(feet,inchies);
		}
		
		void dispalay()
		{
			cout<<"\nFeet ="<<"\nInches = "<<inches;
		}
}

int main()
{
	Distance obj(-5,4);
	-obj1;
	obj1.display();
	return 0;
}