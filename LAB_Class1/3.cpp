// Create a class ‘shape’. Derive three classes from it: Circle, Triangle, and Rectangle. Include
// the relevant data members and functions in all the classes. Find the area of each shape and
// // display it.
#include<iostream>
using namespace std;
class shape{
    public :
    virtual void area() = 0;
    class shape{
        public :
        virtual void area() = 0;
    };
    class circle : public shape {
        float r;
        public:
         void area(){
            cout<<"Enter radius :";
            cin>>r;
            cout<<"\n area of circle "<<(3.146 * r * r);
         }
    };
    class rectangle : public shape {
        int l,b;
        void area(){
            cout<<"Enter length :";
            cin>>l;
            cout<<"enter breath";
            cin>>b;
            cout<<"\n Area of rectangle "<<l*b;
        }
    };


    class traingle : public shape {
        int h,b;
        float area ;
        public :
        int h,b;
        float area;
        public :
        void area()
        {
            cout<<"Enter the breadth";
            cin>>b;
            cout<<"enter the height ";
            cin>>h;
            area = 0.5*h*b;
            cout<<"Area of triangle "<<area ;
        }
    };
    int main(){
        circle c1;
        c1.area();
        rectangle r;
        r.area();
        traingle t;
        t.area();
        return 0;
        
    }
