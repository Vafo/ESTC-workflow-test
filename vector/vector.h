#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_SIZE 3
#define VECTOR_TYPE int

typedef VECTOR_TYPE vector_el;

typedef struct vector_t{
    vector_el elements[VECTOR_SIZE];
} vector_t;


#endif