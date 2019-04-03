#include<iostream>
using namespace std;
const int MAX=1000000;

void leftRotate(int arr[MAX], int size, int rotation)
{
    int i, temp[MAX];
    for(i=0; i<rotation; i++)
        temp[i]=arr[i];
    for(i=rotation; i<size; i++)
        arr[i-rotation]=arr[i];
    for(i=size-rotation; i<size; i++)
        arr[i]=temp[i-(size-rotation)];
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[MAX], size, rotation; 
    cin>>size>>rotation;
    for(int i=0; i<size; i++)
        cin>>arr[i];
    leftRotate(arr, size, rotation);
}
