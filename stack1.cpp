#include<iostream>
using namespace std;
class Stack1
{
 int *data;
 int nextIndex;
 int size;
 public:
 // create Stack
 Stack1(int totalsize)
 {
    data = new int[totalsize];
    size = totalsize;
    nextIndex = 0;
 }

 // get size of stack
 int getSize()
{
    return nextIndex;
}

// check whether stack is empty
bool isEmpty()
{
    if(nextIndex==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// insert Element
void push(int element)
{
    if(size==nextIndex)
    {
        cout<<"stack is full "<<endl;
        return;
    }
    data[nextIndex] = element;
    nextIndex++;
}
// delete
int pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    int i = data[nextIndex];
    nextIndex--;
    return i;
}
int top()
{
    if (isEmpty())
    {
           cout<<"Stack is empty"<<endl;
        return -1;
    }
    
  return data[nextIndex-1];
}

void printstack()
{
    for(int i = nextIndex-1;i>=0;i--)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

};