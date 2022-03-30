#include <stdio.h>

void main()
{

  float n1, n2, n3;

  printf("Enter three numbers: ");
  scanf("%f %f %f", &n1, &n2, &n3);


  if ((n1 > n2) && (n1 > n3))
    printf("%f is the largest number.", n1);


  else if ((n2 > n1) && (n2 > n3))
    printf("%f is the largest number.", n2);

  
  else if ((n3 > n1) && (n3 > n2))
    printf("%f is the largest number.", n3);
    
  else 
  printf("All are equal");

}