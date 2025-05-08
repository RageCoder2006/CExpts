#include <iostream>
using namespace std;

class Shape {
public:
    int width, height;

    Shape(int width, int height) {
        this->width = width;
        this->height = height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int width, int height): Shape(width, height) {
    }

    void area() {
        int area = width * height;
        cout << "Area: " << area << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(int width, int height): Shape(width, height) {
    }

    void area() {
        int area = 0.5 * width * height;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Rectangle rect(2, 4);
    rect.area();
    Triangle tri(5, 6);
    tri.area();
}
