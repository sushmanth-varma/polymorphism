//Create a base class called Shape with virtual functions area( ) and perimeter().
// Derive two classes Rectangle and Triangle from the base class. 
//Implement the area () and perimeter () functions for each class.
#include <iostream>

class Shape {
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override {
        return length * width;
    }

    float perimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    float side1, side2, side3;

public:
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    float area() override {
        // Implement area calculation for a triangle
    }

    float perimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Rectangle rect(5, 3);
    Triangle tri(3, 4, 5);

    std::cout << "Rectangle Area: " << rect.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;

    std::cout << "Triangle Area: " << tri.area() << std::endl;
    std::cout << "Triangle Perimeter: " << tri.perimeter() << std::endl;

    return 0;
}
