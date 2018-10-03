#include<iostream>
using namespace std ;



int step(int n,int i ){
if(n==0){
return 1;
}

int ans=0;
if (n>=1 && i>=1){
  i--;
ans=step(n-i);
}
return ans;

}

int main(){

int n;
// no of.steps
cin>>n;

cout<<step(n);
return 0;
}
