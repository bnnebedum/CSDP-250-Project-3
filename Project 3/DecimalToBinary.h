// Bede Nnebedum
// CSDP 250 - Fall 2023
// Project 3

#ifndef DecimalToBinary_h
#define DecimalToBinary_h

using namespace std;

class Stack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };
    StackNode *top;
    void push(int);
    void pop();

public:
    Stack()
    {
        top = nullptr;
    }
    ~Stack() {}
    void createStack(int);
    void displayStack();
};

class Queue
{
private:
    struct QueueNode
    {
        int value;
        QueueNode *next;
    };
    QueueNode *front;
    QueueNode *rear;
    void enqueue(int);
    void dequeue();

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }
    ~Queue() {}
    void createQueue(double, int);
    void displayQueue();
};

#endif