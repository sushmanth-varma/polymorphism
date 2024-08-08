#include<iostream>
using namespace std;
class person{
	public:
		virtual void work(){
			cout<<"person is working"<<endl;
		}
};
class employee:public person{
	public:
		void work()override{
			cout<<"employee is working"<<endl;
		}
};
class manager:public person{
	public:
		void work()override{
			cout<<"manager is working"<<endl;
		}
};
int main(){
	person* p=new person;
	employee* e=new employee;
	manager* m=new manager;
	p->work();
	e->work();
	m->work();
	delete p;
	delete e;
	delete m;
	return 0;	
}