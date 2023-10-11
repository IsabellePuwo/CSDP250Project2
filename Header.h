// Isabelle N Puwo 
//
//
//
//  Created by Isabelle Puwo on 10/10/23.
//

#ifndef Header_h
#define Header_h
class CircularDoublyLinkedList {
private:
    struct Node {
        int data;
      struct  Node* next;
       struct  Node* prev;
        Node(int val) : data(val), next(nullptr), prev(nullptr) {}
    };
    Node* head;
public:
    CircularDoublyLinkedList();
    ~CircularDoublyLinkedList();
    void append(int value);
    void performAssignments();
    void printList()const;
    void clear();

};


#endif /* Header_h */
