#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(NULL) {}
};

Node* mergeOrderedLists(Node* list1, Node* list2) {
    Node dummy(0);
    Node* current = &dummy;

    while (list1 && list2) {
        if (list1->data < list2->data) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    // If one list is longer than the other
    if (list1) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    return dummy.next;
}

void displayList(Node* head) {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    Node* mergedList = mergeOrderedLists(list1, list2);

    // Display the merged list
    displayList(mergedList); // Should print: 1 2 3 4 5 6

    return 0;
}

