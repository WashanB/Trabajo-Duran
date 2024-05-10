//Escriba el programa para calcular la suma de los cuadrados de los números entre 1 y 100.
 
#include<iostream> 
using namespace std; 

int main()
{
    int num =0 ; 
    int i =1 ; 
    while(i<=100){
        num+=i*i; 
        i++; 

    cout << "La suma de los cuadrados es: "<< num << endl; 

    }




    return 0;
}
