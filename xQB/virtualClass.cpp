#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
    int width, height;

public:
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }

    void area() override {
        int area = width * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class Triangle : public Shape {
    int a, b;

public:
    Triangle(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void area() override {
        float area = 0.5 * a * b;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape *s1;
    Rectangle r1(2, 4);
    Triangle t1(3, 4);
    s1 = &r1;
    s1->area();
    s1 = &t1;
    s1->area();
    return 0;
}
