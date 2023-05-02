#include <iostream>
#include <fstream>

using namespace std;

bool pallindrom(int n){
     int ujszam = 0,szj,temp=n;
     while(n){
        szj = n%10;
        ujszam = ujszam*10+szj;
        n/=10;
     }
     if(ujszam == temp){
        return true;
     }
     return false;
}
int main()
{
    ifstream in("numere.in");
    int szam ,max=0;
    while(in >> szam){
        if(pallindrom(szam)){
            if(szam > max){
                max = szam;
            }
        }
    }
    cout << max;
    return 0;
}
