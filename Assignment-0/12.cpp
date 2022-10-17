// WAP to print the numbers which are divisible by 7 and 13 within a range
#include <iostream>
using namespace std;
int main()
{
    int i, f, l;
    cout<<"Enter the range within which u want to print the no's :"<<endl;
    cout<<"\nEnter the start point :"<<endl;
    cin>>f;
    cout<<"Enter the last point :"<<endl;
    cin>>l;
    cout<<"\n The no's which are divisible by 7 and 13 are :\n"<<endl;
    for (i = f; i <= l; i++)
    {
        if (i % 7 == 0 && i % 13 == 0)
            cout<<i<<endl;
    }
    return 0;
}