#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int stack[MAX];
int top = -1;
void push() {
    int value;
    if (top == MAX - 1) {
        printf("\nStack Overflow! The stack is full.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d successfully pushed onto the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! The stack is already empty.\n");
    } else {
        printf("\n%d was popped from the stack.\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("\nThe stack is empty.\n");
    } else {
        printf("\nThe top element is: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("\nThe stack is empty.\n");
    } else {
        printf("\nCurrent Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    printf("=== Stack Operations Menu ===");
    
    while (1) {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please enter a valid number.\n");
        }
    }

    return 0;
}