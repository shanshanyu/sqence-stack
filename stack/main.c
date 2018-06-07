#include "stack.h"
#include "stack1.h"
#pragma warning (disable:4996)
int main(){
	int n;
	sqstack s;
	initstack(&s);
	scanf("%d", &n);
	do {
		push(&s, n%8);
	} while ((n /= 8)>0);
	stacktraverse(s);
	destroystack(&s);
	system("pause");
	return 0;
}