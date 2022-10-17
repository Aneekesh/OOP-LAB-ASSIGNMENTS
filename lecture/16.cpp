#include<iostream>
using namespace std;
void swap(int *a , int *b);
int &Reference_Swap(int &a , int &b);
int main(){
    int a = 4 , b = 5;
  
   cout<<"The value of a and b is "<<a<<" "<<b<<endl;
//    swap(&a,&b);
      Reference_Swap(a,b);
    cout<<"The value of a and b is "<<a<<" "<<b<<endl;
    Reference_Swap(a,b) = 800;
    cout<<"The value of a and b is "<<a<<" "<<b<<endl;
    return 0;
}

  //call by reference using pointers 
// void swap(int *a , int *b){
//         int temp = *a;
//         *a = *b;
//         *b = temp;
// }

  //call by reference using  c++ reference variables
// void Reference_Swap(int &a , int &b){
//         int temp = a;
//         a = b;
//         b = temp;
// }

int &Reference_Swap(int &a , int &b){
        int temp = a;
        a = b;
        b = temp;
         return a;
}   