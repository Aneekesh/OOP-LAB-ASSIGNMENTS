// 9. WAP to find out the transpose of a given matrix.
#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, r = 0, c = 0;

    cout << "Input number of row: " << endl;
    cin >> r;
    cout << "Input number of column: " << endl;
    cin >> c;
    cout << "Enter array: " << endl;
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\n"
                 << "element:" << i << "," << j << endl;
            cin >> a[i][j];
        }
    }
    cout << "\n"
         << "The array is:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\t" << a[i][j];
        }
        printf("\n\n");
    }
    int t[c][r];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    cout << "Transpose is:"
         << "\n";
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            cout << "\t" << t[i][j];
        }
        cout << "\n\n";
    }

    return 0;
}