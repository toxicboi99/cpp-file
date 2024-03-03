#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculate_area() = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void calculate_area() override {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    void calculate_area() override {
        float area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

int main() {
    float length, width, radius;
    
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    
    Rectangle r(length, width);
    r.calculate_area();

    cout << "Enter radius of the circle: ";
    cin >> radius;
    
    Circle c(radius);
    c.calculate_area();

    return 0;
}
