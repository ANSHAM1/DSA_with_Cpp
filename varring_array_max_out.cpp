#include <iostream>
using namespace std;

int max(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int n, j, m, p, c = 1;
    cout << "size of array: ";
    cin >> n;
    cout<<endl;
    int a[n];
    cout << "day 1: ";
    cin >> j;
    cout<<endl;
    a[0] = j;
    for (int i = 1; i < n - 1; i++)
    {
        p = max(a, i);
        cout << "day " << i + 1<<": ";
        cin >> j;
        cout<<endl;
        a[i] = j;
        m = max(a, i + 1);
        if (m > p || i == 9)
        {
            c += 1;
        }
    }
    cout << c << " is the no of required days" << endl;
}