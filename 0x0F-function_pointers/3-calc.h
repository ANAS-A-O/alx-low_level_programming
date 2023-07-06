#ifndef CALC_H
#define CALC_H
/**
  *struct op - a struct op
  *@op: the operator
  *@f: the associated function
  */
typdef struct op
{
	char *op;
	int(*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int b, int b);
int op_mul(int b, int b);
int op_div(int b, int b);
int op_mod(int b, int b);
int (*get_op_func(char *s))(int, int);

#endif
