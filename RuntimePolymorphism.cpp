#include <bits/stdc++.h>
using namespace std;

class Base_class
{
public:
    virtual void show()
    {
        cout << "Noteyard base" << endl;
    }
};

class Derived_class : public Base_class
{
public:
    void show()
    {
        cout << "Noteyard derived" << endl;
    }
};

int main()
{
    Base_class *b;
    Derived_class d;
    b = &d;
    b->show(); // prints the content of show() declared in derived
    return 0;
}

// Output : Apni Kaksha derived