/*
	A Very Big Sum
*/

#include <iostream>
using namespace std;

long long int sum(int n, long long int a[])
{
    long long int sum =0;
    for(int i=0; i<n; i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int i;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        //sum+=a[i];
    }    
    //cout<<sum;
    cout<<sum(n,a);
}


