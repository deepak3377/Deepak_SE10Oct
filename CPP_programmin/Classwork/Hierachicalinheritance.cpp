#include <iostream>

using namespace std;

class side{
	protected:
		int l;
		public:
			void getvel(int x)
			{
				l = x;
			}
	
};

class square : public side{
	public:
		int sq()
		{
			return l*l;
		}
};

class cube : public side{
	public:
		int cu()
		{
			return l*l*l;
		}
};	


int main()
{
	square s;
	s.getvel(5);
	cout<<"Squre Is ="<<s.sq();
	
	cube c;
	c.getvel(6);
	cout<<"\nCube is ="<<c.cu();
	return 0;
}