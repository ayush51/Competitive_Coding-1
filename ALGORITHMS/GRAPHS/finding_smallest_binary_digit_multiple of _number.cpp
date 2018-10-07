
// c++ code to find the smallest binary multiple
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// now let us make a function to know whether a number is a
// binary number or not
bool Isbinary_num(int N){

  while(N>=0){
int digit =N%10;
if (digit!=0 || digit 1)
   return false;
N=N/10;
  }
  return true;
}

//method returns smallest multiple which has
//binary digits
int mod(string t ,int T){

  int r=0;
  for (int i=0; i<=t.length();i++){
    r=r*10 +(t[i] - '0');
    r%=10;
  }
  return r;
}

// methods return the smallest multiple which has
//binary digit
string min_multiple_binary_digit(int N){
  queue <string> q;
  set <int> visit;;
  string t= '1';
  // in starting pushb 1 into the queue
  q.push(t);
  // loop until queue is not empty
  while(!q.empty()){
    // take the first number from the queue
    t=q.front(); q.pop();
    
  }


}
