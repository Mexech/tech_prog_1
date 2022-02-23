#include <iostream>
#include "Queue3.h"
using namespace std;

void Queue3::push(int val)
{
    Queue::push(val);
}

int Queue3::pop()
{
    return Queue::pop();
}

void Queue3::display()
{
    Queue::display();
}

Queue3 Queue3::copy() {
    Queue3 q;
    if (isEmpty())
        return q;
    Node *tmp = Queue::getHead();
    do
        q.push(tmp->data);
    while (tmp->next != NULL, tmp = tmp->next);
    return q;
}

Queue3 Queue3::append(Queue3 q) {
    Queue3 result = this->copy();
    while (1)
    {
        try
        {
            int data = q.pop();
            result.push(data);
        }
        catch (out_of_range)
        {
            return result;
        }
    }
}

int Queue3::countOddNodes() {
    result = 0;
    if (isEmpty())
        return 0;
    Queue3::Node *tmp = getHead();
    do
        if (tmp->data % 2)
            result++;
    while (tmp->next != NULL, tmp = tmp->next);
    return result;
}

void Queue3::displayCount() {
    printf("%d\n", result);
}