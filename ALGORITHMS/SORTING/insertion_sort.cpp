#include <iostream>
using namespace std ;

//how to display array size of n
void print_array(int arr[], int n){
  int i;
  for (int i=0;i<n ; i++){
    cout<< arr[i]<<" ";

  }
  cout<< endl;

}


// now we'll write insertion sort
void insertion_sort(int arr[],int n ){
  int i,j;
  for (int i =1; i<n:i++){
    int key =arr[i];
    j= i-1;
    // insertion sort main mechanism
    while (j>=0 && arr[j]>arr[j+1]){
      arr[j+1]=arr[j];
      j=j-1;

    }
    arr[j+1]=key;
  }
}

// main function to print the insertion sort
// to whether our code is working fine
int main (){
  int arr[]= {12, 11, 13, 5, 6,33, 45,3,1,21,786};
  int n =sizeof(arr)/sizeof(arr[0]);

  insertion_sort(arr,n);
  print_array(arr,n);

  return 0;  
}
