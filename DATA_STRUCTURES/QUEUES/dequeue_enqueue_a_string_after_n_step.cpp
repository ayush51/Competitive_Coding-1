#include<iostream>
#include<cstdio>
using namespace std ;

void enqueue(char que[],char element , int& rear,int arraysize){
  if (rear==arraysize){
    cout<<"overflow"<<endl;

  }
  else{
    que[rear]=element; // add element
    rear++;
  }
}

void dequeue(char que[],int &frnt,int rear){
  if (frnt==rear){
    cout<<"underflow"<<endl; //queue is empty

  }

  else {
    que[frnt]=0;// deleting an element from the front
    frnt++;
  }
}

char Front (char que[],int frnt ){
  return que[frnt];

}

// program for dequeue and enqueue of a string front character n times  of the string
int main(){
  char que[]={'n','e','h','a'};
  int arraysize=20;
  int frnt =0;
  int rear=4;
  int N;// no of steps a user want to input
  cin>>N;

  char ch;
  for (int i=0;i<N;++i){
    ch=Front(que,frnt );
    enqueue(que,ch,rear,arraysize);
    dequeue(que,frnt,rear);

  }
  for (int i=frnt;i<rear;++i){
    cout<<que[i];
  }
  cout<<endl;
  return 0;


}
