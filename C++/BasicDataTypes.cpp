/*
	Basic Data Types , this is imp. new thing for me precision and fixed.
*/#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout.precision(3);
    cout<<fixed<<d<<endl;
    cout.precision(9);
    cout<<fixed<<e<<endl;
    return 0;
}