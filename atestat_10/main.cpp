#include <iostream>

using namespace std;

int osszeg(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
int inverz(int n){
    int ujszam=0,szj;
    if(n<10) return n;
    else {
        while(n){
            szj = n%10;
            ujszam = ujszam *10 + szj;
            n/=10;
        }
      return ujszam;
    }
}
int main()
{
    int n,szam;
    cout << "n= ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> szam;
        if(inverz(szam)%osszeg(szam) == 0){
            cout << szam << " " << inverz(szam) << " " << osszeg(szam) << endl;
        }
    }
    return 0;
}
