#include <iostream>

using namespace std;

int main()
{
    int n ,t[100][100];
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            t[i][j] = (i*j)%10;
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
