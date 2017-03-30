#define MAX_SIZE 10
#define boolean unsigned char
#define true 1
#define false 0
typedef char Element;

// Global stack
Element stack[MAX_SIZE];
int rear = -1;
int front = -1;
void add(Element e);
Element delete();
void stack_show();