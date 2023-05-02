#include <iostream>

using namespace std;

int main()
{
    int n;
    float t[100];
    cout << "n= ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    ok = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(t[i] != t[j]){
                cout << t[i] << " ";
            }
        }
    }
    return 0;
}
