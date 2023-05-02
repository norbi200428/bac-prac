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
    int n;
    cout << "n=" ;
    cin >> n;
    int prev = 2;
    for(int i=3;i<=n;i++){
        if(prim(i)){
            if(prev - i == 2 || i - prev == 2){
                cout << "(" << prev << "," << i << ") ";
            }
            prev = i;
        }
    }
    return 0;
}
