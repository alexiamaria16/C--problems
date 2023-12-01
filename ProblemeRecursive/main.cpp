#include <iostream>

using namespace std;
int aux;
int DivImpRec(long long n)
{
     aux=n/2;
     int y=n;
    if(y%aux==0 && aux%2==1)
        return aux;
    else
        DivImpRec(aux--);

}
int main()
{
    cout<<DivImpRec(24);

    return 0;
}
