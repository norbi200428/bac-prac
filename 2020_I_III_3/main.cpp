#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    cout << y << " " << x << " ";
    while(x!=1 && y!=1)
    {
        int aux = x;
        x = 3*x-y;
        y=aux;
        cout << x << " ";
    }
    cout << x;
    return 0;
}
