#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

void createList(Node** head);
void insertatTOP(Node** head , int data);
void deleteatTOP(Node** head);
void traverse(Node* head);
void insertAtPosition(Node** head );

int main(){
    Node* head = NULL;
    int choice, data;

    while(1){
        printf("\nMenu: \n");
        printf("1) Create List\n");
        printf("2) Insert at top\n");
        printf("3) Delete At top\n");
        printf("4) Traverse\n");
        printf("5) Exit\n");
        printf("6) Enter at any position:\n");
        printf("Enter Your Choice");
        scanf("%d", &choice );

        switch (choice) {
            case 1:
                createList(&head);
                break;
            case 2:
                printf("Enter data to insert:");
                scanf("%d", &data);
                insertatTOP(&head, data);
                break;
            case 3:
                deleteatTOP(&head);
                break;
            case 4:
                traverse(head);
                break;
            case 5:
                exit(0);
            case 6:
                insertAtPosition(&head);
                printf("Enter data and position to insert: ");
                
                break;
        
            default:
                printf("Invalid \n");

        }
    }
    return 0;
}
void createList(Node** head) {
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertatTOP(head, data);
    }
}
void insertatTOP(Node** head, int data) {
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
void deleteatTOP(Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

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
void insertAtPosition(Node** head) {
    int data, position;
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = data;
    
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("Node inserted at position %d.\n", position);
        return;
    }

    Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Node inserted at position %d.\n", position);
}
