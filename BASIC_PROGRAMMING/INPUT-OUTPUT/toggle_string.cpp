#include<iostream>

using namespace std;

int main()
{
    int i,k,n,j;
    
cin>>n;

    for(i=2;i<n;i++)
{
        k=0;
   
     for(j=1;j<=n;j++){
 
           if (i%j==0)
            k++;
            

        }

        if(k==2)
     
   cout<<i<<" ";
   
 }
   
 return 0;

}

