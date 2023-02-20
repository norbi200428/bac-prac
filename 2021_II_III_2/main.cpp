#include <iostream>

using namespace std;

int main()
{
    int n,t[100][100];
    cout << "n= ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n+1) t[i][j] = n;
            if(i+j>n+1) t[i][j]=t[i][j-1]-1;
        }
        for(int j=n;j>=1;j--){
            if(i+j<n+1) t[i][j]=t[i][j+1]-1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
