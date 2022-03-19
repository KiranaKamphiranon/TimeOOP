#include <iostream>
using namespace std;
#include "student.h"

int main() {
 student s1,s2;

  s1.set(8,"Phumed");//กำหนดทีเดียวสองตัวแปรใช้ set//Your age is too low //Set your age to 15
  //cout<<s1.age<<endl;//แสดงไม่ได้เพราะ age เป็น private member
  s1.set_age(19);//กำหนดตัวแปรเดียวต้องทำ function แยกออกจาก class แต่สร้างโปรโตไืทป์ใน class public
  s1.display();//หลังชื่อ function อย่าลืม ()
  
  s2.set(20, "Ploypailin");//กำหนดทีเดียวสองตัวแปรใช้ set
  s2.display();

  s1.get_age()>s2.get_age()?cout<<s1.get_name():cout<<s2.get_name();
  cout<<" is older";
  
  /*if(s1.get_age()>s2.get_age()) cout<<s1.get_name();
  else cout<<s2.get_name();*/

/*
 // s1.name=new char[20];
  //strcpy(s1.name,"Ploypailin");
  s1.name="Phumed";
  cout<<"Name is "<<s1.name<<endl;

  s1.age=18 ;
  cout<<"Age is "<<s1.age<<endl;
//  delete[] s1.name;
  */ 
}