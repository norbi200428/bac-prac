#include <iostream>

using namespace std;

int main()
{
    int n, t[100][100];
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> t[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        cout << t[i][1] << " ";
    }
    for(int j=2;j<=n;j++){
        cout << t[n][j] << " ";
    }
    for(int i=n-1;i>=1;i--){
        cout << t[i][n] << " ";
    }
    for(int j=n-1;j>=2;j--){
        cout << t[1][j] << " ";
    }
    return 0;
}
