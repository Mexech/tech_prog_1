#include "Queue.h"
class Queue1 : public Queue {
    public:
        Queue1 copy();
        Queue1 append(Queue1 q);
        int countOddNodes();
        void displayCount();
    protected:
    private:
        int result;
};