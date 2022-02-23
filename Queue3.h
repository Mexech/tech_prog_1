#include "Queue.h"
class Queue3 : private Queue {
    public:
        void push(int val);
        int pop();
        void display();
        Queue3 copy();
        Queue3 append(Queue3 q);
        int countOddNodes();
        void displayCount();
    protected:
    private:
        int result;
};