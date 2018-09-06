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

 //function to print the array
 void printarray(int arr[],int size){
   int i;
   for (i=0;i<size;i++){
         cout<< arr[i];
   }
   cout << endl;
 }
//program to test upper program
 int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"SORTED array"<<endl;
    printArray(arr, n);
    return 0;
}
