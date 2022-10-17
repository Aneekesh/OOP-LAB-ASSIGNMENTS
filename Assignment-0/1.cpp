// 1 WAP to create an array that can store max. 50 integers and display the contents of the array
#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the integers\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The integers are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}