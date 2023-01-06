#include <iostream>

using namespace std;

int findPascal(int row,int col);

int main()
{
    int row,col;
    cin>>row>>col;

    cout<<findPascal(row,col)<<endl;

    return 0;
}
int findPascal(int row,int col)
{
    if(col==0 || col==row) return 1;

    return findPascal(row-1,col-1)+findPascal(row-1,col);
}
