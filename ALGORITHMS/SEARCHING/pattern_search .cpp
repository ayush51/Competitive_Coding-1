#include<iostream>
#include<string>
using namespace std ;

void search(string pat,  string txt){
int M =pat.length();
int N =txt.length();

//a loop will slide pat[] one by one
for (int i=0;i<=N-M;i++){

int j;
  for( j=0;j<M;j++){
    if (txt[i+j]!=pat[j])
      break;
  }
   if (j==M){
  cout<< "pattern found at index : " << i+1;
  cout<< endl;}

}

}
int main (){
  int N,M;
  string  pat,txt;
  cout<<"enter any text u want\n";
  getline(cin,txt);
  N=txt.length();
  cout<<"enter pattern to be searched \n";
  getline(cin,pat);
   M=pat.length();

  search(pat,txt);
  return 0;

}
