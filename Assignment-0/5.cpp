// 5 WAP to add two matrices and display it.
#include <iostream>
using namespace std;
int main()
{
    int m, n, c, d, a[10][10], b[10][10], sum[10][10];
    cout<<"Enter the number of rows and columns of matrix"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of a matrix"<<endl;
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin<<a[c][d];
    cout<<"Enter the elements of b matrix"<<endl;
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &b[c][d]);
    cout<<"Sum of entered matrices:-"<<endl;
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = a[c][d] + b[c][d];
            cout<<sum[c][d];
        }
        cout<<endl;
    }
    return 0;
}