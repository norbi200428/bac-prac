#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("bac.out");
    int x,y,n;
    cin >> x >> y;
    out << y << " " << x << " ";
    n=(y-x)/2-1;
    while(n>0){
         x = x - 2*n;
         out << x << " ";
         n--;
    }
    out.close();
    return 0;
}
