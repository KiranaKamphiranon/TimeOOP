class Time{
  private:
      int m,h,s;
  public: 
    void getTime();
    void display();
    Time subtract(Time);
};
void Time::getTime(){
  int h1,m1,s1;
  cin>> h1>> m1>> s1;
  this->s=s1%60;
  this->m=(m1+(s1/60))%60;
  this->h=(h1+((m1+(s1/60))/60))%24;
}
void Time::display(){
  cout<<setfill('0')<<setw(2)<<this->h<<":";
  cout<<setfill('0')<<setw(2)<<this->m<<":";
  cout<<setfill('0')<<setw(2)<<this->s<<endl;
}
Time Time::subtract(Time T1){
  Time T3;
  T3.s=(this->s-T1.s+60)%60;
  T3.m=((this->m-T1.m+60)-((T3.s-(this->s-T1.s))/60))%60;
  T3.h=(((((this->h*60*60)+(this->m*60)+this->s)-((T1.h*60*60)+(T1.m*60)+T1.s))/(3600))+24)%24;
  return T3;
}