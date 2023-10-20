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

    cout << "Enter decimal: ";
    cin >> num;

    int intpart = num;
    double decpart = num - intpart;

    stack.createStack(intpart);
    if (decpart != 0)
        queue.createQueue(decpart);

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
