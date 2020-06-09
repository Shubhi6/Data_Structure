#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

//Function declarations
void heap_sort(int *,int);
void max_heapify(int *,int,int);
void swap(int *,int *);

#endif
