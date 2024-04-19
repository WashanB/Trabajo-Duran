#include<stdio.h> 

 char Name[100];
int main()
{
    printf("Dime tu nombre: ");
    scanf("%s", &Name); 

    printf("Gusto en conocerte %s", Name); 
    
    return 0;
}
