#include <iostream>

using namespace std;

void numar(int n,int c,int &m)
{
    int ok=0;
    int p=1;
    while(n>0)
    {
        int szj = n%10;
        if(n%10!=c)
        {
            if(n%10!=0)
            {
                m=szj*p+m;
                p*=10;
            }
            ok=1;
        }
        n/=10;
    }
    if(ok==0)
    {
        m=-1;
    }
}
int main()
{
    int m;
    numar(50752,5,m);
    cout << m;
    return 0;
}
