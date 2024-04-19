#include <stdio.h>
int myAdd(int a,int b){
    return a+b;
}
void myprint(int a){
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main()
{
    int ans=myAdd(3,4);
    printf("Hello ans: %d\n",ans);
    myprint(ans);
}
