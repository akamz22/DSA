#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *arr;
};

Queue *createqueue(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->arr = new int[queue->capacity];
    return queue;
}

int isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

void enQueue(Queue *queue, int item)
{

    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " Item enqueued\n";
}

int deQueue(Queue *queue)
{   
    if (isEmpty(queue))
        return INT_MIN;


    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->front];
}
int rear(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->rear];
}
int main()
{

    Queue *queue = createqueue(1000);


    enQueue(queue, 10);
    enQueue(queue, 20);
    enQueue(queue, 30);
    enQueue(queue, 40);
    enQueue(queue, 50);
    enQueue(queue, 10);
    enQueue(queue, 20);
    enQueue(queue, 30);
    enQueue(queue, 40);
    enQueue(queue, 50);
    cout << deQueue(queue) << " dequeued\n";

    cout << "Front is : " << front(queue) << endl;
    cout << "Rear is : " << rear(queue) << endl;

    while (!isEmpty(queue))
    {
        cout<<front(queue)<<" ";
        deQueue(queue);
    }
    return 0;
}