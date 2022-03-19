#include <iostream>
#include <iomanip>
using namespace std;
#include "Time.h"

int main(){
    Time t1,t2,t3;
    cout<<"What time was it? ";
    t1.getTime(); // สามารถแปลง 10:70:60 -->11:11:00
                  //10:-2:30. -->10:0:30
    //t1.display();
    cout<<"What time is it now? ";
    t2.getTime();
    //t2.display();
    t3=t2.subtract(t1); //t3=t2-t1
    cout<<"Time diff is ";
    t3.display();
  // ตัวอย่าง 02:-5:-30
}