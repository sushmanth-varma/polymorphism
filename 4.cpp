//Create a base class called Vehicle with a virtual function drive(). 
//Derive two classes Car and Truck from the base class. Implement the drive() function for each class.
#include<iostream>
using namespace std;
class vehicle{
	public:
		virtual void drive(){
			cout<<"vehicle"<<endl;
		}
};
class car:public vehicle{
	public:
		void drive()override{
			cout<<"it is a car"<<endl;
					}
};
class truck:public vehicle{
	public:
		void drive()override{
			cout<<"it is  a truck "<<endl;
		}
};
int main(){

vehicle* v=new vehicle;
car* c=new car;
truck* t=new truck;
v->drive();
c->drive();
t->drive();
delete v;
delete c;
delete t;
return 0;
}