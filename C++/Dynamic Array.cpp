#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N, lastAnswer=0,Q;
    long int x,y;
    cin>>N>>Q;

    vector <vector <int> > s(N,vector <int> ());

    for(int i=0; i<Q; i++)
    {
        int t,x,y;
        cin >> t >> x >> y;

        if (t==1)
            s[(x^lastAnswer)%N].push_back(y);

        else
        {
            lastAnswer=s[(x^lastAnswer)%N][y%s[(x^lastAnswer)%N].size()];
            cout << lastAnswer << endl;
        
        }
    }
}
