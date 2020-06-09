#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE 1
#define SIZE 25
#define DATA_NOT_FOUND -1

//Function declarations
int quick_sort(int array[],int low,int high);
int partition(int arr[],int low,int high);
void swap(int *num1, int *num2);
void print_array(int array[],int size);
