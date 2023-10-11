//
//  
//  sample
//
//  Created by Isabelle Puwo on 10/10/23.
//

#include <iostream>
#include"Header.h"

using namespace std;
int main() {
    CircularDoublyLinkedList myList;

    myList.append(11);
    myList.append(22);
    myList.append(33);
    myList.append(44);
    myList.append(55);

    myList.performAssignments();
    myList.printList();

    return 0;
}
