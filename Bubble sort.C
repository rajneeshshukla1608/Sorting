/*  
Bubble sort sorting algorithm in c

Time complexity - O(n^2)
Space complexity - O(1)
Q. Why not bubble sort?
A. If an array is already sorted, Bubble Sort will only pass through the array
once (using concept two below), however the worst case scenario is a run time 
of O(N²), which is extremely inefficient.

*/


#include<stdio.h>
#include<conio.h>
#define MAX_LEN 10
// The below is one of the way to make short to your bit datatype with flag so now, flag size is 1 only either 0 or 1 so, it reduces the space complexity in some way 
// so you can try this 

typedef short short short short int bit;

int main(){

   int array[MAX_LEN] , i, j, temp;
   bit flag=0;
   clrscr();
   printf("Enter the numbers in to the array: ");
   for(i = 0; i<MAX_LEN; i++){
     scanf("%d", &array[i]);
   }
   for(i = 0; i < MAX_LEN; i++){
      for(j = 0; j < MAX_LEN - i - 1;j++){
	if(array[j] > array[j + 1]){
	  flag = 1;
	  temp = array[j + 1];
	  array[j + 1] = array[j];
	  array[j] = temp;
	}
       if (flag = 0){
	break;
       }
      }

   }
   for(i = 0; i< MAX_LEN; i++){
     printf("\t %d", array[i]);
   }
   getch();
   return 0;
}
