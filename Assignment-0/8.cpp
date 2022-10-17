// 8. WAP to find out the sum of the elements stored in a matrix.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mat[3][3], i, j, sum;
    sum = 0;
    cout<<"Enter all 9 elements of 3*3 Matrix:-\n"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mat[i][j];
            sum = sum + mat[i][j];
        }
    }
    cout<<"\nSum of all elements = "<< sum;
    getch();
    return 0;
}