#include<iostream>

struct Node {
  int data;
  Node* next;
};

class Queue {
  Node* top;
  Node* rear;
  public: 
    Queue() {top = nullptr; rear = nullptr;}

    void push(int value) {
      Node* newNode = new Node();
      newNode->data = value;
      newNode->next = nullptr;
      if(top == nullptr) {
        top = newNode;
      } else {
        rear->next = newNode;
      }
      rear = newNode;
    }

    int pop() {
      if(top == nullptr) {
        std::cout << "Queue is empty" << std::endl;
        return -1;
      }
      int popped_value = top->data;
      Node* ptr = top;
      if(top == rear) {
        top = nullptr;
        rear = nullptr;
      } else {
        top = top->next;
      }
      delete ptr;
      return popped_value;
    }

    void iterate() {
      Node* ptr = top;
      while (!(ptr == nullptr)) {
        std::cout << ptr->data << std::endl;
        ptr = ptr->next;
      }
    }
};

int main() {
  Queue q1;
  q1.push(2);
  q1.push(3);
  q1.push(4);
  q1.push(5);
  q1.iterate();
  return 0;
}