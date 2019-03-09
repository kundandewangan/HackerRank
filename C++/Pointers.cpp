#include <iostream>
#include<cstdlib>
using namespace std;

void update(int *a,int *b) {
    int sum= *a + *b;
    int diff=abs(*a - *b);
    *a=sum;
    *b=diff; // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}
