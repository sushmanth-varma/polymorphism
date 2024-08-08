//Create a base class called Shape with virtual functions area () and volume ().
// Derive two classes Sphere and Cylinder from the base class.
// Implement the area and volume () functions for each class
#include <iostream>
class shape{
	public:
		virtual float area()=0;
		virtual float volume()=0;
};
class sphere:public shape{
	public:
		float area()override{
			
		}
		float volume()override{
			
		}
};
class cylinder:public shape{
	public:
		float area()override{
			
		}
		float volume()override{
			
		}
};
int main() {
    sphere sphere;
    cylinder cylinder;
    return 0;
}
