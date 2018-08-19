#include <iostream>
#include<math.h>
#include <string>
  #include <bits/stdc++.h>
using namespace std;


int frequency(int arr[],int n,int uk){
    int salo=0;
    for (int t=0;t<n;t++){

        if (arr[t]==uk)
            salo++;
    }
    return salo;
}

int main(){
    int testcase;
    cin>> testcase;
    for (int p=0;p<testcase;p++){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+k);


int uk=arr[0];
    int num= frequency(arr,n,uk);
    if (num%2==0){
        cout<<"Unlucky"<<endl;
    }
    else{
        cout<<"Lucky"<<endl;
    }
    
    }
    return 0;
}

	
