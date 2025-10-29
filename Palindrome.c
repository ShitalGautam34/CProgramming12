#include<stdio.h>

void main(){
	int n, rem, rev=0, original;
	printf("Enter a number.");
	scanf("%d",&n);
	original = n;
	
	while(n!=0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	
	if(original == rev)
		printf("%d is palindrome.",original);
	else
		printf("%d is not palindrome.",original);
}
