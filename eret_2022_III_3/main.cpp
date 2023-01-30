#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x,y,szam,temp,contor=0;
    in >> x >> y;
    in >> temp;
    while(in >> szam){
        if(szam >= x && szam <= y && szam!=temp){
            contor++;
            temp=szam;
        }
    }
    cout << contor;
    return 0;
}
