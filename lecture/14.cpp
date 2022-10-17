#include<iostream>
using namespace std;
   typedef struct employee {
    int id;
    char favChar;
    float salary;
}ep;



 union money{
    int rice;
    char car;
    float pounds;
 };




int main(){

   enum Meal {breakfast , lunch , dinner};
   Meal m1 = lunch;
   cout<<m1;


    // union money m1;
    // m1.rice = 40;
    // cout<<"The price of rice is "<<m1.rice<<endl;


    // ep harry ;
    // harry.id = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;
    // cout<<"The value is "<<harry.id<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl; 
     return 0;

}   