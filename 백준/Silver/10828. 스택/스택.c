#include<stdio.h>
#include<string.h>

int stack[10000];
int front = 0;

void push(int i) {
    stack[++front] = i;
}

void pop() {
    if (front == 0) {
        printf("-1\n");
        return;
    }
    printf("%d\n", stack[front--]);
}

void size() {
    printf("%d\n", front);
}

void empty() {
    printf("%d\n", front == 0);
}

void top() {
    if (front == 0) {
        printf("-1\n");
        return;
    }
    printf("%d\n", stack[front]);
}

int main() {
    int num1, i;
    char cmd[10];

    scanf("%d", &num1);

    for (i = 0; i < num1; i++) {
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0) {
            int value;
            scanf("%d", &value);
            push(value);
        }
        else if (strcmp(cmd, "pop") == 0)
            pop();
        else if (strcmp(cmd, "size") == 0)
            size();
        else if (strcmp(cmd, "empty") == 0)
            empty();
        else if (strcmp(cmd, "top") == 0)
            top();
    }

    return 0;
}