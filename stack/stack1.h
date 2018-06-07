extern status initstack(sqstack *s);
extern status destroystack(sqstack *s);
extern status gettop(sqstack s, selemtype *e);
extern status stacktraverse(sqstack s);
extern status push(sqstack *s, selemtype e);
extern status pop(sqstack *s, selemtype *e);