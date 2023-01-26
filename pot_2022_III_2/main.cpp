#include <iostream>
#include <string>

using namespace std;

bool maganhangzo(char betu)
{
    if(betu!='a' && betu!='e' && betu!='i' && betu!='o' && betu!='u') return false;
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(maganhangzo(s[i])) continue;
        else if(s[i] > 'a' && s[i] < 'e') s[i] = 'a';
        else if(s[i] > 'e' && s[i] < 'i') s[i] = 'e';
        else if(s[i] > 'i' && s[i] < 'o') s[i] = 'i';
        else if(s[i] > 'o' && s[i] < 'u') s[i] = 'o';
        else if(s[i]>'u') s[i] = 'u';
        }
        cout << s;
    return 0;
}
