#include<iostream>
using namespace std;

int sum(int a , int b);  //function prototype
 

int main(){
    int num1 , num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2); //actual parameters
    return 0;
}

int sum(int a , int b){ //formal parameter
    int c = a+b;
    return c;
}