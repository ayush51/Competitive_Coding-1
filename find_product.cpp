#include<iostream>

#include<math.h>


using namespace std;


int main()
{
int n;

long int x;

cin>>n;

int arr[n],m=pow(10,9)+7;

x=1;

for (int i=0;i<n;i++){

 
   cin>> arr[i];

if(arr[i]<0)
{
arr[i]=-arr[i];
}

    x=(x*arr[i])%m;

    }
    cout<<x;

  return 0;

}

