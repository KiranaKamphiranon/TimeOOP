class student{
   private:
           int age;
           string name;
   public: 
        void set(int , string );
        void display();
      //    fn ที่กำหนดอายุอย่างเดียว
      void set_age(int);
      int get_age(){return age;}
     string get_name(){return name;}
};
 void student::set(int a, string n){
            this->set_age(a);
            name=n;
}  
void student::set_age(int a){
      if(a>15) age=a;
      else {
             cout<<"Your age is too low"<<endl;
             cout<<"Set your age to 15"<<endl;
             age=15;
      }
}
void student::display(){
          cout<<"Name:"<< this->name<<endl;
          cout<<"Age:"<< this->age<< endl;
}
/*string student::get_name(){
    return name;
}
int student::get_age(){
 
      return age;     
}*/