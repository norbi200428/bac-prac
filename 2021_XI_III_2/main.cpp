#include <iostream>

using namespace std;

int main()
{
    int t[100][100],n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> t[i][j];
        }
    }
    for(int i=0;i<k;i++){
        int aux = t[k-1][i];
        t[k-1][i] = t[i][k-1];
        t[i][k-1] = aux;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<  t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
