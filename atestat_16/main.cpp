#include <iostream>
#include <fstream>

using namespace std;

bool azonos(int n){
     int prev = n%10,szj    ;
     n/=10;
     while(n){
        szj = n%10;
        if(szj != prev){
            return false;
        }
        n/=10;
     }
     return true;
}
int main()
{
    ifstream in("sir.in");
    int t[100] , szam,i=0;
    while(in >> szam){
        if(azonos(szam)){
            t[i] = szam;
            i++;
        }
    }
    for(int balin=0;balin<i-1;balin++){
        for(int jobbin=balin+1;jobbin<i;jobbin++){
            if(t[balin] > t[jobbin]){
                swap(t[balin],t[jobbin]);
            }
        }
    }
    for(int index=0;index<i;index++){
        cout<< t[index] << " ";
    }
    return 0;
}
