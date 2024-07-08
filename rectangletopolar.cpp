#include<iostream>
#include<math.h>
using namespace std;
class Polar
{
   private:
   float radius;
   float angle;
   public:
   Polar()
   {
    radius=0;
    angle=0;
   }
    Polar(float a,float b)
   {
    radius=a;
    angle=b;
   }
   void display()
   {
    cout<<"Radius="<<radius<<endl;
    cout<<"Angle="<<angle<<endl;
   }
};
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
    operator Polar()
    {
        float angle;
        float radius;
        angle=atan(y/x);
        radius=sqrt(pow(x,2)+pow(y,2));
        Polar P(radius,angle);
        return P;

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