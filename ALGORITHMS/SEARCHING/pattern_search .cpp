#include<iostream>
#nclude<string>
using namespace std ;

void search(char *pat, char *txt){
int M =strlen(pat);
int N =strlen(txt);

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

// main function in executing this function

int main (){
  int N,M;
  char pat[M],txt[N];

  cout<<"enter any text u want\n";
  for (int i=0;i<N;i++){
    cin>> txt[N];
  }

  cout<<"enter patern to be searched \n";
  for (int i=0;i<M;i++){
    cin>> pat[M];
  }

  search(pat,txt);
  return 0;

}
