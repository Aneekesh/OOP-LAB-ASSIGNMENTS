//wap in c++ multiply and divide two variable using operator overloading * and /
#include<iostream>
using namespace std;
class Number{
  private :
  int x,y;
  public :
  int multi(int a, int b ){
  x=a;
  y=b;
}
Number operator *(int c)
{
  int temp;
  temp = a*c.a1;
  return(temp);
}
Number operator /(int c1)
{
  int count;
  count = a/c1.a1;
  return(count);
}
};
int main(){
  Number ob1,ob2;
 int a = 2 , b = 4;
  ob1 = a*b;
  ob2  = a/b;
}


