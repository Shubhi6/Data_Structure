#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE 1
#define SIZE 25

//Function declarations
int bubble_sort(int array[],int size);
int insertion(int array[],int size);
int selection(int array[],int size);
void swap(int *num1, int *num2);
void print_array(int array[],int size);
