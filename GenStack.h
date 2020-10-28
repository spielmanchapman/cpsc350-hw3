//the header file GenStack.h
#include <iostream>
using namespace std;

class GenStack{
  public:
    GenStack();//default
    GenStack(int maxSize);//overloaded
    ~GenStack();//deconstructor
	
    void push(char data);
    char pop();
    char peek();
    bool isFull();
    bool isEmpty();
    int getSize();

  private:
    char *myArray;
    int top;
    int mSize;
};