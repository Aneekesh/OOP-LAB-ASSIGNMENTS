// 2 WAP to find out the sum of the numbers stored in an array of integers.
#include <iostream>
using namespace std;
int main()
{

    int arr[50], n, sum;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    cout << "Enter number" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum of array is :" << sum << endl;
    return 0;
}