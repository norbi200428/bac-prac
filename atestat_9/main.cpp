#include <iostream>
#include <fstream>

using namespace std;

int azonos(int n)
{
    int ok=1;
    if(n<10)
    {
        return true;
    }
    else if(n>10)
    {
        int prev = n%10,szj;
        n/=10;
        while(n)
        {
            szj = n%10;
            if(szj != prev)
            {
                ok=0;
            }
            n/=10;
        }
    }
    if(ok)
    {
        return true;
    }
    return false;
}
int main()
{
    ifstream in("tablou.txt");
    int szam,t[100],i=0;
    while(in >> szam)
    {
        if(azonos(szam))
        {
            t[i] = szam;
            i++;
        }
    }
    for(int j=0; j<i-1; j++)
    {
        for(int k=j+1; k<i; k++)
        {
            if(t[j]>t[k])
            {
                swap(t[j],t[k]);
            }
        }
    }
    for(int j=0; j<i; j++)
    {
        cout << t[j] << " ";
    }
    return 0;
}
