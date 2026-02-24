#include "LLStack.h"

// Node constructor: initialize new nodes with an input string s
	// s should be stored as the data of the node
	// the nodes are not initially linked to any other node
	// so be sure that the "next" Node is linked to a nullptr
Node::Node(string s) 
{

}

//constructor : initiazlize the head and tail field from LLStack class 
	// the stack should start with no items 
	// the head and tail should both be initialized as null pointers
LLStack::LLStack()
{

}

/*
	define the top() method, which will return the data at the top of the stack
	(remember the "top" of the stack is the newest element)
	If stack is empty, return "";
*/
string LLStack::top()
{
	return "fixthis";
}

/*
	define the size() method, which will return the number of nodes in the stack
*/
int LLStack::size()
{
	return -1;
}

/*
	- Create the new Node and initialize the fields of class Node (data and next)
	- update the head, tail and count accordingly

	Hint: To update head and tail properly, You have to consider two scenarios:
	1. If there is no element in the stack and this is the first one going to the stack
	2. If there is another head in the stack
*/
void LLStack::push(string s)
{

}

/*
	First, Check if the stack is empty or not. If not, update the head,tail and count accordingly.
		*Don't forget to release memory using delete
	Hint: To update head and tail properly, You should consider two different scenarios:
	1. If LLStack has more than one element
	2. If LLStack has exactly one element
*/
void LLStack::pop()
{

}

/*
    define the removeAll() method, which removes all nodes 
    that have data equal to the given target string.
    - Traverse through the linked list
    - For each matching node, unlink it and delete it
    - Update head, tail, and count accordingly
    - Return how many nodes were removed

	Hints:
    ----------------------------------------
    - Always check if the list becomes empty after deletions (head == nullptr).
      If so, make sure tail is also set to nullptr.
    - Use a counter variable (such as 'removed') to track how many were deleted.
    - Be careful not to lose your place when deleting nodes:
        * Save curr->next in a temporary pointer before deleting curr.
    - Handle edge cases:
        * Stack is empty (no nodes to remove)
        * Target not found (return 0)
        * All nodes match the target (list becomes empty)
*/
int LLStack::removeAll(const string& target) 
{
	return -1;
}

