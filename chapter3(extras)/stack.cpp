#include<iostream>
#define MAX 1000

class Stack {
  private:
    int top;
    Stack() {top = -1;}
  public:
    int arr[MAX];
    bool push(int value) {
      if(top >= MAX-1) {
        std::cout << "Stack Overflow" << std::endl;
        return false;
      }
      arr[++top] = value;
      return true;
    }

    int pop() {
      if(top < 0) {
        std::cout << "Stack is empty" << std::endl;
        return 0;
      }
      return arr[--top];
    }

    int peek() {
      if(top < 0) {
        std::cout << "Stack is empty" << std::endl;
        return 0;
      }
      return arr[top];
    }

    bool isEmpty() {
      return (top < 0);
    }
};

int main() {
  return 0;
}