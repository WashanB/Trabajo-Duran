#include<iostream> 
using namespace std; 

int main()
{
    int number = 0, suma =0; 
    while (number >=0)
    { 
        suma += number; 
        cout << "Dime un numero: " << endl; 
        cin >> number; 

       
    }
    cout << "La suma de los numeros sera: " << suma << endl; 
    
    return 0;
}
