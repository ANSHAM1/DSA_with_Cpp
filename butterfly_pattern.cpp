#include<iostream>
using namespace std;
int main()
{
    int a=5;
    // cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=2*a;j++)
        {
            if(j<=i)
            {
                cout<<"* ";
            }
            else if(j<=(2*a-i))
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
    for(int i=a;i>=1;i--)
    {
        for(int j=2*a;j>=1;j--)
        {
            if(j<=i)
            {
                cout<<"* ";
            }
            else if(j<=(2*a-i))
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
    return 0;
} 