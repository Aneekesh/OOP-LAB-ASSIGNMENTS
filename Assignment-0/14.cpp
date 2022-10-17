// 14 WAP to find the position of substring in a given string.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[30], t[20];
    char *found;

    /* Entering the main string */
    puts("Enter the first string: ");
    gets(s);

    /* Entering the string whose position or index to be displayed */
    puts("Enter the string to be searched: ");
    gets(t);

    /*Searching string t in string s */
    found = strstr(s, t);
    if (found)
      cout<<"Second String is found in the First String at position.\n"<<found - s+1;
    else
        cout<<"String not found";
    return 0;
}