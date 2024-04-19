#include <stdio.h>
int globalA=300;

void myfuncA()
{
    int localA=500;
    globalA=0;
    printf("myfunc(): globalA:%d localA:%d\n",globalA,localA);
}

int main()
{
    int localA=200;
    printf("main() globalA:%d localA:%d\n",globalA,localA);
    myfuncA();
    printf("main() globalA:%d localA:%d\n",globalA,localA);
}
