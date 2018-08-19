#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
   for (int i=0;i<t;i++){
       string uk;
       cin>>uk;
       int len=uk.length();


       int a=0;

       int count=1;

       for (int j=0;j<len;j++){
           if( (uk[j]=='a')||(uk[j]=='e')||(uk[j]=='i')||(uk[j]=='o')||(uk[j]=='u')
           ||(uk[j]=='A')||(uk[j]=='E')||(uk[j]=='I')||(uk[j]=='O')||(uk[j]=='U')
             )
              {

               a=a+count;
           }

       }
       cout<<a;
       cout<<endl;

   }
    return 0;
   }