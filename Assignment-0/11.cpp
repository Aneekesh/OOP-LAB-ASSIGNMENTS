// WAP to swap two numbers using call by reference.
#include <iostream>
 using namespace std;
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   cout<<"Enter the value of x and y"<<endl;
   cin>>x>>y;
   cout<<"Before Swapping"<<"\n"<<"x ="<<x<<"\ny ="<<y<<endl;
 
   swap(&x, &y); 
 
   cout<<"After Swapping"<<"\nx ="<<x<<"\ny ="<<y<<endl;
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}