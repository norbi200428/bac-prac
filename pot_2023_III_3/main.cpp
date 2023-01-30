#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x,y,currenthossz=1,maxhossz=0,contor=0;
    in >> x;
    while(in >> y){
        if(x%2!=y%2){
            currenthossz=1;
        }
        else if(x%2==y%2){
            currenthossz ++;
            if(currenthossz == maxhossz){
                contor++;
            }
            else if(currenthossz > maxhossz){
                contor = 1;
                maxhossz = currenthossz;
            }
        }
        x = y;
    }
    cout << contor << " " << maxhossz;

    return 0;
}
