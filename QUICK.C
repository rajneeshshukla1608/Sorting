#include<stdio.h>
#include<conio.h>
#define MAX_LEN 10

int partition(int *array, int p, int r){

    int x, i, j, temp;
    x = array[r];
    i = p - 1;
    for(j = p;j < r ;j++){
       if(array[j] <= x){
	 i  = i + 1;
	 temp = array[i];
	 array[i] = array[j];
	 array[j] = temp;
       }
    }
    temp = array[i+1];
    array[i+1] = array[r];
    array[r] = temp;

    return i+1;

}

void quick_sort(int *array, int p, int r){

   int q;
   if(p < r){
     q = partition(array, p, r);
     quick_sort(array, p, q - 1);
     quick_sort(array, q + 1, r);
   }
}

int main(){
   int array[MAX_LEN], i;
   clrscr();
   printf("Enter the element in the array: ");
   for(i = 0; i < MAX_LEN; i++){
     scanf("%d", &array[i]);
   }
   quick_sort(array, 0, MAX_LEN - 1);
   printf("Your resultant values will be: ");
   for(i = 0; i < MAX_LEN; i++){
     printf("\t%d", array[i]);
   }
  getch();
  return 0;
}