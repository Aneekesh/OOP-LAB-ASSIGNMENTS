 #include<iostream>
 using namespace std;
 int main(){
    int marks[4] = {23,24,25,26};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for(int i = 0 ; i< 4 ; i++){
    //     cout<<"the value of marks  " <<i<<" is "<<marks[i]<<endl;
    // }

// int i = 0;
//     while(i<4){
//         cout<<"the value of marks "<<i<< " is "<<marks[i]<<endl;
//         i++;
//     }

// int i = 0;
// do{
//     cout<<"the value of marks  " <<i<<" is "<<marks[i]<<endl;
//     i++;
// }while(i < 4);

//pointer and arrays
int *p = marks;
// cout<<*(p++);
cout<<"The value of *P is "<<*p<<endl;
cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
  
    return 0;
 }
