#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int add(int a, int b, int c)
    {
        return (a + b + c);
    }
};
int main()
{
    Add obj;
    int res1, res2;
    res1 = obj.add(2, 3);
    res2 = obj.add(2, 3, 4);
    cout << res1 << " " << res2 << endl;
    return 0;
}

/*
Output : 5 9
add()is  an  overloaded  function  witha  di"erent  numberof  parameters.  */