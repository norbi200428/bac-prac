#include <iostream>

using namespace std;

void secventa(int &n)
{
    int ujszam=0,szorzo=1;
    while(n)
    {
        int szj = n%10;
        if(n%100==22)
        {
            ujszam = 0*szorzo + ujszam;
            szorzo*=10;
        }
        else
        {
            ujszam = szj*szorzo+ujszam;
            szorzo*=10;
        }
        n/=10;
    }
    n = ujszam;
}
int main()
{
    int n ;
    cout << "n= ";
    cin >> n;
    secventa(n);
    cout << n;

    return 0;
}
