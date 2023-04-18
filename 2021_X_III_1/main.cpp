#include <iostream>

using namespace std;

int armonie(int x,int y){
    int s1=0,s2=0,sum=x+y;
    for(int i=1;i<=x;i++){
        if(x%i==0) s1+=i;
    }
    for(int i=1;i<=y;i++){
        if(y%i==0) s2+=i;
    }
    int aux=0;
    if(s1>s2){
        aux=s1;
        s1=s2;
        s2=aux;
    }
    if(sum>s1 && sum<s2){
        return 1;
    }
    return 0;
}
int main()
{
    cout << armonie(8,13);
    return 0;
}
