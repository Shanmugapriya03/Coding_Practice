#include<iostream>
#include<vector>
using namespace std;
bool palindrome(string word){
  string dummy="";
  int i;
  if(word.size()==1){
    dummy+=word;
  }
  for(i=word.size()-1;i>=0;i--){
    dummy+=word[i];
  }
  if(dummy == word){
      return true;
  }
  return false;
}
int main(){
  string str;
  int len,counter=0;
  vector<string>words(10);
  getline(cin,str);
  cout<<str<<endl;
  len = str.length();
  for(int i=0;i<len;i++){
    if(str[i]==' '){
        counter++;
    }else{
        words[counter] +=str[i];
    }
  }
  for(int i=0;i<=counter;i++){
    //cout<<words[i]<<endl;
    if(palindrome(words[i])){
      words.erase(words.begin()+i);
    }
  }
  for(int i=0;i<=counter;i++){
    cout<<words[i]<<' ';
  }
  cout<<endl;
  return 0;
}
