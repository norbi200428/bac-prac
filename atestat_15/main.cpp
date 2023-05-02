#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("tablou.txt");
    int n,x,szam,counter=0;
    in >> n >> x;
    while(in >> szam){
        if(szam == x) counter ++;
    }
    if(counter > 1){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
