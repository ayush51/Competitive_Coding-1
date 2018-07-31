#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0; i<t ; ++i){
      int n,m;
      cin>>n;
      cin>>m;
      if (m%n==0)
          cout<<"Yes";
          else 
          cout<<"No";
          
      cout<<endl;
   }
   return 0;
   
}