#include <stdio.h>
int main(){
	int a[11],i,n=0;
	for(i=0;i<11;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		n++;
	}
	for(i=n-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}

