    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     int top=-1; // globally define the null stack
     //making an ascending stack----

    //pushing into stack
    void push(int stack[],int i,int n){

        if (top==n-1){
            cout<<"stack is already full"<<endl;

        }
        else {
            top++;
            stack[top]=i;
        }

    }


    /*void show(int stack[],int n){
    for (int i=n-1;i>=0;i--){
            cout<<endl;
        cout<<stack[i]<<endl;
    }
    }*/
   // to show the sum of remaining values
    int  sum(int stack[],int n){
       int result=0;
   for (int i=n-1;i>=0;i--){

    result+=stack[i];
    }
    return  result ; }

    void optimize(int stack[],int n,int top){
         for (int k=n-1;k>top;k--){
                if (stack[k]!=0){
                    stack[k]=0;
                    
                }
            }


    }


   int main (){
   int n;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++){
    cin>>arr[i];
   }
   int k=sizeof(arr)/sizeof(arr[0]);
   //first sort the array in an ascending array
   sort(arr,arr+k);
   int stack[n];
   //making an ascending stack
   for (int  i=n-1;i>=0;i--){
    push(stack,arr[i],n);

   }


// whole mechanism of killing people in circle
// and optimzing the values in the stack through this below code
   for (int i=0;i<n-1;i++){

    if (stack[top-1]>stack[top]){
        stack[top]=0;
        top--;



    }

    else if (stack[top-1]==stack[top]){
           optimize(stack,n,top);
           top--;

    }
   }

   /*To view the stack we can use the below lines
   show (stack,n);
   cout<< endl;
*/

   //calculating the minimum answer to the problem
   cout<<sum(stack,n);
   return 0;

   }

