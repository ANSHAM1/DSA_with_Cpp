#include <iostream>
using namespace std;

int main(){
    int n = 12;
    int arr[12] = {52,43,11,5,32,67,1,88,4,33,22,19};
    
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
