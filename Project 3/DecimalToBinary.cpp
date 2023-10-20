// Bede Nnebedum
// CSDP 250 - Fall 2023
// Project 3

#include <iostream>
#include "DecimalToBinary.h"

using namespace std;

void Stack::createStack(int num)
{
    int remainder, ogNum;

    do
    {
        ogNum = num;
        num /= 2;
        remainder = ogNum - (2 * num);
        push(remainder);
    } while (num != 0);
}

void Stack::push(int num)
{
    StackNode *newNode = new StackNode;

    newNode->value = num;

    if (!top)
        top = newNode;

    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void Stack::pop()
{
    StackNode *newNode = top;

    top = top->next;

    delete newNode;
}

void Stack::displayStack()
{
    while (top != nullptr)
    {
        cout << top -> value;
        pop();
    }
}

void Queue::createQueue(double num)
{
    for (int i = 0; i < 4; i++)
    {
        num *= 2;
        if (num < 1) enqueue(0);
        else 
        {
            enqueue(1);
            num--;
        }
    }
}

void Queue::enqueue(int num)
{
    QueueNode *newNode = new QueueNode;

    newNode -> value = num;

    if (!front)
    {
        front = newNode;
        rear = newNode;
    }

    else
    {
        rear -> next = newNode;
        rear = newNode;
    }
}

void Queue::dequeue()
{
    QueueNode *newNode = front;

    front = front -> next;

    delete newNode;
}

void Queue::displayQueue()
{
    while (front != nullptr)
    {
        cout << front -> value;
        dequeue();
    }
}