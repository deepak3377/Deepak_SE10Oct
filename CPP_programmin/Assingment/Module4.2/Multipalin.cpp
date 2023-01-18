#include<iostream>

using namespace std;

class person{
	public:
		char name[100];
		int age;
		void per()
		
		 {
		 	cout<<"\n Enter name : ";
		 	cin>>name;
		 	cout<<"\nEnter Age : ";
		 	cin>>age;
		 }
};

class student : public person{
	public:
		int pr=90;
		void percen()
		 {
		 	cout<<"\n The Percentge of member who read and write : ";
		 	
		 }
};

class teacher :public student{
	public:
		void teach()
		 {
		 	cout<<"\n\n salary : 25000 ";
		 }
};

int main()
{
	student obj;
	obj.per();
	obj.percen();
	
	teacher obj2;
	obj2.teach();
	
	
	return 0;
}