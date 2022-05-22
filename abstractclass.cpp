#include <bits/stdc++.h>
using namespace std;

// abstract class
class Shape
{
public:
    virtual void draw() = 0;
};
class Rectangle : Shape
{
public:
    void draw()
    {
        cout << "Rectangle" << endl;
    }
};
class Square : Shape
{
public:
    void draw()
    {
        cout << "Square" << endl;
    }
};

int main()
{
    Rectangle rec;
    Square sq;

    rec.draw();
    sq.draw();
    return 0;
}

/*
Output :
Rectangle
Square
*/