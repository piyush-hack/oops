
#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A(int m) { a = m; }
    friend class B; // Friend Class
};

class B
{
private:
    int b;

public:
    B(int m)
    {
        b = m;
    }
    void fclass(A &x)
    {
        // Since B is friend of A, it can access
        // private members of A
        std::cout << "A::a=" << x.a << endl;
    }
    friend void ffun(B &);
};

void ffun(B &x)
{
    // Since  fclass() is a friend, it can access
    // private members of B
    std::cout << "B::b=" << x.b << endl;
}

int main()
{
    A a(20);
    B b(10);
    b.fclass(a);
    ffun(b);
    return 0;
}