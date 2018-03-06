#include<iostream>
using namespace std;
pair <string,string> stringSeparation(string str){
  int len=0,count=0,i;
  string s1,s2;
  pair <string,string> p;
  while(str[len]!='\0'){
    len++;
  }
  while(str[count]!=' '){
    count++;
  }
  for(i=0;i<count;i++){
    s1+=str[i];
  }
  for(i=count+1;i<len;i++){
    s2+=str[i];
  }
  p= make_pair(s1, s2);
  return p;
}
int main(){
  string str;
  getline(cin,str);
  pair <string,string> getPair = stringSeparation(str);
  cout<<getPair.first;
  cout<<endl;
  cout<<getPair.second;
}
