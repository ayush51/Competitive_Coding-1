#include<iostream>
using namespace std;

 void swap(int *xp,int *yp){
 int temp= *xp;
 *xp=*yp;
 *yp=temp;

 }

 //A function to implement bubble sort
 void bubblesort(int arr[],int n)
 {
   int i,j;
   for (i=0;i<n-1;i++){
     // last i elements are already in place
     for (j=0;j<n-i-1;j++){
       if (arr[j]>arr[j+1])
       swap(&arr[j],&arr[j+1]);

     }
   }
 }

 //
