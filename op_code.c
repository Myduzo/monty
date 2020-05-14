#include "monty.h"
/**
 * op_code - search and select the function needed
 * @op : operator
 */
void (*op_code(char *op))(stack_t **, unsigned int)
{
    int x = 0;
    instruction_t inst[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}
    };

    while (inst[x].opcode)
    {
        if(strcmp(inst[x].opcode, op) == 0)
            return (inst[x].f);
        x++;
    }
    return (NULL);
}
