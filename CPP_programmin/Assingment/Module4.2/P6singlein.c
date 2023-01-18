#include<iostream>

using namespace std;

class cricketer{
	public :
		int tr=150;
		int avg=tr/11;
		int bp=61;
		
};

class batsman : public cricketer{
	public :
		void display()
		{
			cout<<"\nTotal Runs : "<<tr;
			cout<<"\nAverage Runs : "<<avg;
			cout<<"\nBest Performance :"<<br;
		}
};

{
	betsman obj;
	obj.display();
	return 0;
}