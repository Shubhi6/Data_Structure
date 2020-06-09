#include <stdio.h>
#include <stdlib.h>

//Macros
#define SUCCESS 0
#define FAILURE 1
#define SIZE 25
#define DATA_NOT_FOUND -1

//Function declarations
int merge_sort(int array[],int low,int high);
void merge_array(int arr[],int low,int high);
void print_array(int array[],int size);
