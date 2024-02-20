#include <iostream>
using namespace std;

int main()
{
    int a[10]={5,3,2,8,9,0,2,6,8,10};
    int n=10;
    for(int k=0;k<n;k++)
    {
    for(int i=k;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<=i;j++)
        {
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
    }
}

