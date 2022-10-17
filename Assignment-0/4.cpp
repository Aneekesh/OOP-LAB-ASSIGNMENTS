// 4 WAP to display the array elements in ascending order.
#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, i, j, temp;
    cout << "Enter the size of the array";
    cin >> n;
    cout << "Enter the elements";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The elements are in ascending order \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
        cout<<"\n";
    }
    return 0;
}