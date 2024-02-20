#include <iostream>
using namespace std;

void GCD(int a, int b)
{
    int i = b;
    while (i != 0)
    {
        i = b % a;
        b = a;
        a = i;
    }
    cout << b;
}

int main()
{
    int a = 10, b = 45;
    // cin>>a>>b;

    if (a < b)
    {
        GCD(a, b);
    }
    else if (a > b)
    {
        GCD(b, a);
    }
    else
    {
        cout << a;
    }
}