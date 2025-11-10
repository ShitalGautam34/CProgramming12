#include<stdio.h>
void check(int);

void main(){
	int n;
	printf("Enter a number.");
	scanf("%d",&n);
	check(n);
}

void check(int n){
	int rem, rev=0, original;
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
