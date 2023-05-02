#include <iostream>

using namespace std;

void generatoare(int n){
    int ok = 0;
    for(int i=2;i<n/2+1;i+=2){
        for(int j=n/2;j>0;j--){
            int s = i * j , p = i/j;
            if(s+p == n){
                cout << i << "-" << j << "   ";
                ok=1;
            }
        }
    }
    if(!ok) cout << "nu exista";
}
int main()
{
    int n;
    cin >> n;
    generatoare(n);
    return 0;
}
