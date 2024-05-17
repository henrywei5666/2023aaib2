#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int N=0; ///有幾個數
    int a[20];
    while(n>0){ ///如果數字還沒剝光，還有殘留
        int now=n%10;
        ///printf("now:%d\n",now);
        n/=10;
    }
    int bad=0;
    for(int i=0;i<N;i++){
        if(a[i]!=a[N-1-i]) bad=1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
