#ifndef ALL_PROTOTYPES
#define ALL_PROTOTYPES

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/*operation functions*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* function to select function to perform operation*/
int (*get_op_func(char *s))(int, int);

#endif /* ALL_PROTOTYPES */
