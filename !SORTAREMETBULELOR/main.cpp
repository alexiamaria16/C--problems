#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bubblesort.in");
ofstream fout("bubblesort.out");
int n, v[100], i;
int main()
{
   bool ok=0;
   int aux=0;

   fin>>n;
   for(i=1;i<=n;i++)
    fin>>v[i];
   for(i=1;i<=n;i++)
    fout<<v[i]<<" ";
    fout<<endl;

   do{
        ok=0;
        for(i=1;i<=n-1;i++)
            if(v[i]>v[i+1])
        {
            aux=v[i+1];
            v[i+1]=v[i];
            v[i]=aux;
            ok=1;
        }

   }while(ok!=0);

   for(i=1;i<=n;i++)
    fout<<v[i]<<" ";

    return 0;
}
