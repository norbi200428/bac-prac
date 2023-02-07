#include <iostream>

using namespace std;

void patrate(int n , int &x , int &y){
     for(int i=2;i<=n/2;i++){
        for(int j=i+1;j<=n/2;j++){
            if(i*i*j*j==n){
                x=i;
                y=j;
                return;
            }
        }
     }
     x=0;
     y=0;
     return;

}
int main()
{
    int n,x,y;
    cin >> n;
    patrate(n,x,y);
    cout << x << " " << y;
    return 0;
}
