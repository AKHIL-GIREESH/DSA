#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Node{
  public:
  int data;
  Node *next;
    
  Node(int riyalData,Node *nextNode = nullptr){
    data = riyalData;
    next = nextNode;
  }
};

Node *head;

void createLL(vector<int> v){
  Node *temp = new Node(v[0]);
  head = temp;

  for(int i=1;i<v.size();i++){
    Node *p = new Node(v[i]);
    temp->next = p;
    temp = p;
  }
}

void reverseLL(){
  Node *prev = nullptr,*curr = head, *nextNode = head->next;

  while(nextNode != NULL){
    //cout << curr << "\t";
    curr->next = prev;
    prev = curr;
    curr = nextNode;
    nextNode = nextNode->next;
  }

  curr->next = prev;
  head = curr;
}

int main(){
  vector<int> v = {1,2,3,4,5};
  createLL(v);

  cout << head->data << "\n";

  reverseLL();
  cout << head->data;
}
