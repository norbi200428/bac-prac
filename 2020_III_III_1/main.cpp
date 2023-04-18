#include <iostream>

using namespace std;

bool prim(int n)
{
    for(int oszto=2; oszto<n/2+1; oszto++)
    {
        if(n%oszto==0)
        {
            return false;
        }
    }
    return true;
}
int factori(int n,int m)
{
    int statn[1000]= {0},i,statm[1000]={0},j;
    for(int oszto=2; oszto<=n; oszto++)
    {
        if(prim(oszto))
        {
            while(n%oszto==0)
            {
                n/=oszto;
                statn[oszto]++;
                i=oszto;
            }
        }
    }
    for(int oszto=2; oszto<=m; oszto++)
    {
        if(prim(oszto))
        {
            while(m%oszto==0)
            {
                m/=oszto;
                statm[oszto]++;
                j=oszto;
            }
        }
    }
    if(j>i) i=j;
    int contor=0;
    for(int oszto=2; oszto<=i; oszto++)
    {
        if(statn[oszto]>0 && statm[oszto]>0)
        {
            contor++;
        }
    }
    return contor;
}
int main()
{
    cout << factori(750,490);
    return 0;
}
