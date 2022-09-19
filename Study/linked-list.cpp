/*
- Linked list is a sequence of data structure, which are connected together via links.
- Each node store the data and the address of the next node. 
- First node: Head
- Last node:  Null 

Types of Linked List
- Simple Linked List: Item navigation is foward only
- Doubly linked list: Items can be navigated forward and backward
- Circular linked list: Last item contains link of the first element

Basic operations
- Insertion: Adds an element at the beggining of the list 
- Deletion: Deletes an element at the beggining of the list
- Display: Display the complete list
- Search: Searchs an element using the given key
- Delete: Deletes an element using the given key
*/

// Basic code

#include <bits/stdc++.h>
#include <iostream>

class Node {
    public:
    int value;
    Node* next;
};

int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    //Alocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three =  new Node();

    //Assign values
    one -> value = 1;
    two -> value = 2;
    three -> value =3;

    //Connect nodes
    one->next=two;
    two->next=three;
    three->next=NULL;
    //Define the header
    head = one;

    //Print the linked list
    while(head != NULL){
        std::cout << head ->value << std::endl;
        head = head->next; 
    }
    system("PAUSE");
    return 0;
}

// In other languages
// Linked list implementation in C

// #include <stdio.h>
// #include <stdlib.h>

// // Creating a node
// struct node {
//   int value;
//   struct node *next;
// };

// // print the linked list value
// void printLinkedlist(struct node *p) {
//   while (p != NULL) {
//     printf("%d ", p->value);
//     p = p->next;
//   }
// }

// int main() {
//   // Initialize nodes
//   struct node *head;
//   struct node *one = NULL;
//   struct node *two = NULL;
//   struct node *three = NULL;

//   // Allocate memory
//   one = malloc(sizeof(struct node));
//   two = malloc(sizeof(struct node));
//   three = malloc(sizeof(struct node));

//   // Assign value values
//   one->value = 1;
//   two->value = 2;
//   three->value = 3;

//   // Connect nodes
//   one->next = two;
//   two->next = three;
//   three->next = NULL;

//   // printing node-value
//   head = one;
//   printLinkedlist(head);
// }

// # Linked list implementation in Python


// class Node:
//     # Creating a node
//     def __init__(self, item):
//         self.item = item
//         self.next = None


// class LinkedList:

//     def __init__(self):
//         self.head = None


// if __name__ == '__main__':

//     linked_list = LinkedList()

//     # Assign item values
//     linked_list.head = Node(1)
//     second = Node(2)
//     third = Node(3)

//     # Connect nodes
//     linked_list.head.next = second
//     second.next = third

//     # Print the linked list item
//     while linked_list.head != None:
//         print(linked_list.head.item, end=" ")
//         linked_list.head = linked_list.head.next

