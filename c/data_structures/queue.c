#include <stdio.h>
#include <stdlib.h>

typedef struct QNode {
    int key;
    struct QNode* next;
} QNode;

typedef struct Queue {
    QNode *front, *rear;
} Queue;

QNode* newNode(int k) {
    QNode* temp = (QNode*)malloc(sizeof(QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue(Queue* q, int k) {
    QNode* temp = newNode(k);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

int main() {
    Queue* q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    printf("Queue Front : %d \n", q->front->key);
    return 0;
}
