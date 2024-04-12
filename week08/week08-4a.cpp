#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		for(int j=a;j<=b;j++){
			printf("%2dx%2d=%2d  ",i,j,i*j);
		}
		printf("\n");
	}
}