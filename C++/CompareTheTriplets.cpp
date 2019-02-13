/*
	Compare the Triplets 
*/

#include<iostream>
using namespace std;

const int three=3;
    
int compare(int a[], int b[])
{
    int sumA=0, sumB=0;
    for(int i=0; i<three; i++)
    {
        if(a[i]>b[i])
            sumA++;
        else if(b[i]>a[i])
            sumB++;
        else
        {
            sumA+=0;
            sumB+=0;
        }
    }
    cout<<sumA<<" "<<sumB;
    return 0;
}

int main()
{
    int i, alice[three], bob[three];

    for(i=0; i<three; i++)
        cin>>alice[i];

    for(i=0; i<three; i++)
        cin>>bob[i];
    
    compare(alice, bob);
    
}


