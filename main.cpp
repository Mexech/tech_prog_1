#include "Queue1.h"
#include "Queue2.h"
#include "Queue3.h"
#include <iostream>
using namespace std;

void displayHelp() {
    printf("1 -- push element; 2 -- pop element; 3 -- display queue;\n4 -- display amount of odd numbers; 5 -- make a copy; 6 -- append copied queue to a current queue;\n7 -- exit program; 8 -- change type; 9 -- help\n");
}

char selectType() {
    printf("Type the number of the queue type that you want to work with(1, 2, 3):\n");
    printf(">> ");
    return getchar();
}

int getInt() {
    int result;
    printf("Type the value:\n");
    scanf("%d", &result);
    return result;
}

template<typename T> char executeCommands(T q) {
    displayHelp();
    T copiedQ;
    while (1) {
        char c = getchar();
        if (c == '\n') 
            printf(">> ");
        if (c == '1') {
            q.push(getInt());
        } else if (c == '2') {
            try {
                printf("%d has been removed\n", q.pop());
            } catch(out_of_range) {
                printf("Queue is empty\n");
            }
        } else if (c == '3') {
            try {
                q.display();
            } catch(out_of_range) {
                printf("Queue is empty\n");
            }
        } else if (c == '4') {
            q.countOddNodes();
            q.displayCount();
        } else if (c == '5') {
            copiedQ = q.copy();
        } else if (c == '6') {
            q = q.append(copiedQ);
        } else if (c == '7') {
            return 0;
        } else if (c == '8') {
            getchar();
            return selectType();
        } else if (c == '9') {
            displayHelp();
        }
    }
}

int main() {
    char type = selectType();
    while (type) {
        if (type == '1') {
            Queue1 q;
            type = executeCommands<Queue1>(q);
        } else if (type == '2') {
            Queue2 q;
            type = executeCommands<Queue2>(q);
        } else if (type == '3') {
            Queue3 q;
            type = executeCommands<Queue3>(q);
        }
        else {
            printf("No such option. Try again.\n");
            getchar();
            type = selectType();
        }
    }
    return 0;
}