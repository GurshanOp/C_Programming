#include <stdio.h>

int main()
{

    
    int a=5,b=10,c=0;
    printf("%d\n%d\n",a,b);
    c=a;
    a=b;               
    b=c;
    
    printf("a=%d\nb=%d",a,b);
    return 0;
}
