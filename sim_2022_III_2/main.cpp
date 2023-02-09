#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szoveg,szo;
    bool kiir = false;
    getline(cin,szoveg);
    cin >> szo;
    for(int index=0; index<szoveg.size(); index++)
    {
        if(szoveg[index] == szo[0])
        {
            if(index==0 || (index >0 && szoveg[index-1]== ' '))
            {
                bool match =true;
                for(int szoindex=1; szoindex<szo.size(); szoindex++)
                {
                    index++;
                    if(szoveg[index]!=szo[szoindex])
                    {
                        match =false;
                    }
                }
                index++;
                if(szoveg[index]!=' ')
                {
                    match = false;
                }
                index++;
                if(match)
                {
                    kiir=true;
                }
            }
        }
        if(szoveg[index]==';' && kiir){
            cout << " ";
            kiir = false;
        }
        if(kiir){
            cout << szoveg[index];
        }
    }
    return 0;
}
