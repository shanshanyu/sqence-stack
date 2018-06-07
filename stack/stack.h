#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#define STACK_INIT_SIZE 10
#define INCREMENT 2
#define OK 1
#define ERROR 0
typedef int status;
typedef int selemtype;
typedef struct {
	selemtype *base;//Õ»µ×
	selemtype *top;//Õ»¶¥
	int stacksize;
}sqstack;
#endif