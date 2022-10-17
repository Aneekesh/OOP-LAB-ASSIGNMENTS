// 10. WAP to find the factorial of a number n by using a suitable user defined function (say fact) for
// // it.
#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}