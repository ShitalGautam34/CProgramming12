// to convert time in seconds to hour, minute and second
#include<stdio.h>
void convert();
void main(){convert();}

void convert(){
	int time,h=0,m=0,s=0;
	printf("Enter time in seconds.");
	scanf("%d",&time);
	h = time / 3600;
	m = (time - h*3600)/60;
	s = time - h*3600 - m*60;
	printf("%d seconds is %d hours, %d minutes and %d seconds.",time,h,m,s);
}
