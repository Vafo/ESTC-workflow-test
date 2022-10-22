#include "vector.h"


vector_t vector_init(int els[VECTOR_SIZE])
{
    int i;
    vector_t result;
    for(i = 0; i < VECTOR_SIZE; i++)
    {
        result.elements[i] = els[i];
    }

    return result;
}

vector_t vector_copy(vector_t source)
{
    int i;
    vector_t result;
    for(i = 0; i < VECTOR_SIZE; i++)
    {
        result.elements[i] = source.elements[i];
    }

    return result; 
}

vector_t vector_add(vector_t a, vector_t b)
{
    int i;
    vector_t result;
    for(i = 0; i < VECTOR_SIZE; i++)
    {
        result.elements[i] = a.elements[i] + b.elements[i];
    }

    return result;
}
