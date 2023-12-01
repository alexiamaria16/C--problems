#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n, m, a[100], b[100], k, c[100], i, j;
void Reuniunea(int n, int m, int k, int a[100], int b[100], int c[100])
{
i=1;j=1;k=1;
    while(i<=n && j<=m)
    {
        if(a[i]<b[j])
    {
        c[k]=a[i];
        k++;
        i++;
    }
    else
    {
        c[k]=b[j];
        k++;
        j++;
    }
    }
   if(i<=n)
       while(i<=n)
       {
           c[k]=a[i];
           k++;
           i++;
       }
   else if(j<=m)
        while(j<=m)
   {
       c[k]=b[j];
       k++;
       j++;
   }
     for(int l=1;l<k;l++)
        fout<<c[l]<<" ";
}
void Intersectie(int n, int m, int k, int a[100], int b[100], int c[100])
{
    i=1;j=1;k=1;
    while(i<=n && j<=m)
   {
        if(a[i]==b[j])
    {
        c[k]=a[i];
        k++;
        i++;j++;
    }
        else if(a[i]>b[j] )
        j++;
        else if(a[i]<b[j])
        i++;
   }
     for(int l=1;l<k;l++)
        fout<<c[l]<<" ";
}
int AminusB(int n, int m, int k, int a[100], int b[100], int c[100])
{
    i=1;j=1;k=1;
    while(i<=n && j<=m)
    {

           else if(a[i]<b[j] && a[i]!=c[k])
           {
                c[k]=a[i];
                k++;
                i++;}
           else if(a[i]==c[k])
              {j++; i++}
           else if(a[i]>b[j] && a[i]!=c[k])
           {

           }
    }
    if(i<=n)
    {
        while(i<=n)
        {
            if(a[i]!=c[k])
            {
               c[k]=a[i];
                        k++;i++;
            }
        }
    }

     for(int l=1;l<k;l++)
        fout<<c[l]<<" ";

}
int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>a[i];
    fin>>m;
    for(j=1;j<=m;j++)
        fin>>b[j];

    Reuniunea(n,m,k,a,b,c);
    fout<<endl;
    Intersectie(n,m,k,a,b,c);
    fout<<endl;
    AminusB(n,m,k,a,b,c);


    return 0;
}
