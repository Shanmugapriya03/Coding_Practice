#include<iostream>
#include<fstream>
#include<map>
using namespace std;
int main(){
  map<string,int> mymap;
  map<string,int>::iterator it;
  string content;
  //to read a file
  ifstream infile;
  //opening a file
  infile.open("file.txt");

   cout << "Reading from the file" << endl;
   //loops until full all words in file are read
   while(infile>>content){

      it=mymap.find(content);
      if(it == mymap.end()){
        mymap.insert(pair<string,int>(content,1));
      }else{
        it->second +=1;
      }
   }
      for(it = mymap.begin(); it != mymap.end(); it++){     // display
        cout<<"string : "<< it->first<<"\tcount : "<<it->second<<endl;
      }
   return 0;
}
