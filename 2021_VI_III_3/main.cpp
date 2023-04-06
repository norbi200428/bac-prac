#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac,in");
    int szam,poz=0;
    int elso=0,masodik=0,harmadik=0;
    while(in >> szam)
    {
        poz++;
        if(szam<0 && elso==0)
        {
            elso=poz;
        }
        if(szam<0 && elso!=0 && masodik==0)
        {
            masodik=poz;
        }
        if(szam<0 && elso!=0 && masodik!=0)
        {
            harmadik=poz;
        }
    }
    int elsoig = elso, masodikig=harmadik-elso-1,harmadikutan=poz-harmadik+1;
    if(elsoig>masodikig && masodikig>harmadikutan)
    {
        cout << elsoig;
    }
    else if(masodikig>elsoig && masodikig > harmadikutan)
    {
        cout << masodikig;
    }
    else
    {
        cout << harmadikutan;
    }

    return 0;
}
