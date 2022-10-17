#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public :
    Complex(void);

    void printNumber(){
        cout<<"Your Number is "<< a << " + "<< b << "i" <<endl;
    }

};

 Complex :: Complex(void){//------> this is default constructor as it takes no parameter 
    a  = 10;
    b = 20;  
} 

int main(){
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

}