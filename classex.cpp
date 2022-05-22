#include <iostream>

using namespace std;

class student
{
public:
    int id;
    // data member
    int mobile;
    string name;

    int add(int x, int y)
    {
        // member functions
        return x + y;
    }
};

int main(){
    student *s = new student();
    cout << s->add(2, 3) << endl;
   return 0;
}