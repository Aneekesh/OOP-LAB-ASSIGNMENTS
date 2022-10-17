// WAP to replace all vowels from a string with its immediate consonant.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char str[50], s[50];
    int i;
    cout<<"Enter any string: "<<endl;
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            s[i] = str[i + 1];
        }
        else
            s[i] = str[i];
    }
    cout<<"\nNew String (after replacing vowel )= s"<< s<<endl;
    getch();
    return 0;
}