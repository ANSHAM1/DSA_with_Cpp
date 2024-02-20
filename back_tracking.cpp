#include <iostream>
using namespace std;

// const int n = 5;
// int arrsol[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};

// bool ispath(int arr[][n], int x, int y)
// {
//     if (x < n && y < n)
//     {
//         return arr[x][y] == 1;
//     }
//     return 0;
// }

// int solution(int arr[][n], int start[], int end[])
// {
//     if (start[0] >= 5 || start[1] >= 5)
//     {
//         return 0;
//     }
//     else if (start[0] == end[0] && start[1] == end[1])
//     {
//         return 1;
//     }
//     else
//     {
//         arrsol[start[0]][start[1]] = 1;
//         start[1]++;
//         arrsol[start[0]][start[1]] = 1;
//         if (ispath(arr, start[0], start[1]) == 0)
//         {
//             arrsol[start[0]][start[1]] = 0;
//             start[1]--;
//             arrsol[start[0]][start[1]] = 1;
//             start[0]++;
//             arrsol[start[0]][start[1]] = 1;
//             while (ispath(arr, start[0], start[1]) == 0)
//             {
//                 arrsol[start[0]][start[1]] = 0;
//                 start[0]--;
//                 arrsol[start[0]][start[1]] = 0;
//                 start[1]--;
//                 arrsol[start[0]][start[1]] = 1;
//                 start[0]++;
//                 arrsol[start[0]][start[1]] = 0;
//                 if (start[1] >= 5)
//                 {
//                     return 0;
//                 }
//             }
//         }
//         solution(arr, start, end);
//     }
// }

// int main()
// {
//     int arr[n][n] = {{1, 0, 1, 0, 1}, {1, 1, 1, 1, 1}, {0, 1, 1, 0, 0}, {1, 0, 1, 1, 1}, {1, 1, 1, 0, 1}};
//     int start[2] = {0, 0};
//     int end[2] = {4, 4};
//     int s = solution(arr, start, end);
//     if (s == 1)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 cout << arrsol[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }



bool ispath(int **arr, int x, int y, int n, int m)
{
    if (x < n && y < m && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool solution(int **arr, int x, int y, int n, int m, int **arr_sol)
{
    if (x == n-1 && y == m-1)
    {
        arr_sol[x][y]=1;
        return true;
    }

    if (ispath(arr, x, y, n, m))
    {
        arr_sol[x][y] = 1;
        if (solution(arr, x, y + 1, n, m,arr_sol))
        {
            return true;
        }
        else if (solution(arr, x + 1, y, n, m,arr_sol))
        {
            return true;
        }
        arr_sol[x][y]=0;  //bacl_tracking
        return false;
    }
    return false;
}

int main()
{
    int n = 5, m = 5;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    int **arr_sol = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr_sol[i] = new int[m];
    }

    int arr2[n][n] = {{1, 0, 1, 0, 1}, {1, 1, 1, 1, 1}, {0, 1, 1, 0, 0}, {1, 0, 1, 1, 1}, {1, 1, 1, 0, 1}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr_sol[i][j] = 0;
        }
    }

    int s = solution(arr, 0, 0, n, m, arr_sol);
    if (s)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr_sol[i][j] << " ";
            }
            cout << endl;
        }
    }
}