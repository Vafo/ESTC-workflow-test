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


vector_t vector_sub(vector_t a, vector_t b)
{
    int i;
    vector_t result;
    for(i = 0; i < VECTOR_SIZE; i++)
    {
        result.elements[i] = a.elements[i] - b.elements[i];
    }

    return result;
}

vector_el vector_dot(vector_t a, vector_t b)
{
    int i;
    vector_el result = 0;
    for(i = 0; i < VECTOR_SIZE; i++)
    {
        result += a.elements[i] * b.elements[i];
    }

    return result;
}