#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    int arr[7] = {34, 6, 234, 5343, 3, 76, 1};
    for (int i = 0; i < 7; i++)
    {
        pair<int, int> p;
        p.first = arr[i];
        p.second = i;
        v.push_back(p);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < 7; i++)
    {
        v[i].first = i;
    }

    for (int i = 0; i < 7; i++)
    {
        int temp=v[i].second;
        v[i].second = v[i].first;
        v[i].first=temp;
    }

    sort(v.begin(), v.end());


    for (int i = 0; i < 7; i++)
    {
        cout << v[i].second << " ";
    }
    return 0;
}
