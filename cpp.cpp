//
//  
//  sample
//
//  Created by Isabelle Puwo on 10/10/23.
//

#include <stdio.h>
#include "Header.h"
#include <iomanip>
#include <iostream>
using namespace std;

CircularDoublyLinkedList::CircularDoublyLinkedList() {
    head = nullptr;
}
CircularDoublyLinkedList:: ~CircularDoublyLinkedList(){
    clear();
}

void CircularDoublyLinkedList::append(int value) {
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }else {
        Node* tail = head->prev;
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next =head;
        head->prev = newNode;
    }
    }



void CircularDoublyLinkedList:: clear() {
    Node* current = head;
        if (current != nullptr) {
            Node* temp;
            do {
                temp = current;
                current = current->next;
                delete temp;
            } while (current != head);
        }
}

void CircularDoublyLinkedList::performAssignments() {
    if (head) {
        head->next->next->next = head->prev;
        head->prev->prev->prev = head->next->next->next->prev;
        head->next->next->next->prev = head->prev->prev->prev;
        head->next = head->next->next;
        head->next->prev->next = head->next->next->next;
    }
}


void CircularDoublyLinkedList::printList() const {
    if (head != nullptr) {
        Node* current = head;
        cout <<setw(23)<<left<<"Value of Nodes" << setw(17)<<"1st node" << setw(17) << "2nd node" << setw(17) << "3rd node" << setw(17) << "4th node" << setw(17) << "5th node" << endl;
        cout << setfill('=') << setw(110) << "=" << setfill(' ') << endl;
        cout<< setw(23) << left << "Node Value:";
        int setwN;
        for (int i = 0; i < 5; i++) {
            if(i == 0){
                setwN = 5;
            }
            else{
                setwN = 16;
            }
            cout<<right << setw(setwN) << current->data;
            current = current->next;
            
        }
        cout << endl;
        cout<< setfill('=') << setw(110) << "=" << setfill(' ') << endl;
        current = head;
        cout << setw(23)<<left<<"Value of Previous node:";
        for (int i = 0; i < 5; i++) {
            if(i == 0){
                cout<< "   " << current->prev->data;
            }
            else{
                cout<< "              " << current->prev->data;
            }
            
            current = current->next;
        }
        cout << endl;
        cout << setfill('=') << setw(110) << "=" << setfill(' ') << endl;
        current = head;
        cout <<setw(23)<<left<<"Value of Next node:";
        for (int i = 0; i < 5; i++) {
            if(i == 0){
                cout << "   "<< current->next->data;
            }
            else{
                cout << "              " << current->next->data;

            }
            
            current = current->next;
        }
        cout << endl;
        cout << setfill('=') << setw(110) << "=" << setfill(' ') << endl;
    }
}

