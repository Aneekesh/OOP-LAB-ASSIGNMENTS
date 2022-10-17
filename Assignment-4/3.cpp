// 3. WAP, which displays a given character, n number of times, using a function. When the n value is not provided, it should print the given character 80 times. When both the character and n value are not provided, it should print ‘*’ character 80 times.
// [Write the above program in two ways:-
// -using function overloading.
// -using default arguments.]
#include <iostream>
using namespace std;

void def(int n = 80, char c = '*')
{
    for(int i = 1;i <= n;i++)
        cout << c << " ";
}
void def(char c)
{
    for(int i = 1; i <= 80; i++)
        cout << c << " ";
}
int main() 
{
    int n;
    char c;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter character: ";
    cin >> c;
    def(n ,c); //normal call
    cout << '\n';
    def(); //default argument
    cout << '\n';
    def(c); //function overloading

    return 0;
}