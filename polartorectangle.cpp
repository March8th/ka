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
    float returnr()
    {
        return radius;
    }
    float returna()
    {
        return angle;
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
    Rectangle(Polar a)
    {
        x=a.returnr()*cos(a.returna());
        y=a.returnr()*sin(a.returna());
    }
    void display()
    {
        cout<<x<<endl<<y<<endl;
    }
};
int main()
{
    Polar P(5,30);
    Rectangle R;
    R=P;
    R.display();
    return 0;
}