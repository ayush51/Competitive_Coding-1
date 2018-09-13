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
  int i=low-1;
  for (int j=low;j<high-1;j++){
    if (arr[j]<=pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return(i+1);
}

// main function to implement quicksort
// it will work recursively first on left side of our pivot
// and then on right side of our pivot
void quick_sort(int arr[],int low,int high){
  if (low<high){
    //pi is the partitioning index ,pivot  is now at the right place
    int pi= partition(arr,low,high);
    // sorting the left portion and right portion aout the pivot point
    quick_sort(arr,low,pi-1);
    quick_sort(arr,pi+1,high);

  }
}
// main function to see whether our code is woking properly or not
int main(){
  int arr[]={22,1,3,45,12,13,67,78,99,100};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"ARRAY BEFORE SORTING : ";
print(arr,n);
//applying quicksort
    quick_sort(arr,0,n-1);
    cout<<"ARRAY AFTER QUICKSORT :";
    print(arr,n);
    return 0;
}
