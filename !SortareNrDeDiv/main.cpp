#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n, i, v[10];

int nrdiv(int x)
{
    if(x==1)
        return 1;
    int nrdiv=2;
    for(int d=2;d<=x/2;d++)
        if(x%d==0)
        nrdiv++;
    return nrdiv;
}
int main()
{bool ok=0;

    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];

    int aux=0;
    do{
            ok=0;
        for(i=1;i<=n-1;i++)
            if(nrdiv(v[i])<nrdiv(v[i+1]))
        {
            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
            ok=1;
        }
    }while(ok!=0);

    for(i=1;i<=n;i++)
        fout<<v[i]<<" ";


    return 0;
}

//LIMITA DE TIMP DEPASITA
