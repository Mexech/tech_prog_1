#pragma once
class Queue {
    public:
        Queue();
        struct Node {
            int data;
            struct Node *next;
        };
        void push(int val);
        int pop();
        void display();
        Queue copy();
        Queue append(Queue q);
        bool isEmpty();
        Node *getHead();
    protected:
    private:
        Node *head, *tail; 
};