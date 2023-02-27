#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int szamlalo=0;
    char szoveg[101],szoveg2[101]="";
    cin.getline(szoveg,101);
    char *szo = strtok(szoveg," ");
    while(szo)
    {
        if(strlen(szo)%2!=0)
        {
            char auxszo[101];
            strcpy(auxszo,szo);
            szo=strrev(szo);
            for(int i=0; i<strlen(auxszo)-1; i++)
            {
                if(auxszo[i] != szo[i])
                {
                    szamlalo++;
                }
            }

        }
        strcat(szoveg2,szo);
        strcat(szoveg2," ");
        szo=strtok(NULL," ");
    }
    if(szamlalo>0)
    {
        cout << szoveg2;
    }
    else
    {
        cout << "nu exista";
    }

    return 0;
}
