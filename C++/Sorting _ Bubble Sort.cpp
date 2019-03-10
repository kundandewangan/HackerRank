##include <bits/stdc++.h>

using namespace std;


// Complete the countSwaps function below.
void bubble(int a[], int n) {
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {   
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++;
            }
            
        }
    }
    cout<<"Array is sorted in "<<count<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;

}

int main()
{
    int arr[100000],n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bubble(arr,n);
}

