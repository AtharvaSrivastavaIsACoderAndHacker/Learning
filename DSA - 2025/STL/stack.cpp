#include<iostream>
#include<stack>

using namespace std;

template<typename T>
void printStack(stack<T> s) { // Prints and removes elements from a copy of the stack (LIFO order) until empty --> call by value so original stack is unaffected !
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}


int main(int argc, char const *argv[]){
    
    // STACK follows LIFO or FILO !
    // Imagine a stack of boxes, the box at the bottom which was the first to be placed, will get out at last (FILO) when others are removed from atop of it. The last one will be put out first (LIFO) !
    // stack<int> s = {1,2,3,4,5}; // ERROR - std::stack is an adapter, not a sequence container — it lacks initializer list support.
    // 1. STACK Data Structure:
    //     - Follows LIFO (Last In, First Out).
    //     - Basic Operations: push(), pop(), peek(), isEmpty().
    //     - Can be implemented using arrays or linked lists.
    //     - Applications: Function calls, undo/redo, expression evaluation, parsing, etc.
    // 2. Random Access - Not supported by linked lists, STACKS, queues, or trees due to non-contiguous memory.
   
    
    stack<int> s;
    s.push(1); // emplace is also available
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printStack(s);
    
    cout<<s.top()<<endl;
    
    s.pop(); // top element popped --> 4,3,2,1 !
    printStack(s);

    cout<<s.empty()<<" False, the stack isn't empty !"<<endl;
    s.pop();s.pop();s.pop();s.pop();
    cout<<s.empty()<<" True, the stack is empty !"<<endl;
    s.pop(); // stack underflow
    

    return 0;
}