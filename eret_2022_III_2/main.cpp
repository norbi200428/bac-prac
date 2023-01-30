#include <iostream>

using namespace std;

int main()
{
    int n,m,v[200][200];
    cin >> m >> n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> v[i][j];
        }
    }
    for(int i=0; i<=m+1; i++)
    {
        v[0][i] = 10;
        v[m+1][i] = 10;
    }
    for(int j=0; j<=n+1; j++)
    {
        v[j][0] = 10;
        v[j][n+1] = 10;
    }
    int s = 0;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int mini = v[i-1][j];
            if(v[i][j-1] < mini) mini = v[i][j-1];
            if(v[i][j+1] < mini) mini = v[i][j+1];
            if(v[i+1][j] < mini) mini = v[i+1][j];
            if(v[i][j] < mini) s = s + (mini-v[i][j]);
        }
    }
    cout << s;
    return 0;
}
