#include<iostream>
using namespace std;
class shape{
	public:
		virtual float area()=0;
		virtual float volume()=0;
};
class sphere:public shape{
	private:
		float radius;
		public:
			sphere(float r):radius(r){}
			float area()override{
				return 4*3.14*radius*radius;
			}
			float volume()override{
		return 	4/3*3.14*radius*radius*radius;
	}
	};
	class cylinder:public shape{
		private:
			float radius;
			float height;
			public:
			cylinder(float r,float h):radius(r),height(h){}
			float area()override{
				return 2*3.14*radius*(radius+height);
				
			}
			float volume()override{
				return 3*3.14*radius*radius*height;
			}
	};
	int main(){
		sphere s(7);
		cylinder c(2,3);
		cout<<s.area()<<endl;
		cout<<s.volume()<<endl;
		cout<<c.area()<<endl;
		cout<<c.volume()<<endl;
		return 0;
	}