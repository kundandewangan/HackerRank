/*
structure of hour glass is 
    a  b  c
       d   
    e  f  g
*/
#include<iostream>
using namespace std;

const int size=6;

void hourGlass(int arr[size][size], int size)
{
    int maxSum=-2147483648, sum=0, i, j;
    for(i=0; i<size-2; i++)
    {
        for(j=0; j<size-2; j++)
        {
            //adding the elements which are in the hour glass structure
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+
                        arr[i+1][j+1]+
                arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>maxSum)
                maxSum=sum;
        }
    }
    cout<<maxSum;

}

int main()
{
    int i=0, j=0, arr[size][size];
    for(i=0; i<size; i++)
        for(j=0; j<size; j++)
        cin>>arr[i][j];
    hourGlass(arr, size);
}
