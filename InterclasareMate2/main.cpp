#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int a[100], b[100], c[100], n, m , k, i, j, l;
int main()
{
    fin>>n;
    for(int i=1;i<=n;i++)
        fin>>a[i];
    fin>>m;
    for(int j=1;j<=m;j++)
        fin>>b[j];

    for(int i=1;i<=n;i++)
        fout<<a[i]<<" ";
        fout<<endl;
     for(int j=1;j<=m;j++)
        fout<<b[j]<<" ";
        fout<<endl;

    i=1;j=1;k=0;
    while(i<=n && j<=m)
    {

        if(a[i]<b[j] && a[i]!=c[k])
        {

            c[k]=a[i];
            i++; k++;
        }
        else if(a[i]==c[k])
        i++;
       if(a[i]>b[j] && b[j]!=c[k])
        {
            k++;
            c[k]=b[j];
            j++;
        }
        else if(b[j]==c[k])
            j++;
    }
    if(i<=n)
        while(i<=n)
    {
        if(a[i]!=c[k])
        {
            k++;
            c[k]=a[i];
            i++;

        }
        else
            i++;
    }
    else
        while(j<=m)
        {
            if(b[j]!=c[k])
        {
            k++;
            c[k]=b[j];
            j++;

        }
        else
            j++;
        }
     for(int l=1;l<=k;l++)
        fout<<c[l]<<" ";


    return 0;
}
