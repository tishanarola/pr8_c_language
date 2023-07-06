#include<stdio.h>
void pointer(int n,int m) {
	int a[n][m];
	int i, j;
	int cube;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int *narola;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cube=a[i][j] * a[i][j] * a[i][j];
			narola = &cube;
			printf("%d\n",*narola);
		}
	}
}
void main(){
	int n,m;
	printf("enter the size of a:");
	scanf("%d",&n);
	printf("enter the size of b:");
	scanf("%d",&m);
	pointer(n,m);
}
