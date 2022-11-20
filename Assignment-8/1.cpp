

#include <iostream>
using namespace std;
 
class Array
{
private:
    int arr[10];
public:
    friend ostream & operator << (ostream &out, const Array &c);
    friend istream & operator >> (istream &in,  Array &c);
};
 
ostream & operator << (ostream &out, const Array &c)
{
    for(int i=0;i<10;i++)
    out << c.arr[i]<<"\n";
    
    return out;
}
 
istream & operator >> (istream &in,  Array &c)
{
   
    cout << "Enter 10 Elements in this array ";
     for(int i=0;i<10;i++)
    in >> c.arr[i];
    return in;
    return out;
}
 
istream & operator >> (istream &in,  Array &c)
{
   
    cout << "Enter 10 Elements in this array ";
     for(int i=0;i<10;i++)
    in >> c.arr[i];
    return in;
}
 
int main()
{
   Array c1;
   cin >> c1;
   cout << "The Elements are: \n ";
   cout << c1;
return 0;
}