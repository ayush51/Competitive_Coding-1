
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
