#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

#include "stack.hpp"

auto
main(void) -> int {
    stack11::stack first_stack {};
    cout<<first_stack.size()<<endl;
    first_stack.push(1);
    first_stack.push(2);
    cout<<first_stack.size()<<endl;
    cout<<first_stack.peek()<<endl;
    cout<<first_stack.pop()<<endl;
    cout<<first_stack.size()<<endl;
    
    stack11::stack second_stack {};
    second_stack.push(1);
    second_stack.push(2);
    second_stack.push(3);
    cout<<"operation peek: "<<second_stack.peek()<<endl;
    cout<<"operation pop: "<<second_stack.pop()<<endl;
    cout<<"operation pop: "<<second_stack.pop()<<endl;
    cout<<"operation pop: "<<second_stack.pop()<<endl;
    cout<<"operation size: "<<second_stack.size()<<endl;
    
    return EXIT_SUCCESS;
}