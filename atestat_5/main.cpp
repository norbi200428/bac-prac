#include <iostream>

using namespace std;

int factorialis(int n){
    int s=1;
    for(int i=2;i<=n;i++){
        s*=i;
    }
    return s;
}
int main()
{
    int n,osszeg=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            osszeg-=factorialis(i);
        } else {
            osszeg+=factorialis(i);
        }
    }
    cout << osszeg;
    return 0;
}
