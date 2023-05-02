#include <iostream>
#include <fstream>

using namespace std;

int lnko(int a, int b) {
    if (b == 0) {
        return a;
    }
    return lnko(b, a % b);
}

int main()
{
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    int x,y,d,z;
    in >> x >> y;
    d = lnko(x,y);
    while(in >> z){
        d = lnko(d,z);
    }
    out << d;
    in.close();
    out.close();
    return 0;
}
