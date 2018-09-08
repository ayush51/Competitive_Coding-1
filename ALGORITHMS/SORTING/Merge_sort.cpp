#include <iostream >
using namespace std ;
// merge sort is divide and conquer algo, it divide the input array in two halves
// all itself for two halves and then merges the two sorted halves
// the merge function is used for merging two halves
// the merge(arr, l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r]
// are sorted and merges the two sorted sub-arrays into one

// merge two sub arrays
// first sub array is arr[1.....m]
//second subarray arr[m+1....r]

void merg (int arr[],int l,int m,int r){
  int i,j,k;
  int n1 =m-l+1;
  int n2=r-m;
  // create temp arrays
  int L[n1],R[n2];

  //copy data into this temp arrays
  for (i=0;i<n1;i++)
  L[i]=arr[l+i];
  for (j=0;j<n2;j++)
  R[j]=arr[m+1+j];


  //merge two arrays back to one arr[1......r]
  i=0;// initial index of first subarray
  j=0;// initial of second subarray
  k=l; // initial index of merged subarray

  while (i<n1 && j<n2 ){
    if (L[i]<=R[j]){
      arr[k]=L[i];
      i++;
    }
    else {
      arr[k]=R[j];
      j++;

    }
    k++;

  }



// copy remaining elements of L[]
//if there any

while (i<n1){
    arr[k]=L[i];
    i++;
    k++;

}

while (j<n2){
    arr[k]=R[j];
    j++;
    k++;

}
}

// lis for left index r is for right index of sub -array of arr
//to be sorted

void mergesort(int arr[],int l,int r){
  if (l<r){
    // same as (l+r)/2,but avods overflow
    //large l and h
    int m=l +(r-l)/2;
    //sort first half and second half
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);

    merg(arr,l,m,r);

  }
}


void print_array(int arr[],int n){

  int i;
  for (i=0;i<n;i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
}
int main(){
  int arr[]={12,34,56,3,2,13,1,100,45,77};
  int n=sizeof(arr)/sizeof(arr[0]);
  //before merge sort
  cout<< "BEFORE MERGE SORT :";
  print_array(arr,n);
  // sorting the given array by merge sort method

  mergesort(arr, 0,n-1);
  cout<< "AFTER MERGE SORT :";
  print_array(arr,n);
  return 0;
}
