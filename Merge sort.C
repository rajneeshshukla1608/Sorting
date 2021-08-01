/* Merge sort in c one of the sorting algorithm used after quick sort used for the less amount of data 

# love to code in Turboc++

Used 999999 - at the place of infinity because infinity can be typed
just don't copy the copy analyze the code first and try to have the concept first

complexity -
Space = O(nlogn) 
time = O(n)

Thankyu - 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_LEN 10  
#define INFINITY 999999

void merge(int *array, int p, int q, int r){
     int i, k, j;
     int n1 = q - p + 1;
     int n2 = r - q;
     int *left, *right;
     left = (int*)malloc((n1+1)*sizeof(int));
     right = (int*)malloc((n2+1)* sizeof(int));
     for(i = 0; i< n1; i++){
	 left[i] = array[p + i];
     }
     for(i = 0; i< n2; i++){
	 right[i] = array[q + i +1];
     }
     left[n1] = INFINITY;
     right[n2] = INFINITY;
     i = 0;
     j = 0;
     for(k = p; k <= r; k++){
	if(left[i]<=right[j]){
	    array[k] = left[i];
	    i = i + 1;
	} else{
	  array[k] = right[j];
	  j = j + 1;
	}
     }
}
void merge_sort(int* array, int p, int r){
    int q;
    if(p < r){
       q = (p + r) / 2;
       merge_sort(array, p, q);
       merge_sort(array, q + 1, r);
       merge(array, p, q, r);
    }
}
int main(void){
    int array[MAX_LEN], i;
    clrscr();
    printf("Ente the element into the array= ");
    for(i = 0; i < MAX_LEN; i++){
     scanf("%d", &array[i]);
    }
    merge_sort(array, 0, MAX_LEN - 1);
    printf("Your resultant values will be = ");
    for(i = 0; i<MAX_LEN; i++){
     printf("\t%d", array[i]);
    }
    getch();
    return 0;
}
