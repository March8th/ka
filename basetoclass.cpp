#include<iostream>
using namespace std;
class Time
{
     private:
     int hr;
     int min;
     int sec;
     public:
     Time()
     {
        hr=0;
        min=0;
        sec=0;
     }
     Time(int duration)
     {
        hr=duration/3600;
        min=(duration%3600)/60;
        sec=duration%3600%60;
     }
     void display()
     {
        cout<<hr<<" hr "<<min<<" min"<<sec<<" sec."<<endl;
     }
};
int main()
{
    Time T1;
    int duration=4270;
    T1=4270;
    T1.display();
    return 0;
}