#include <iostream>
using namespace std;

int wave_sort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        if (arr[i] >= arr[i - 1])
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
        if (arr[i] >= arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        i += 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 10;
    int arr[n] = {2, 5, 6, 7, 6, 4, 9, 8, 1, 7};
    wave_sort(arr, n);
}