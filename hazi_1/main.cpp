#include <iostream>

using namespace std;

int main()
{
    int n ,a[100],b[100];
    cin >> n;
    int paros=0,paratlan=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]%2==0) paros+=a[i];
    }

    for(int i=1;i<=n;i++){
        cin >> b[i];
        if(b[i]%2!=0 && b[i] < paros) paratlan+=b[i];
    }
    cout << paratlan;
    return 0;
}
