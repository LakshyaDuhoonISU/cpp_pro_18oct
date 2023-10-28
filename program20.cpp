//program to write an overloaded function to generate area of different shapes
#include<iostream>
using namespace std;

int area(int l,int b)
{
    return l*b;
}

int area(float r)
{
    return 3.14*r*r;
}

int area(int f, float h)
{
    return 0.5*f*h;
}

int main()
{
    int c;
    start:
    cout<<"Choose which shape you want to calculate area of: "<<endl<<"1.Rectangle"<<endl<<"2.Circle"<<endl<<"3.Triangle"<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
        int l,b,a;
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter breadth: ";
        cin>>b;
        a=area(l,b);
        cout<<"Area: "<<a<<endl;
        break;
        case 2:
        float r,d;
        cout<<"Enter radius: ";
        cin>>r;
        d=area(r);
        cout<<"Area: "<<d<<endl;
        break;
        case 3:
        int f,e;
        float h;
        cout<<"Enter base: ";
        cin>>f;
        cout<<"Enter height: ";
        cin>>h;
        e=area(f,h);
        cout<<"Area: "<<e<<endl;
        break;
        default:
        cout<<"Invalid choice"<<endl;
        goto start;
    }
    return 0;
}