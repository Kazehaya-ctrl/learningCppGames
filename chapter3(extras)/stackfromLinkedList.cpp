#include<iostream>

struct Node {
  int data;
  Node* next;
};

class Stack {
  Node* top;

  public:
    Stack() {top = nullptr;}
    void push(int value) {
      Node* newNode = new Node();
      newNode->data = value;
      newNode->next = top;
      top = newNode;
    }

    int pop() {
      if(top == nullptr) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
      }
      int poppedValue = top->data;
      Node* temp = top;
      top = top->next;
      delete temp;
      return poppedValue;
    }

    int peek() {
      if(top == nullptr) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
      }
      return top->data;
    }
};

int main() {
  Stack stack;
  stack.push(4);
  return 0;
}