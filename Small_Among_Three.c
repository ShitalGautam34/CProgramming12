#include<stdio.h>

void main(){
	int a,b,c,small;
	printf("Enter three numbers.");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a<b) && (a<c)){
		small=a;
	}
	else if(b<c){
		small=b;
	}
	else{
		small=c;
	}
	printf("The smallest number is %d.",small);
}
