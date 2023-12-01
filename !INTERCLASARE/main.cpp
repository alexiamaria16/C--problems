#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n, m, a[10], b[10],c[11], i, j, k;
int main()
{
    fin>>n>>m;
    for(i=1;i<=n;i++)
    fin>>a[i];
    for(j=1;j<=m;j++)
    fin>>b[j];

    i=1;j=1;k=1;
    while(i<=n && j<=m)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(i<=n)
        while(i<=n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    else
        while(j<=m)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(int l=1;l<=k;l++)
        fout<<c[l]<<" ";

    return 0;
}
