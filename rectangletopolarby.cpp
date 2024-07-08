#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
    private:
    float x;
    float y;
    public:
    Rectangle()
    {
        x=0;
        y=0;
    }
    Rectangle(float a,float b)
    {
        x=a;
        y=b;
    }
    float returnx()
    {
        return x;
    }
    float returny()
    {
        return y;
    }


};
class Polar
{
    private:
    float angle;
    float radius;
    public:
    Polar()
    {
        angle=0;
        radius=0;
    }
    Polar(float a,float b)
    {
        radius=a;
        angle=b;
    }
    Polar(Rectangle a)
    {
        radius=sqrt(a.returnx()*a.returnx()+a.returny()*a.returny());
        angle=atan(a.returny()/a.returnx());
    }
    void display()
    {
        cout<<"Radius="<<radius<<endl;
        cout<<"Angle="<<angle<<endl;
    }
};
int main()
{
    Rectangle R(20,10);
    Polar P;
    P=R;
    P.display();
    return 0;
}