//Create a base class called Animal with a virtual function speak().
// Derive two classes Cat and Dog from the base class. Implement the speak() function for each class.
#include<iostream>
using namespace std;
class animal{
	public:
		virtual void speak(){
			cout<<"animal is speaking"<<endl;
		}
};
class dog:public animal{
	public:
		void speak()override{
			cout<<"dog is speaking"<<endl;
		}
};
class cat:public animal{
	public:
		void speak()override{
			cout<<"cat is speaking"<<endl;
		}
};
int main(){
	animal* a=new animal;
	dog* d=new dog;
	cat* c=new cat;
	a->speak();
	d->speak();
	c->speak();
	delete a;
	delete d;
	delete c;
	return 0;
}