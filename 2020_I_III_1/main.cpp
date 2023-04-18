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
void putere(int n,int &d,int &p)
{
    int stat[100]= {0},utolso;

    while(n>1)
    {
        for(int oszto=2; oszto<=n; oszto++)
        {
            if(prim(oszto))
            {
                while(n%oszto==0)
                {
                    n/=oszto;
                    stat[oszto]++;
                }
                utolso=oszto;
            }
        }
    }
    p=0;
    for(int i=2; i<=utolso; i++)
    {
        if(stat[i]>p) p=stat[i];
    }
    for(int i=utolso; i>=2; i--)
    {
        if(stat[i] == p)
        {
            d = i;
            break;
        }
    }

}
int main()
{
    int d,p;
    putere(10780,d,p);
    cout << d << " " << p;
    return 0;
}
