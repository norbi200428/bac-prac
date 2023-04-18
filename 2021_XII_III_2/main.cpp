#include <iostream>

using namespace std;

int main()
{
    int n,k,t[100][100];
    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;
    k--;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> t[i][j];
        }
    }
    cout << endl;
    int aux;
    for(int j=n; j>=1; j--)
    {
        if(k+j<n-1)
        {
        aux = t[k][j-1];
        t[k][j-1] = t[k][j];
        t[k][j] = aux;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
