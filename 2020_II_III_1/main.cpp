#include <iostream>

using namespace std;

void fii(int n){
     for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i*j == n && i>j){
                cout << "(" << i << " " << j << ")" << " ";
            }
        }
     }

}
int main()
{
    fii(16);
    return 0;
}
