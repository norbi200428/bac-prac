#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cout <<"n= ";
    cin >> n;
    while(n){
        s+=n;
        n/=10;
    }
    cout << s;
    return 0;
}
