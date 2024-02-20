#include <iostream>
using namespace std;

int main()
{
    int array[22] = {1, 5, 3, 7, 2, 9, 32, 21, 6, 8, 55, 3432, 3, 35, 353, 26, 34, 34, 34, 55, 34, 2};
    int n = sizeof(array) / 4;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                array[j] = array[j] + array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] = array[j] - array[j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}