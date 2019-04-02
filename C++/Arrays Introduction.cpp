#include<iostream>
using namespace std;
const int MAX=10000;

void reverse(int arr[], int size)
{
    for(int i=size-1; i>-1; i--)
        cout<<arr[i]<<" ";
}

int main()
{
    int size, arr[MAX];
    cin>>size;
    for(int i=0; i<size; i++)
        cin>>arr[i];
    reverse(arr, size);
}
