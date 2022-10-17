#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    // selection control structure , if else ladder
    //  if(age<18){
    //      cout<<"You cannot come to my party"<<endl;
    //  }
    //  else if (age == 18){
    //      cout<<"you are a kid and you will get a kid pass"<<endl;
    //  }
    //  else{
    //      cout<<"you can come to party"<<endl;
    //  }

    // switch case statements
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;
    default:
        cout << "No special cases" << endl;
        break;
    }
    return 0;
}
