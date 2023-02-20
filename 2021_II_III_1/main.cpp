#include <iostream>

using namespace std;

int factori(int n,int m){
    int p1,p2,k=0;
    int oszto=2;
    while(n!=1 && m!=1){
        p1=0;
        while(n%oszto==0){
            n/=oszto;
            p1++;
        }
        p2=0;
        while(m%oszto==0){
            m/=oszto;
            p2++;
        }
        if(p1==p2 && p1!=0){
            k++;
        }
        oszto++;
    }
    return k;
}
int main()
{
    cout << factori(16500,10780);
    return 0;
}
