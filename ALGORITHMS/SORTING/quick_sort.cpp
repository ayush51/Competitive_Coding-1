#include<iostream>
using namespace std;

void swap(int *xp,int *yp){
  int temp=*xp;
  *xp=*yp;
  *yp=temp;

}

void print(int arr,n){
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

/*This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(int arr[],int low ,int high){
  int pivot=arr[high];
}
