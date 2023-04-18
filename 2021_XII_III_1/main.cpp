#include <iostream>

using namespace std;

void frate(int x, int &y){
     int t[100],i=0;
     y=0;
     while(x){
        t[i] = x%10;
        x/=10;
        i++;
     }
     for(int j=i-1;j>=0;j--){
        t[j]++;
        if(t[j] > 9){
            y=-1;
            break;
        }
        y=y*10+t[j];
     }
}
int main()
{
    int y;
    frate(9027,y);
    cout << y;
    return 0;
}
