#include<iostream>
#include<cstdio>
using namespace std ;

void enqueue(char queue[],char element , int& rear,int arraysize){
  if (rear==arraysize){
    cout<<"overflow"<<endl;

  }
  else{
    queue[rear]=element; // add element
    rear++;
  }
}

void dequeue(char queue[],int &front,int rear){
  if (front==rear){
    cout<<"underflow"<<endl; //queue is empty

  }

  else {
    queue[front]=0;// deleting an element from the front
    front++;
  }
}

char Front (char queue[],int front ){
  return queue[front];

}

// program for dequeue and enqueue of a string front character n times  of the string
int main(){
  char queue[20]={'n','e','h','a'};
  int front =0;
  int rear=4;
  int arraysize=20;
  int N;// no of steps a user want to input
  cin>>N;

  char ch;
  for (int i=0;i<N;++i){
    ch=Front(queue,front );
    enqueue(queue,ch,rear,arraysize);
    dequeue(queue,front,rear);

  }
  for (int i=front;i<rear;++i){
    cout<<queue[i];
  }
  cout<<endl;
  return 0;
  

}
