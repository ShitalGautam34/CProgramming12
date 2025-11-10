#include<stdio.h>

void main(){
	int i, n, first=0, second=1, next;
	printf("Enter the number of terms.");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d\t",first);
		next = first + second;
		first = second;
		second = next;
	}
}
