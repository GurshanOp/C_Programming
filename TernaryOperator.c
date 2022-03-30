#include <stdio.h>

int main()
{

    
    int a,b;
        
    printf("Enter Numbers");
    scanf("%d%d",&a,&b);
    
    int ans=(a>b)?a:b;
    
    printf("Bigger is one %d",ans);
    

    return 0;
}
