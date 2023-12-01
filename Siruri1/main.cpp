#include <iostream>
#include <string.h>
using namespace std;

int main()
{ char sir[30], voc[]= { "aeiouAEIOU" } ;
  int i=0, nrvoc=0;


    cin.get(sir,30);
    for(i=0;i<strlen(sir);i++)
        if(strchr(voc,sir[i])!=0)
        nrvoc++;
        cout<<nrvoc;
    return 0;
}
