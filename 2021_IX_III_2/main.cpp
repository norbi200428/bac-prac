#include<iostream>

#include<cstring>

using namespace std;

int main()
{

    char s[101]="";

    cin.getline(s,101);

    int sem=0,i=0;

    while(i<strlen(s))
    {

        while(s[i]==' '&&s[i]!='\0')

            i++;

        int j=i;

        while(s[j]!=' '&&s[j]!='\0')

            j++;

        j--;

        char voc;

        for(int x=i; x<=j; x++)

            if(strchr("aeiou",s[x])!=NULL)
            {

                voc=s[x];

                break;

            }

        int sem2=1;

        for(int x=i; x<=j; x++)

            if(strchr("aeiou",s[x])!=NULL&&s[x]!=voc)

                sem2=0;

        if(sem2==1)
        {

            sem=1;

            for(int x=i; x<=j; x++)

                cout<<s[x];

            cout<<endl;

        }

        i=j+1;

    }

    if(sem==0)

        cout<<"nu exista";

    return 0;

}
