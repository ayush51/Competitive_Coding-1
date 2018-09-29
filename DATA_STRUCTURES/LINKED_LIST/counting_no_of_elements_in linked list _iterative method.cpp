#include<iostream>

#include<stdlib.h>
using namespace std;

// link list node
struct Node {
  int data;
struct  Node* next;
};

/* give the refrence pointer to a pointer to head
and push the new node at the front */
void push (struct Node** head_ref , int new_data){
  // allocate node

  struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));

  // put data in new_node
  new_node->data=new_data;

  // link the old list
  new_node->next= (*head_ref);

  (*head_ref)= new_node;

}

int get_count(struct Node* head){
  int count=0;
  struct Node* current=head; //initialize current
  while(head!=NULL){
    count++;
    current =current ->next;

  }
  return count;
}

int main(){
 struct Node* head= NULL;
 /* Use push() to construct below list
    8->9->2->6->5->3->1  */

    push(&head, 1);
    push(&head, 3);
    push(&head, 5);
    push(&head, 6);
    push(&head, 2);
    push(&head, 9);
    push(&head, 8);
    get_count(head);
  return 0;

}
