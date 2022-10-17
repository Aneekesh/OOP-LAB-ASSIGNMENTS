// 1. WAP to find the area of a circle, a rectangle, and a triangle, using the concept of function overloading
#include <iostream>
using namespace std;
float area(float bs, float ht)

{

    return ((bs * ht) / 2);
}
int area(int l, int b)
{
    return l * b;
}
double area(double r)
{
    return 3.142 * r * r;
}

int main()
{
    int l, b;
    float bs, ht;
    double r;
    cout<<"Enter the base of triangle \n";
    cin>>bs;
    cout<<"Enter the height of triangle\n";
    cin>>ht;
    cout<<"Enter the length of rectangle\n";
    cin>>l;
    cout<<"Enter the width of rectangle \n";
    cin>>b;
    cout<<"Enter the radius of circle\n";
    cin>>r;
    cout<<endl<<"The area of triangle is " <<area(bs,ht)<<endl;
    cout<<endl<<"The area of rectangle is" <<area(l ,b)<<endl;
    cout<<endl<<"The area of circle is "<<area(r)<<endl;
}
