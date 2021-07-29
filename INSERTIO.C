#include<stdio.h>
#include<conio.h>

int* insertion_sort(int *u_array, int size){
    int i, j,key;
     for(j = 1;j < size; j++){

	key = u_array[j];
	i = j - 1;
	while(i>-1 && u_array[i] > key){
	   u_array[i+1] = u_array[i];
	   i=i-1;
	}
	u_array[i+1]=key ;

     }
     return u_array;

 }

int main(){
	int array[10],i, *result;
	int length = sizeof(array)/sizeof(int);
	clrscr();
	printf("Enter the number in the array = ");
	for(i = 0; i < length; i++){
	 scanf("%d", &array[i]);
	}
       result = insertion_sort(array, length);
       for(i = 0; i <length;i++){
	printf("  %d", result[i]);
	}
	getch();
	return 0;
}