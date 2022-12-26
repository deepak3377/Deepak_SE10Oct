#include<iostream>

using namespace std;

class Avadh{
	private:
		int money;
		friend int siddhant(Avadh);
		public:
			Avadh()
			{
				money=0;
				
			}
};

int siddhant(Avadh a)
{
	a.money =5000;
	return a.money;
}

int main()
{
	Avadh obj;
	cout<<"Money given is :"<<obj.Avadh();
	return 0;
};