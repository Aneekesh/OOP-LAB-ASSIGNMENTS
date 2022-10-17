#include<iostream>
using namespace std;
int  c = 45;
int main(){
    // int a ,b,c;
    float d = 34.4;
    // cout<<"enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"<the value of  b is :"<<endl;
    // cin>>b;
    // c= a+b;
    // cout<<"The sum is "<<endl;
    // cout<<"the global c is "<<::c;

    //******reference variables*****//
    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    /*typecasting*/
    int a = 45;
    cout<<"the value is "<<a(float)<<endl;

    return 0;
}