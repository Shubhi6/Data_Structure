#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE 1
#define SIZE 25
#define DATA_NOT_FOUND -1

//Function declarations
int binary_iterative(int *arr,int size,int val);
int binary_recur(int *arr,int low,int high,int val);
int bubble_sort(int array[],int size);
void swap(int *num1, int *num2);
void print_array(int array[],int size);
