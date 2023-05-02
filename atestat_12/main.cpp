#include <iostream>

using namespace std;


int main()
{
    int n,t[100];
    cout << "n= ";
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> t[i];
    }
    for(int i=0; i<n-1; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(t[i]>t[j])
            {
                swap(t[i],t[j]);
            }
        }
    }
    int ok=1;
    for(int i=1; i<n; ++i)
    {
        if(t[i] != t[i-1]+i)
        {
            ok=0;
        }
    }
    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}
