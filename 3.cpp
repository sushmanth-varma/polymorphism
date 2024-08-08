//Create a base class called Person with a virtual function greet). 
//Derive two classes Student and Teacher from the base class. 
//implement the greet) function for each class
#include<iostream>
using namespace std;
class person{
	public:
		virtual void greet(){
			cout<<"person"<<endl;
		}
};
class student:public person{
	public:
	void greet()override{
		cout<<"student"<<endl;
	}
};
class teacher:public person{
	public:
		void greet()override{
			cout<<"teacher"<<endl;
		}
};
int main(){
	person* p=new person;
	student* s=new student;
	teacher* t=new teacher;
	p->greet();
	s->greet();
	t->greet();
	delete p;
	delete s;
	delete t;
	return 0; 
}
