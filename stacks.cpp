#include<iostream>
using namespace std;
#include"stack1.cpp"
int main()
{
    Stack1 s(5) ;
    s.push(12);
    s.push(12);
    s.push(12);
    s.push(137);
    s.push(34);
    s.push(76);
    s.printstack();
}