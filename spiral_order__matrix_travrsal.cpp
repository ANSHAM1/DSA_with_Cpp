#include <iostream>
using namespace std;

int main()
{
    int n=3,m=3;
    int arr[n][m] = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
    int column_start = 0, column_end = n-1, row_start = 0, row_end = m-1;

    while(column_start<=column_end || row_start<=row_end)
    {
        for(int i=column_start;i<=column_end;i++)
        {
            cout<<arr[row_start][i]<<endl;
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            cout<<arr[i][column_end]<<endl;
        }
        column_end--;
        for(int i=column_end;i>=column_start;i--)
        {
            cout<<arr[row_end][i]<<endl;
        }
        row_end--;
        for(int i=row_end;i>=row_start;i--)
        {
            cout<<arr[i][column_start]<<endl;
        }
        column_start++;
    }
}