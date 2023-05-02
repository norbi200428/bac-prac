#include <iostream>
using namespace std;

bool paros(int n){
     if(n%2==0){
        return true;
     }
     return false;
}
int main() {
    int n,szam,prev,current=1,max=0;
    cout << "n= ";
    cin >> n;
    cin >> prev;
    for(int i=0;i<n-1;i++){
        cin >> szam;
        if(paros(prev) == paros(szam)){
            current ++;
        } else {
            if(current  > max) max = current;
            current = 1;
        }
        prev = szam;
    }
    cout << max;
    return 0;
}
