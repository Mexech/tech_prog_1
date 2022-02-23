#include "Queue.h"
class Queue2 : protected Queue {
    public:
        void push(int val);
        int pop();
        void display();
        Queue2 copy();
        Queue2 append(Queue2 q);
        int countOddNodes();
        void displayCount();
    protected:
    private:
        int result;
};