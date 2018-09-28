#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void activity_selection (int s[],int f[],n){
int i,j;

cout<<"following activities always get selected \n";

i=0;
cout<<"i"<<endl;// first activity always get selected

for (int j=1;j<=n;j++){

if (s[j]>=f[i]){
cout<<" "<< j;
i=j;
}
}
}

// driver program to implement
int main(){

  int i,j;
  int s[]= {1, 3, 0, 5, 8, 5};
  int f[]={2, 4, 6, 7, 9, 9}; 
  int n=sizeof(s)/sizeof(s[0]);

  activity_selection(s,f,n);
  return 0;
}
