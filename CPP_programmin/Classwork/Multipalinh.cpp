#include<iostream>

using namespace std;

class Student{
	public:
		string name;
		
		void getName()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
}; 

class ExtraMarks{
	public:
		int sp;
		
		ExtraMark()
		{
			sp = 60;
			
		}
};

class Result : public Student,ExtraMarks{
	public:
		int s1,s2,s3,tot;
		float per;
		
		Result()
		{
			s1 = 76;
			s2 = 33;
			s3 = 76;
			tot = s1+s2+s3+sp;
			per = (float)tot/4;
			
		}
		
		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nTotal : "<<tot;
			cout<<"\nPercentage : "<<per;
		}
};


int main()
{
	Result rs;
	rs.getName();
	rs.display();
	return 0;
}