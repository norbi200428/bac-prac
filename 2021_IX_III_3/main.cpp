#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("numere.txt");
    int x;
    int stat[11]={};
    while(in>>x){
        while(x>0){
            stat[x%10]++;
            x/=10;
        }
    }
    for(int i=9;i>=0;i--){
        while(stat[i]>0){
            cout <<i;
            stat[i]--;
        }
    }
    return 0;
}
