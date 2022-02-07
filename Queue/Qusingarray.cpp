//Queue using array............................................................
#include <iostream>
using namespace std;
class queue
{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    queue(int s)
    {
        data = new int[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    //Insert element
    void enqueue(int x)
    {
        if (size == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        data[nextIndex] = x;
        nextIndex = (nextIndex + 1) % (capacity);
        if (firstIndex == -1)
            firstIndex = 0;
        size++;
    }
    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        int ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        return ans;
    }
};
//using namespace std;
int main()
{
    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;

    return 0;
}
