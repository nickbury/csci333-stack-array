#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  capacity = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  if(top==(capacity-1)){    
  // create new stack twice as big
    int c = capacity*2;
    int* s = new int[c];
  // copy all elements to new stack
      for(int i=0; i<capacity; ++i) {
        s[i]=theStack[i];
      }
  // push value onto new stack
    s[top] = value;
    top++;
  // delete old stack
    delete theStack;
  // point old stack pointer to new stack
    capacity = c;
    theStack = s;
  } else {
  theStack[top] = value;
  top++;
  }
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
