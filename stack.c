#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(Node** top, int data) {
    Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack\n", data);
}

int pop(Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    Node* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

void view(Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    Node* temp = top;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* stack = NULL;
    int choice, value;

    while (1) {
        printf("1. Push\n2. Pop\n3. View\n4. Exit\n");
        printf("Enter your choice (enter numbers): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                view(stack);
                break;
            case 4:
                exit(0);
                break; // Add break to maintain consistency
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
