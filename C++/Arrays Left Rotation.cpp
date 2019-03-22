#include<iostream>
using namespace std;
const int MAX=100000;

void rotate(int arr[], int times, int size)
{
    int temp[MAX], i, j;
    //creating a temp array to store the numbers with first times elements
    for(i=0; i<times; i++)
        temp[i]=arr[i];
    //shifting the remaining elements to the left
    for(i=0; i+times<size; i++)
        arr[i]=arr[i+times];
	//imp step. here i was stuck
    for(i=size-times;i<size; i++)
        arr[i]=temp[i-(size-times)];
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

     
}

int main()
{
    int size, times, arr[MAX];
    cin>>size>>times;
    for(int i=0; i<size; i++)
        cin>>arr[i];
    rotate(arr, times, size);
}

