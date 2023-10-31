// Bede Nnebedum
// CSDP 250 - Fall 2023
// Project 3

#include <iostream>
#include "DecimalToBinary.h"
#include "DecimalToBinary.cpp"

using namespace std;

int main()
{
    Stack stack;
    Queue queue;
    double num;
    int places;

    cout << endl
         << "Enter decimal: ";
    cin >> num;

    int intpart = num;
    double decpart = num - intpart;

    stack.createStack(intpart);
    if (decpart != 0)
    {
        do
        {
            cout << "Number of decimal places in final answer: ";
            cin >> places;
        } while (places < 1);
        queue.createQueue(decpart, places);
    }

    cout << endl
         << "Binary conversion: ";
    stack.displayStack();

    if (decpart != 0)
    {
        cout << ".";
        queue.displayQueue();
    }

    cout << endl;
}