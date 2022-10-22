#include "vector/vector.h"
#include <stdio.h>
#include <string.h>

void print_vector(vector_t src);

int main(int argc, char *argv[])
{
    // Initialization using existing array of size VECTOR_SIZE
    vector_t first, second, result;
    int els1[] = {1, 2, 3};
    int els2[] = {4, 5, 6};
    first = vector_init(els1);
    second = vector_init(els2);
    
    printf("Testing Vector operations over %d Dimension\n\n", VECTOR_SIZE);
    // Testing addition
    printf("Testing Addition\n");
    result = vector_add(first, second);
    print_vector(first);
    printf("+\n");
    print_vector(second);
    print_vector(result);

    // Testing substraction
    printf("Testing Substraction\n");
    result = vector_sub(first, second);
    print_vector(first);
    printf("-\n");
    print_vector(second);
    print_vector(result);
}

void print_vector(vector_t src)
{
    int i;
    char msg[256], num[16];
    sprintf(msg, "Vector[%d] = ", VECTOR_SIZE);
    for(i = 0; i < VECTOR_SIZE; i++)
    {
        sprintf(num, "%d ", src.elements[i]);
        strcat(msg, num);
    }
    printf("%s\n", msg);
}