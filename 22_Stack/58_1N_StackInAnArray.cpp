/*Design a data structure to implement 'N' stacks using a single array of size 'S'. It shoukd support the following operations: 
1) push(X, M) :- Pushes an element X into the Mth stack. Return if the element is pushed into the stack, otherwise false.
2) pop(M) :- Pops the top element from Mth stack. Return -1 if the stack is empty, otherwise , return the  popped element
APPROACH :- We need two addtional thing   1) top[] => to represent index of element
                                          2) next[] => to represent     1) point to next element after stack top
                                                                        2) point to next free space
            size of top[] = no of stack & size of next[] = size of original array     */

#include<iostream>
#include<stack>
using namespace std;


int main(){

}