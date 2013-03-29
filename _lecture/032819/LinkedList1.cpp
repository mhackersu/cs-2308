#include <iostream>
#include <iomanip>
using namespace std;

struct ListNode     // the node data type
{
    double value;    // data
    ListNode *next;  // ptr to next node
};

int main() {
    //task 1: create an empty list (named head)
    ListNode *head = NULL;
    
    //task 2: create an anonymous new node (make newNode point to it)
    ListNode *newNode = new ListNode;
    newNode->value = 10;
    newNode->next = NULL;
    
    //task 3: add the new node to the front of the list (2 stmts)
    //for an empty list, only one statement
    head = newNode;
}
