#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
void main() {
	char c, e;

	while (1) {
		printf("\nCommand> ");
		c = getch();
		putch(c);
		c = toupper(c);
		switch (c) {
		case '+':
			e = getch();
			putch(e);
			add(e);
			break;
		case '-':
			e = delete();
			printf("\n %c \n", e);
			break;
		case 'S':
			stack_show();
			break;
		case 'Q':
			printf("\n");
			exit(1);
		default: break;
		}
	}
}

void add(Element e) {
	if (rear < front) {
		printf("memory empty");

	}
	stack[++rear] = e;
	return stack[rear];

}

Element delete() {
	if (front > rear) {
		printf("memory empty");

	}

	return stack[++front];
}

void stack_show() {

	printf("\n");
	for (int i = front + 1; i < rear + 1; i++)
		printf("%c", stack[i]);

}