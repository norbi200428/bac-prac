#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x,szamlalo=0,maxszamlalo=0,a=0;
    while(in >> x){
        if(a==0 && x<0){
            szamlalo++;
            maxszamlalo++;
        } else if(a==0 && x>0){
              a=1;
              maxszamlalo++;
        } else if(a==1){
           maxszamlalo++;
        }
    }
    if(maxszamlalo-szamlalo > szamlalo){
            cout << maxszamlalo-szamlalo;
    }
    else {
        cout << szamlalo;
    }
    return 0;
}
