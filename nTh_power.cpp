#include <iostream>

using namespace std;

int findPower(int n,int m);

int main()
{
    int n,m;
    cin>>n>>m;

    cout<<findPower(n,m)<<endl;

    return 0;
}
int findPower(int n,int m)
{
    if(n==0) return 1;

    return m*findPower(n-1,m);
}