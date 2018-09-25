#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

class Node{

public:
  Node* next;
  int data;
};

class linkedlist
{
public:
  int length;
  Node* head;

  linkedlist();
  ~linkedlist();
  void add(int data);
  void print();

};

// initialization
linkedlist::linkedlist(){
  this->length=0;
  this->head=NULL;
}

linkedlist::~linkedlist(){
  std::cout<<"LIST DELETED ";
}

void linkedlist::add(int data){
  Node* node = new Node();
node->data = data;
node->next=this->head;
this->head=node;
this->length++;

}

void linkedlist::print(){
  Node* head=this->head;
  int i=1;
  while(head){
    cout<<i<< " : "<<head->data << endl;
    head=head->next;
    i++;
  }
}

int main(int argc,char const *argv[]){
  srand(time(0));
  linkedlist* list =new linkedlist();
  for (int i=0;i<100;i++){
    list->add(rand()%100+1);

  }

  list->print();
  cout<<"list length :"<< list->length<<endl;
  delete list;
  return 0;
}
