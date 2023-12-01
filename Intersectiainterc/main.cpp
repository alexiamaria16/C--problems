#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int i,j,n,m,k,a[100],b[100], c[100];
void citire(int &n, int &m)
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>a[i];
    fin>>m;
    for(j=1;j<=m;j++)
        fin>>b[j];
}
void afisare(int n, int m)
{
    for(int afis1=1;afis1<=n;afis1++)
        fout<<a[afis1]<<" ";
        fout<<endl;
    for(int afis2=1;afis2<=m;afis2++)
        fout<<b[afis2]<<" ";
        fout<<endl;
}
void reunit(int n, int m, int k)
{
    i=1;j=1;k=0;
    while(i<=n && j<=m)
    {
        if(a[i]<b[j])
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
        if(a[i]>b[j])
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
        else i++;
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
        else j++;
    }
    for(int afis=1;afis<=k;afis++)
        cout<<c[afis]<<" ";
}
int main()
{
    citire(n,m);
    afisare(n,m);
    reunit(n,m,k);
    return 0;
}
