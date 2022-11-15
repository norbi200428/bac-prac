#include <iostream>

using namespace std;

int main()
{
    int N, t[100][100];
    cout << "N = ";
    cin >> N;
    for(int i = 1 ; i <= N ; i++)
    {
        t[1][i] = i;
    }
    for(int i = 2 ; i <=N ; i++){
        for(int j = 1 ; j <= N ; j ++){
            if(j <= i){
                t[i][j] = i;
            } else {
               t[i][j] = j;
            }

        }
    }
    for(int i = 1 ; i <= N ; i++)
    {
        for(int j = 1 ; j <= N ; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
