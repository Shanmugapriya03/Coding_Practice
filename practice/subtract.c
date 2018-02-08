#include<stdio.h>
void main(){
  int a[]={1,2,7,0,5};
  int b[]={9,1,9,9};
  int c[50];
  int m=1,val1=0,val2=0,i,val3,j=0;
  int sizea = sizeof(a)/sizeof(a[0]);
  int sizeb = sizeof(b)/sizeof(b[0]);
  for(i=sizea-1;i>=0;i--){
    val1+=m*a[i];
    m=m*10;
  }
  m=1;
  for(i=sizeb-1;i>=0;i--){
    val2+=m*b[i];
    m=m*10;
  }
  val3=val1-val2;
  int k=0;
  while(val3!=0){
    c[k]=0;
    c[k]=val3%10;
    k++;
    val3=val3/10;
  }
  for(j=k-1;j>=0;j--){
    printf("%d",c[j]);
  }
}
