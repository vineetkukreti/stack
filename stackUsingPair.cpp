#include <iostream>
using namespace std;
#include "stack.cpp"
int main()
{
    stack <string> s(5);
    s.push("dsf");
    s.push("fd");
    s.push("sd");

   s.print();
   
        return 0;
}


