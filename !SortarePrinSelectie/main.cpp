#include <fstream>

using namespace std;
ifstream fin("selectionsort.in");
ofstream fout("selectionsort.out");
int n, i, v[10],p,m,MIN;
int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
    for(i=1;i<=n;i++)
        fout<<v[i]<<" ";
        fout<<endl;

    for(p=1;p<=n-1;p++)
    {
        MIN=v[p];
        m=p;
        for(i=p+1;i<=n;i++)
            if(v[i]<MIN)
        {
            MIN=v[i];
            m=i;
        }
        v[m]=v[p];
        v[p]=MIN;
    }
    for(i=1;i<=n;i++)
        fout<<v[i]<<" ";

    return 0;
}
