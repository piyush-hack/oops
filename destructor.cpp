#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    // constructor and destructor are called automatically,
    // once the object is instantiated
    A(){
        cout << "Constructor in Use" << endl;
    }
    ~A()
    {
        cout << "Destructor in use" << endl;
    }
};
int main()
{
    A a;
    A b;
    return 0;
}
/*
Output: Constructor in use
Constructor in use
Destructor in use
Destructor in use
*/