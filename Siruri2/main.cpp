#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[30], vocale[]="AEIOUaeiou" ;
    int i=0, nr=0;
    cin.getline(a,30);
    for(i=0;i<strlen(a);i++)
        if(strchr(vocale,a[i])!=0)
        if(strchr(vocale, a[i-1])==0 && strchr( vocale, a[i+1])==0 && a[i]!=' ' && a[i+1]!=' ' && a[i-1]!=' ')
            nr++;

    cout<<nr;
    return 0;
}
