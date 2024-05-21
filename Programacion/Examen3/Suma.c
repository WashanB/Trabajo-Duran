#include<stdio.h> 

int num1, num2; 
int suma; 

int main()
{

printf("Dime dos numeros para su posterior suma: \n");
scanf("%d", &num1); 
scanf("%d", &num2); 


suma = num1 + num2;

printf("Este es el resultado de la suma %d \n" ,suma); 


    return 0;
}
