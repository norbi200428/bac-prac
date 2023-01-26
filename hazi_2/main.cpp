#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k,i=0,szam,szamlalo=0;
    cin >> n >> k;
    int szorzo=1;
    for(int j=1; j<=k; j++)
    {
        szorzo*=10;
    }
    while(i!=n)
    {
        cin >> szam;
        if(szam/szorzo>0)  szamlalo ++;
        i++;
    }
    cout << szamlalo;
    return 0;
}
