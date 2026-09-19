#include <stdio.h>
#include <stdlib.h>

// Structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node* previous = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

int main() {
    // Create nodes
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    // Assign values
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Original Linked List: ");
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    printf("Reversed Linked List: ");
    printList(head);

    // Free memory
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}