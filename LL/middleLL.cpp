#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int data1, Node *nextNode = nullptr){
    data = data1;
    next = nextNode;
  }
};

Node *head;

void createLL(vector<int> a){
  Node *temp = new Node(a[0]);
  head = temp;
  for(int i=1;i<a.size();i++){
    Node *p = new Node(a[i]);
    temp->next = p;
    temp = temp->next;
  }

  //return head;
}

Node *findMiddle(Node *ptr){
  Node *tortoise = ptr,*hire = ptr;
  while(hire->next != NULL && hire != NULL){
    tortoise = tortoise->next;
    hire = hire->next->next;

    //cout << hire->data << "\n";
  }

  return tortoise;
}

// 1,2,3,4,5,6

int main(){
  vector<int> v={1,2,3,4,5};
  createLL(v);
  Node *p = findMiddle(head);
  cout << p->data;
  return 0;
}
