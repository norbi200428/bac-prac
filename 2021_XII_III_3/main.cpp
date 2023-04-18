#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x,szam,szamlalo=1;
    in >>x;
    while(in>>szam){
        if(szam>=x) szamlalo++;
    }
    cout << szamlalo;
    in.close();
    return 0;
}
