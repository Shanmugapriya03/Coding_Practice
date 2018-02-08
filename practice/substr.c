#include<stdio.h>
#include<string.h>
int LeftToRight(int index,char *str,char sub){
  if(str[index+1]==sub){
    index=index+1;
  }
  return index;
}
int TopToBottom(int index,char *str,char sub){
  if(str[index+5]==sub){
    index=index+5;
  }
  return index;
}
void main(){
  char s[]="WELCOMETOZOHOCORPORATION";
  char substr[10];
  int count=0,i,j,subcount,start,end,index,index1,index2,found=0,f1,f2;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if(count<strlen(s)){
          printf("%c ",s[count]);
          count++;
      }
    }printf("\n");
  }
  printf("enter the sub string to be found\n");
  scanf("%s",substr);
  subcount=strlen(substr);
  for(i=0;i<count;i++){
    if(s[i]==substr[0]){
      printf("Start index <%d,%d>",i/5,i%5);
      start = i/5;
      end = i%5;
      index = i;
      index1 = index;
      index2 = index;
      found = 1;
      break;
    }
  }
  if(found==1){
    f1=found,f2=found;
//  printf("%d",subcount);
    for(int i=1;i<=subcount;i++){
        //  printf("step %d\n",i);
        if(s[index1+1]==substr[i]){
            index1 =LeftToRight(index1,s,substr[i]);
            f1++;
             //printf("\nval 1 ->%d\n",index1);
        }else if(s[index2+5]==substr[i]){
            index2 =TopToBottom(index2,s,substr[i]);
            f2++;
             //printf("\nval 2 ->%d\n",index2);
          }
        }
  }else{
    printf("enter valid substring");
  }

  if(found){
    if(f1>f2){
      printf("\nEnd Index <%d,%d>",index1/5,index1%5);
    }else{
      printf("\nEnd Index <%d,%d>",index2/5,index2%5);
    }
  }
}
