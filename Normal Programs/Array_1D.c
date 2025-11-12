/* program to input 50 numbers and
i. find largest number
ii. search a entered number
iii. display in ascending order */

#include<stdio.h>

void main(){
	int i, j, size, temp=0, large, search;
	printf("Enter the number of numbers to be entered. ");
	scanf("%d", &size);
	int num[size];
	
	for(i=0;i<size;i++){
		printf("Enter %d number. ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("Enter a number to be searched. ");
	scanf("%d", &search);
	
	// i. finding the largest number
	large = num[0];
	for(i=0;i<size;i++){
		if(num[i] > large)
			large = num[i];
	}
	printf("\nThe largest number in the array is %d.",large);
	
	// ii. to search a entered number
	int found = 0;
	for(i=0;i<size;i++){
		if(num[i] == search){
			found = 1;
			printf("\nFound the number %d at position %d.",search, i+1);
			break;
		}
	}
	if(found==0) printf("\n%d not found.", search);	
	
	// iii. display in ascending order
	for(i=0;i<size;i++){
		for(j=0;j<i;j++){
			if(num[j] > num[i]){
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	printf("\nThe array in ascending order is:\n");
	for(i=0;i<size;i++){
		printf("%d, ",num[i]);
	}
	
	// after sorting the array in ascending order largest number can be easily found i.e num[size-1]
}
