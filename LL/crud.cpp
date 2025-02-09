#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Node{
  
  public:
  int data;
  Node* next;

  Node (int data1, Node* next1 = nullptr){
    data = data1;
    next = next1;
  }
};

Node *head;

void traverse(){
  Node *ptr = head;
  while(ptr){
    cout << ptr->data;
    ptr = ptr->next;
  }
}

void insertAtbeginning(){
  Node *p = new Node(5,head);
  head = p;
  cout << "\n";
  //return p;
  traverse();
  cout << "\n";
}

void insertAtEnd(){
  Node *p = new Node(15,nullptr);
  Node *ptr = head;
  while(ptr->next != nullptr){
    ptr = ptr->next;
  }

  ptr->next = p;
  cout << "\n";
  //return p;
  traverse();
  cout << "\n";
}

int main(){
  Node *p = new Node(10);
  cout << p->next;
  head = p;
  insertAtbeginning();
  insertAtEnd();
  cout << head->data;

  return 0;
}
