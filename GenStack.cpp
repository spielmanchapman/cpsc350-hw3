#include "GenStack.h"

//default constructor
GenStack::GenStack(){
  myArray = new char[128];
  mSize = 128;
  top = -1;
}

//Overload Constructor
GenStack::GenStack(int maxSize){
  myArray = new char[maxSize];
  mSize = maxSize;
  top = -1;
}

//Deconstructor
GenStack::~GenStack(){
  delete myArray;
}

void GenStack::push(char data){
//check if stack is full
  if(isFull()){
    cout << "ERROR: Stack is full" << endl;
  }
  myArray[++top] = data;
}

char GenStack::pop(){
  //check if empty before proceeding
  if(isEmpty()){
    cout << "ERROR: Stack is empty" << endl;
    return '\0';
  }
  return myArray[top--];
}

char GenStack::peek(){
  return myArray[top];
}

bool GenStack::isFull(){
  return (top == mSize - 1);
}

bool GenStack::isEmpty(){
  return (top == -1);
}

int GenStack::getSize(){
  return (top + 1);
}