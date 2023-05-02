#include <iostream>

using namespace std;

int main()
{
    int n,szam,s=0,p=0;
    cin >> n;
    for(int i=0;i<2*n;i++){
        if(i<n){
            cin >> szam;
            if(szam%2==0){
                s+=szam;
            }
        }
        if(i>=n){
            cin >> szam;
            if(szam%2!=0 && szam < s){
                p+=szam;
            }
        }
    }
    cout << p;
    return 0;
}
