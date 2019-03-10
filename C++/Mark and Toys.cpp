#include <bits/stdc++.h>

using namespace std;

void insertionSort(long int arr[], int n)
{
    int hole,i,value;

    for(i=1; i<n; i++)
    {
        value=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }

}
void maxToys(long int arr[], int n, long int budget)
{
    long int sum=0;
    int i=0;
    insertionSort(arr, n);
    while(sum<=budget)
    {
        sum+=arr[i];
        i++;
    }
    cout<<i-1;
}

int main()
{
    int n; 
    long int k, prices[1000000];
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>prices[i];
    maxToys(prices, n, k);


}

