#include<iostream>
using namespace std ;



int step(int n){
if(n==0){
return 1;
}
int ans;

if (n>=1){
ans=step(n-1)+step(n-2)+step(n-3);
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
