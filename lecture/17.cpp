#include<iostream>
using namespace std;


// inline int product(int a , int b){
//     return a*b;
// }
//********************************************************
// float moneyReceived(int currentMoney , float factor = 1.04){
//     return currentMoney * factor ; 
// }
//************************************************************
//  int product(int a , int b){
//     static int c = 0;  //this executes only once 
//     c  = c+1; // next time this functions is run , the value of c will be retained
//     return a*b+c;
// }
//*********************************************
// int strlen(const char *p){
//     with constant const , you can't change *p
// // }


int main(){
    int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The value of a X b is : "<<product(a,b)<<endl;
    // cout<<"The value of a X b is : "<<product(a,b)<<endl;
    // cout<<"The value of a X b is : "<<product(a,b)<<endl;
    // cout<<"The value of a X b is : "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"if you have "<<money<<" rs in your bank account , you will recive "<<moneyReceived(money)<<" rs after 1 yr ";

}