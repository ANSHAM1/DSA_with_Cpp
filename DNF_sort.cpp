#include <iostream>
using namespace std;

int DNF(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid < high)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;

            low++;
            mid++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
            mid++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 10;
    int arr[n] = {1, 0, 2, 2, 1, 1, 0, 2, 1, 0, 1};
    DNF(arr, n);
}