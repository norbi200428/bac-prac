#include <iostream>

using namespace std;

int hossz(int n){
    int s=0;
    while(n){
        n/=10;
        s++;
    }
    return s;
}
int main()
{
    int n,t[100];
    cout << "n= ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    int s = hossz(t[n-1]),counter=0;
    for(int i=0;i<n-1;i++){
        if(hossz(t[i]) > s){
            counter++;
        }
    }
    cout << counter;
    return 0;
}
