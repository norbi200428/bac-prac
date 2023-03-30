#include <iostream>
#include <fstream>

using namespace std;

bool paros(int n)
{
    if(n%2!=0)return false;
    return true;
}
int main()
{
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    int n,van=0;
    while(in>>n)
    {
        int aux=n,parosonly=0;
        while(n>0)
        {
            if(paros(n))
            {
                n/=10;
                parosonly=1;
            }
            else
            {
                parosonly=0;
                break;
            }
        }
        if(parosonly)
        {
            van=1;
            out << aux <<" ";
        }
    }
    if(!van) out << "nem letezik";
    return 0;
}
