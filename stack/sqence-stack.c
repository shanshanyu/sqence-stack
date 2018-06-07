#include "stack.h"
status initstack(sqstack *s) {  //init stack
	s->base = malloc(sizeof(selemtype)*STACK_INIT_SIZE);
	if (!s->base) return ERROR;
	s->top = s->base;
	s->stacksize = STACK_INIT_SIZE;
	return OK;
}

status destroystack(sqstack *s) { //destroy  stack
	free(s->base);
	s->base = NULL;
	s->top = s->base;
	s->stacksize = 0;
	return OK;
}

status gettop(sqstack s, selemtype *e) {//取得栈顶元素
	if (s.base == s.top) return ERROR;
	*e = *(s.top - 1);
	return OK;
}

status push(sqstack *s, selemtype e) {
	if ((s->top - s->base) >= s->stacksize) {
		s->base = realloc(s->base, sizeof(selemtype)*(s->stacksize + INCREMENT));
		if (!s->base) return ERROR;
		s->stacksize += INCREMENT;
		s->top = s->base + s->stacksize; //realloc可能重新分配内存
	}
	*s->top++ = e;
	return OK;
}

status pop(sqstack *s, selemtype *e) {
	if (s->base == s->top) return ERROR;
	*e = *--s->top;
	return OK;
}

status stacktraverse(sqstack s) {
	while (s.base!=s.top) printf("%d", *--s.top);
	return OK;
}