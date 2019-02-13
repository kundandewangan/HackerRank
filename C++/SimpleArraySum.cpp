/*
	Simple Array Sum
*/

#include <iostream>
using namespace std;

int sum(int n, int a[])
{
    int sum =0;
    for(int i=0; i<n; i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int i, a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }    
    //cout<<sum;
    cout<<sum(n,a);
}
