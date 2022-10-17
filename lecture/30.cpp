#include<iostream>
using namespace std;

class  Complex{
  int a,b;

  public : 
  Complex(void);  //constructor declaration

  void printNumber(){
    cout<<"your number is "<< a << "a "<<b<<"i"<<endl;
  }
};

Complex :: Complex(void){
    a  = 0 ; 
    b  = 0;
}


int main(){
    Complex a;
    a.printNumber();
    return 0;
} 