#include <iostream>
using namespace std;

int prime(int arr[], int n)
{
    for(int i=0;i*i<n;i++)
    {
        if (arr[i] != 0)
        {
            for (int j = (arr[i] * arr[i]) - 2; j < n; j++)
            {
                if (arr[j] % arr[i] == 0 && arr[j]!=0)
                {
                    arr[j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < 49; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[49];

    for (int i = 0; i < 49; ++i)
    {
        arr[i] = i + 2;
    }

    prime(arr, 49);
}