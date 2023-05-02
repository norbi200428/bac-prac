#include <iostream>

using namespace std;

bool prim(int n){
     for(int oszto=2;oszto<n/2+1;oszto++){
        if(n%oszto==0){
            return false;
        }
     }
     return true;
}
int main()
{
    int x,y,k,szamlalo=0;
    cin >> x >> y >> k;
    for(int i=x;i<=y;i++){
        if(prim(i) && szamlalo<k){
            cout << i << " ";
            szamlalo++;
        }
    }
    cout << endl;
    if(szamlalo<k){
        cout << "s-au gasit mai putine numere prime: " << szamlalo;
    }
    return 0;
}
