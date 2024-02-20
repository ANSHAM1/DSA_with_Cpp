#include <iostream>
using namespace std;
// --------------------usign recursion-----------------------------------------
int binary_search(int array[], int s, int e, int key)
{
    if (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (array[mid] == key)
            return mid;
        if (array[mid] > key)
            return binary_search(array, s, mid - 1, key);
        return binary_search(array, mid + 1, e, key);
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cin >> key;
    int result = binary_search(array, 0, n - 1, key);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}

// ---------------------without using recursion---------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 11;
//     int arr[n] = {3, 4, 6, 9, 11, 17, 22, 28, 43, 47, 50};
//     int key = 50, i = (n - 1) / 2, l = n - 1;
//     while (true)
//     {
//         if (arr[i] == key)
//         {
//             cout << "key is present at " << i << endl;
//             break;
//         }
//         else
//         {
//             if (key < arr[i])
//             {
//                 l=i-1;
//                 i /= 2;
//             }
//             else
//             {
//                 i = (i+1+l)/2;
//             }
//         }
//     }
// }