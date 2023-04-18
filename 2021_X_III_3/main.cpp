#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int first,nr,pos=1;
    in >> first;
    while(in>>nr){
        if(nr<first) pos++;
    }
    cout << pos;
    return 0;
}
