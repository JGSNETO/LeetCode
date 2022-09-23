/*
Stacks are a type of container adaptors with LIFO type of working, 
where a new element is added at one end(top) and an element is removed from that end only.
stack uses an encapsulated object of either vector or deque (by default) or list as its 
underlying container, providing a specific set of member functions to access its elements. 

Stack syntax:
template <class type, class container = deque<type>> class stack;
1. type: is the type of element contained in the std::stack. It can be any valid c++ type or even
a user-defined type.
2. container: is the type of underlying container object.

Methods:
1. empty(): Returns wheter the stack is empty
2. size(): Returns the size of the stack
3. top(): Returns a reference to the top most element of the stack
4. push(): Adds the element 'g' at the top of the stack
5. pop(): Deletes the top most element of the stack

*/

#include <iostream>
#include <stack>

int main (){

    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    //Remove 4
    stack.pop();
    //Remove 3
    stack.pop();

    while(!stack.empty()){
        std::cout << stack.top() << " " << std::endl;
        //Remove the top element
        stack.pop();
    }
    system("PAUSE");
    return 0;
}