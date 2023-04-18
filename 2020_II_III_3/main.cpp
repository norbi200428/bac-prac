#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int szam,max1=0,max2=0,max3=0;
    while(in >> szam)
    {
        if(szam%100==20)
        {
            if(szam >max1 && szam>max2 && szam > max3)
            {
                max1=szam;
            }
            else if(szam<max1 && szam>max2 && szam>max3)
            {
                max2=szam;
            }
            else if(szam < max1 && szam < max2 && szam>max3)
            {
                max3=szam;
            }
        }
    }
    cout << max3 << " " << max2 << " " << max1;
    return 0;
}
