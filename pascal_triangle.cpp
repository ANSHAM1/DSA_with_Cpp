#include<iostream>
using namespace std;

int fac(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}

int pattern(int a)
{
    int m;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            m=fac(i)/(fac(j)*fac(i-j));
            cout<<m<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a=4;
    // cin>>a;
    pattern(a);
    return 0;
}