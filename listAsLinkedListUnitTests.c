/** 
 * ===========================================================
 * Name: Lucas Briggs
 * Section: T4 Crowl
 * Project: Linked List ADT Lab 10
 * Purpose: List ADT as linked list
 * ===========================================================
 */

#include "listAsLinkedList.h"
#include <stdio.h>

int main() {

    LinkedList* myList = createLinkedList();

    appendElementLinkedList(myList, 1);
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    for (int i = 0; i < 10; ++i) {
        appendElementLinkedList(myList, (i * 1278743) % 100);
    }
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    for (int i = 0; i < 10; ++i) {
        printf("Element in position %d is %lf\n", i, getElementLinkedList(myList, i));
    }
    deleteElementLinkedList(myList, 5);
    printf("Deleted element at position 5\n");
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    deleteElementLinkedList(myList, 9);
    printf("Deleted element at position 9\n");
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    deleteElementLinkedList(myList, 0);
    printf("Deleted element at position 0\n");
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    insertElementLinkedList(myList, 4, 27);
    printf("Inserted element at position 4\n");
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    insertElementLinkedList(myList, 0, 27);
    printf("Inserted element at position 0\n");
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    insertElementLinkedList(myList, 10, 27);
    printf("Inserted element at position 10\n");
    printLinkedList(myList);
    printf("Length %d\n", lengthOfLinkedList(myList));
    changeElementLinkedList(myList, 0, 2727);
    printf("Changed element at position 0\n");
    printLinkedList(myList);
    changeElementLinkedList(myList, 10, 2727);
    printf("Changed element at position 10\n");
    printLinkedList(myList);
    printf("Index of element 27 is %d\n", findElementLinkedList(myList, 27));
    printf("Index of element 43 is %d\n", findElementLinkedList(myList, 43));
    printf("Index of element 1 is %d\n", findElementLinkedList(myList, 1));
    printf("Index of element 2727 is %d\n", findElementLinkedList(myList, 2727));
    
    // Insert an appropriate test harness for your linked list implementation.  
    // Your tests will test each function when the list is empty, has a single element, and will also
    // test modifications to the head, tail, and middle elements.
    
    // You are not being judged/graded on the quality of your lab
    // However, it is in your best interest to make a high quality ADT for future assignments . . . hint hint


    return 0;
}