#include<stdio.h>
#include<conio.h>
#define MAX_LEN 10
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