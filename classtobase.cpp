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
  Time(int a,int b,int c)
  {
    hr=a;
    min=b;
    sec=c;
  }
  operator int()
  {
    int duration;
    duration=hr*3600+min*60+sec;
    return duration;
  }
};
int main()
{
    Time T1(1,11,10);
    int duration;
    duration=T1;
    cout<<"Entered data in sec is "<<duration<<" sec."<<endl;
}