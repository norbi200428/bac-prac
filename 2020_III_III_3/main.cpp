#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int szam,szamlalo=0,elso=0,utolso;
    while(in>>szam)
    {
        szamlalo++;
        if(szam<0 && elso==0)
        {
            elso = szamlalo;
        }
        if(szam<0)
        {
            utolso = szamlalo;
        }
    }
    int max=0;
    if(utolso>max) max = utolso;
    if(elso > max) max = elso;
    if(max < (szamlalo-elso+1)) max = szamlalo-elso+1;
    if(max < (szamlalo-utolso+1)) max = szamlalo-utolso+1;
    cout << max;
    return 0;
}
