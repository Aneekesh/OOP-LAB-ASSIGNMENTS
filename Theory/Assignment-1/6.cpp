// Write a program in C++ to count the digits of a given number using recursion.
#include <iostream>
using namespace std;

int num_digits(int n);

int main()
{
    int n;
    cout << "Enter any number";
    cin >> n;
    cout << "Total digit are :" << num_digits(n);
    return 0;
}
int num_digits(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return 1 + num_digits(n / 10);
}
