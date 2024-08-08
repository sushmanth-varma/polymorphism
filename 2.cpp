//Create a base class called Animal with a virtual function eat (). 
//Derive two classes Herbivore and Carnivore from the base class. 
//Implement the eat function for each class.
#include<iostream>
using namespace std;
class animal{
	public:
		virtual void eat(){
			cout<<"animal"<<endl;
		}
};
class herbivore:public animal{

	public:
	void eat() override{
	    cout<<" animal is harbivore"<<endl;
	}
};
class carnivore:public animal{
	public:
		void eat() override{
			cout<<"animal is a cannivore"<<endl;
		}
};
int main(){
	animal* a=new animal;
	herbivore* h=new herbivore;
	carnivore* c=new carnivore;
	a->eat();
	h->eat();
	c->eat();
	delete a;
	delete h;
	delete c;
	return 0; 
}
