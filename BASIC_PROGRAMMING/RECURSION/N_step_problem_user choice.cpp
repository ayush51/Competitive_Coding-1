#include<iostream>
using namespace std ;



int step(int n,int i ){
if(n==0){
return 1;
}

int ans=0;
if (n>=1){
for (int j=1;j<=n && j<=i; j++){
ans+=step(n-j,i);
                              }
}
return ans;
}

int main(){
int n;
// no of.steps
cin>>n;
int i;
// no of steps user wnat to choose
cin>>i;
cout<<"number of total solution to this problem using i starirs is : "<<" " ;
cout << step(n,i);
return 0;
}
