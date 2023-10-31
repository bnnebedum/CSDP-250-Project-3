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

public:
    Stack()
    {
        top = nullptr;
    }
    ~Stack() {}
    void createStack(int);
    void push(int);
    void pop();
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

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }
    ~Queue() {}
    void createQueue(double, int);
    void enqueue(int);
    void dequeue();
    void displayQueue();
};

#endif