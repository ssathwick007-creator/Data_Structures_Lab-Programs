#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int queue[MAX];
int front = -1;
int rear = -1;


void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow! The queue is full.\n");
    } else {
        
        if (front == -1) {
            front = 0;
        }
        printf("Enter the value to enqueue: ");
        scanf("%d", &value);
        rear++;
        queue[rear] = value;
        printf("%d successfully added to the queue.\n", value);
    }
}


void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow! The queue is already empty.\n");
    } else {
        printf("\n%d was dequeued from the queue.\n", queue[front]);
        front++;
        
        
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("\nThe queue is empty.\n");
    } else {
        printf("\nThe front element is: %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nThe queue is empty.\n");
    } else {
        printf("\nCurrent Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    printf("=== Queue Operations Menu ===");
    
    while (1) {
        printf("\n1. Enqueue (Add)");
        printf("\n2. Dequeue (Remove)");
        printf("\n3. Peek (View Front)");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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