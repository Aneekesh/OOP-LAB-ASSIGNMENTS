// Create a class which stores a sting and its length as data members. Include all the constructors. Include
// a member function to join two strings and display the concatenated string.


#include<iostream>
using namespace std;
class String A{
    private : 
    String str;
    int length;
    public : 
    String A(String s){
        str = s;
        
    }
    void conc_string(String s2){
        string s3 = str+s2;
    }
    cout<<"Concatenated string "<<+s3:
    }:
    int main(){
        String A s("Hello");
        s.conc_string("world");
        return 0;
    }
