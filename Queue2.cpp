#include <iostream>
#include "Queue2.h"
using namespace std;

void Queue2::push(int val) {
    Queue::push(val);
}

int Queue2::pop() {
    return Queue::pop();
}

void Queue2::display() {
    Queue::display();
}

Queue2 Queue2::copy() {
    Queue2 q;
    if (isEmpty())
        return q;
    Node *tmp = Queue::getHead();
    do
        q.push(tmp->data);
    while (tmp->next != NULL, tmp = tmp->next);
    return q;
}

Queue2 Queue2::append(Queue2 q) {
    Queue2 result = this->copy();
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

int Queue2::countOddNodes() {
    result = 0;
    if (isEmpty())
        return 0;
    Queue2::Node *tmp = getHead();
    do
        if (tmp->data % 2)
            result++;
    while (tmp->next != NULL, tmp = tmp->next);
    return result;
}

void Queue2::displayCount() {
    printf("%d\n", result);
}