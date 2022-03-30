#include <stdio.h>

int main()
{
    int a;
    printf("Enter Days in number 1 to 7");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
                printf("\n Monday");
        case 2:
                printf("\n Tuesday");
        case 3:
                printf("\n Wednesday");
        case 4:
                printf("\n Thursday");
        case 5:
                printf("\n Friday");
        case 6:
                printf("\n Saturday");
        case 7:
                printf("\n Sunday");
        case 8:
                printf("\n Wrong Input");
    }
    return 0;
}
