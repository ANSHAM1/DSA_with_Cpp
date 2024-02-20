#include <iostream>
using namespace std;

bool checkPos(int **arr, int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[x][i] == 1)
            return false;
        if (arr[i][y] == 1)
            return false;
        if (x + i < n && y + i < n && arr[x + i][y + i] == 1)
            return false;
        if (x - i >= 0 && y - i >= 0 && arr[x - i][y - i] == 1)
            return false;
        if (x + i < n && y - i >= 0 && arr[x + i][y - i] == 1)
            return false;
        if (x - i >= 0 && y + i < n && arr[x - i][y + i] == 1)
            return false;
    }
    return true;
}

bool n_queen(int **arr, int n, int x = 0)
{
    if (x >= n)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (checkPos(arr, n, x, i))
        {
            arr[x][i] = 1;
            if (n_queen(arr, n, x + 1))
            {
                return true;
            }
            arr[x][i] = 0;
        }
    }
    return 0;
}

int main()
{
    int n = 8;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
   
    if (n_queen(arr, n)==1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "no sol";
    }
}
