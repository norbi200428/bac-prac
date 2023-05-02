#include <iostream>

using namespace std;

int main()
{
    int n,nr,szamlalo=0;
    cout <<"n=";
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> nr;
        int max = 0;
        while(nr>0){
            int szj = nr%10;
            if(szj>max){
                max=szj;
            }
            nr/=10;
        }
        if(max%2!=0) szamlalo++;
    }
    cout << szamlalo;
    return 0;
}
