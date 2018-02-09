#include<iostream>
using namespace std;
struct Date{
  int d,m,y;
};
const int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int leapYearCount(Date d){
  int years = d.y;

  if(d.m<=2)
    years--;

  return (years/4) - (years/100) + (years/400);
}
int getDifference(Date d1,Date d2){
  int n1=0,n2=0;

  n1=d1.y*365+d1.d;
  for(int i=0;i<d1.m;i++){
    n1+=monthDays[i];
  }
  n1+=leapYearCount(d1);

  n2=d2.y*365+d2.d;
  for(int i=0;i<d2.m;i++){
    n2+=monthDays[i];
  }
  n2+=leapYearCount(d2);

  return n2-n1;
}
int main(){
  Date d1= {10, 2, 2014};
  Date d2= {10, 3, 2015};

  cout << "Difference between two dates is " << getDifference(d1, d2)<<endl;

  return 0;
}
