#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char szoveg[101],output[101]={},*p;
    gets(szoveg);
    cout << szoveg;
    p=strtok(szoveg, " ");

    return 0;
}
