// write a menu driven program to implement basic operations of singly linkedlist.Each Operation should be implemented in different function
//  1) CreateList() = To create a list
// 2) insertAtTop() = To inset a node at top position
//  3) deleteATTOp() = to delete a node at top position
// 4) traverse() = to print all the node information

#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
void createList(Node** head);
void insertAtTop(Node** head, int data);
void deleteAtTop(Node** head);
void traverse(Node* head);

int main() {
    Node* head = NULL;
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1) Create List\n");
        printf("2) Insert at Top\n");
        printf("3) Delete at Top\n");
        printf("4) Traverse\n");
        printf("5) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createList(&head);
                break;
            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtTop(&head, data);
                break;
            case 3:
                deleteAtTop(&head);
                break;
            case 4:
                traverse(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

// Function to create a list
void createList(Node** head) {
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtTop(head, data);
    }
}

// Function to insert at the top
void insertAtTop(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    printf("Node inserted at top.\n");
}

// Function to delete from the top
void deleteAtTop(Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to traverse the list
void traverse(Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node* temp = head;
    printf("Linked List: ");
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

