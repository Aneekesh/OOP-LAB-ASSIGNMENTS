// 3 WAP to find largest element stored in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[50], n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter integers\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The largest Element is : " << max << endl;
    return 0;
}