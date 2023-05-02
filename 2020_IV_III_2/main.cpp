#include <iostream>

using namespace std;

bool egyenlo(int a, int b)
{
    if(a == b)
    {
        return true;
    }
    return false;
}

int main()
{
    int m,n,t[100][100],a[100];
    cin >> m >> n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> t[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int p=1;
        a[i] = 0;
        for(int j=0;j<m;j++){
            a[i] = a[i] * p + t[j][i];
            cout << a[i] << " ";
            p=p*10;
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
