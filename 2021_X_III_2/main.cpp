#include <iostream>

using namespace std;

int main()
{
    int t[21][21],m,n;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> t[i][j];
        }
    }
    for(int i=1;i<m;i++){
        for(int j=0;j<n-1;j++){
            if(t[0][j] == t[i][n-1]){
                cout << t[0][j] << " ";
            }
        }
    }
    return 0;
}
