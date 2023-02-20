#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        ifstream in("bac.txt");
        int x,v[100];
        while(in >> x){
            if(x/100==0){
                v[x]=1;
            }
        }
        int k;
        x=99;
        while(x>=10 && k<2){
            if(v[x]==0 && k==0 && x%10!=x/10){
                v[k] = x ;
                k=1;
            }
            else if(v[x]==0 && k==1 && x%10!=x/10){
                v[k]=x;
                k=2;
            }
            x--;
        }
        if(k==2){
            cout << v[0] << " " << v[1];
        } else {
            cout << "nu exista";
        }
        return 0;
}
