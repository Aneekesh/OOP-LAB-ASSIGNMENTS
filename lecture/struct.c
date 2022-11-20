#include<iostream>
struct Book{
    int bookid;
    char title[20];
    float price;

    void input(){
        cout<<"Enter details";
        cin>>bookid>>title>>price;
    }
};

int main(){
    Book b1;
    b1.input();

}