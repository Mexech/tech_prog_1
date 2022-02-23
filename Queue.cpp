#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    head = NULL;
    tail = NULL;
}

void Queue::push(int val) {
    Node *tmp = new Node;
    tmp->data = val;
    tmp->next = NULL;

    if (head == NULL) {
        head = tmp;
        tail = tmp;
    } else {
        tail->next = tmp;
        tail = tail->next;
    }
}

int Queue::pop() {
    if (isEmpty())
        throw out_of_range("empty");

    Node *tmp = head;
    int data = tmp->data; 
    head = tmp->next;
    delete tmp;
    return data;
}

void Queue::display() {
    if (isEmpty())
        throw out_of_range("empty");
    Node *tmp = head;
    do 
        printf("%d ", tmp->data);
    while (tmp->next != NULL, tmp = tmp->next);
    printf("\n");
}

Queue Queue::copy() {
    Queue q;
    if (isEmpty())
        return q;
    Node *tmp = head;
    do
        q.push(tmp->data);
    while (tmp->next != NULL, tmp = tmp->next);
    return q;
}

Queue Queue::append(Queue q) {
    Queue result = this->copy();
    while (1) {
        try {
            int data = q.pop();
            result.push(data);
        } catch(out_of_range) {
            return result;
        }
    }
}

bool Queue::isEmpty() {
    return head == NULL;
}

Queue::Node *Queue::getHead() {
    return head;
}