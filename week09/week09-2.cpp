#include <stdio.h>
int myfuncA()
{
    int x=200;
    printf("myfuncA()�̪�x�O%d\n",x);
}
int main()
{
    int x=100;
    printf("main()�̪�x�O:%d\n",x);
    myfuncA();
    printf("main()�̪�x�O:%d\n",x);
}
