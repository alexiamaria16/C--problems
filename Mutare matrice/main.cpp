#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int a[10][10],i,j,n,k,x;
int main()
{
  fin>>n;
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    fin>>a[i][j];

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;

    }
    for(j=1;j<=n;j++)
    for(k=1;k<=n;k++)
    {
        x=a[n][j];
        for(i=n-1;i>=1;i--)
            a[i+1][j]=a[i][j];
        a[1][j]=x;
    }
cout<<endl;
for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }


    return 0;
}
