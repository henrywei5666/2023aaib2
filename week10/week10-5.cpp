#include <stdio.h>
int isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(isPrime(i)) printf("%d ",i);
	}
}
