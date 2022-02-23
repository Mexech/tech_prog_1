#include <iostream>
#include "Queue1.h"
using namespace std;

Queue1 Queue1::copy() {
    Queue1 q;
    if (isEmpty())
        return q;
    Node *tmp = Queue::getHead();
    do
        q.push(tmp->data);
    while (tmp->next != NULL, tmp = tmp->next);
    return q;
}

Queue1 Queue1::append(Queue1 q) {
    Queue1 result = this->copy();
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

int Queue1::countOddNodes() {
    result = 0;
    if (isEmpty())
        return 0;
    Queue1::Node *tmp = getHead();
    do
        if (tmp->data % 2)
            result++;
    while (tmp->next != NULL, tmp = tmp->next);
    return result;
}

void Queue1::displayCount() {
    printf("%d\n", result);
}