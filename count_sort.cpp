#include <iostream>
using namespace std;

int count_sort(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    int arr_temp[max+1];
    for(int i=0;i<=max;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                count++;
            }
        }
        arr_temp[i]=count;
    }
    
    for(int i=0;i<=max;i++)
    {
        int a=arr_temp[i+1];
        int b=arr_temp[i];
        arr_temp[i+1]=a+b;
    }

    int arr_out[n];
    for(int i=n-1;i>=0;i--)
    {
        arr_temp[arr[i]]=arr_temp[arr[i]]-1;
        arr_out[arr_temp[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr_out[i]<<" ";
    }
}

int main()
{
    int n=20;
    int arr[n]={1,2,4,3,2,4,6,3,7,5,5,5,3,2,5,7,8,9,11,3};
    count_sort(arr,n);
}