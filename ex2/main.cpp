#include <iostream>
using namespace std;
class Shape
{
protected:
    float larg , haut;
public:
    Shape(float x, float y)
    {
        larg = x;
        haut = y;
    }
};


class Rectangle : public Shape
{
public:
    Rectangle(float _x, float _y) : Shape(_x, _y) {}
    float area()
    {
        return (haut * larg);
    }
};
class Triangle : public Shape
{
public:
    Triangle(float _x, float _y) : Shape(_x, _y) {}
    float area()
    {
        return (larg * haut / 2);
    }
};
int main() {
    Rectangle rectangle(3, 8);
    Triangle triangle(12, 5);
    cout << rectangle.area() << endl;
    cout << triangle.area() << endl;
    return 0;
}