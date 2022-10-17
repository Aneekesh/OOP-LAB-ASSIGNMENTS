// Enter any array , reverse it and display result
#include <iostream>
using namespace std;    
int main()
{
    int a[50], size;
    int temp;
    int j,i;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "Enter the Elements : " << endl;
    for (int i = 0; i <size; i++)
    {  

        
        cin >> a[i];
    }
       //cout << "Reverse array Elements :" << endl;
    for (i = 0,j=size-1;i<size/2; i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout << "Reverse array Elements :" << endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }    
    return 0;
}
