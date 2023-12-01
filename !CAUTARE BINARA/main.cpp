#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int poz, m, v[10], n,i;
int CautareBinara(int x, int ls, int ld)
{
    poz=-1;
    while(ls<=ld && poz==-1)
    {
        m=(ls+ld)/2;
        if(v[m]==x)
            poz=m;
        else if(v[m]>x)
            ld=m-1;
        else
            ls=m+1;
    }
    return poz;
}
int main()
{
   fin>>n;
   for(int i=0;i<n;i++)
    fin>>v[i];
   fout<<CautareBinara(4, 0, n-1);
    return 0;
}
