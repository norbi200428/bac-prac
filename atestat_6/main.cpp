#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("atestat.in");
    int szam,van=0;
    while(in >> szam){
        if(szam%2==0){
            int aux = szam;
            int ok=1;
            while(szam){
                int szj = szam % 10;
                if(szam%2!=0){
                    ok=0;
                }
                szam/=10;
            }
            if(ok)
            {
                van = 1;
                cout << aux << " ";
            }
        }
    }
    if(!van){
        cout << "Nu exista";
    }
    return 0;
}
