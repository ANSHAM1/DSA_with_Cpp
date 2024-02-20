#include <iostream>
using namespace std;

int main()
{
    char arr[40] = "i am ansham how ara you";
    int i = 0, count = 0, max = 0;
    while (arr[i] != '\0')
    {
        count++;
        if(arr[i]==' ')
        {
            if (max < --count)
            {
                max = count;
            }
            count = 0;
        }
        i++;
    }
    cout << max;
}