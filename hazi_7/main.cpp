#include <iostream>

using namespace std;

int main()
{
    int n,par=0,parat=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int n=1;
            for(int j=1;j<=i;j++){
                n*=j;
            }
            par+=n;
        } else{
           int n=1;
           for(int j=1;j<=i;j++){
            n*=j;
           }
           parat+=n;
        }
    }
    cout << parat-par;
    return 0;
}
