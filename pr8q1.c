#include<stdio.h>
 main(){
	char a[100];
	int *length;
	puts("enter any string :");
	gets(a);
	length = &a;
	
	printf("the length of the string %d",strlen(a));
	return 0;
}
