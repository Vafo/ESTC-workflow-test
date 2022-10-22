#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_SIZE 3
#define VECTOR_TYPE int

typedef VECTOR_TYPE vector_el;

typedef struct vector_t{
    vector_el elements[VECTOR_SIZE];
} vector_t;

vector_t vector_init(int els[VECTOR_SIZE]);     // Initialization using existing array of size VECTOR_SIZE
vector_t vector_copy(vector_t source);          // Initialization using existing vector_t (Might be used in future in case of pointers)

vector_t vector_add(vector_t a, vector_t b);    // Addition over 2 vectors
vector_t vector_sub(vector_t a, vector_t b);    // Substraction a - b
vector_el vector_dot(vector_t a, vector_t b);   // Dot Product a . b
vector_t vector_cross(vector_t a, vector_t b);    // Crossproduct a x b

#endif