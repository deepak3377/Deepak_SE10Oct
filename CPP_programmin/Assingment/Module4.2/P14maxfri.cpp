#include<iostream>

using namespace std;

class Come{
	private:
		int x,y;
		public:
			
			void input()
			{
				cout<<"Enter First Number : ";
				cin>>x;
				cout<<"Enter Second Number : ";
				cin>>y;
			}
			
			friend void find(Come t);
			
};

void find(Come t){
	if (t.x > t.y)
	{
		cout<<"Largest is : "<<t.x;
	}
	
	
		else {
			cout<<"Largest is : "<<t.y;
		}
	
	
}

int main()
{
	Come t;
	t.input();
	find(t);
	
}