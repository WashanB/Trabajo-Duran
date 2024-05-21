#include<iostream> 
using namespace std; 
int main()
{ 
    int i = 99; 
    //  imprime los numero impares entre 1 y 100 de forma descendente
    cout << "numeros descente entre 1 y 100" << endl;
   
    while(i>=1){
    if(i % 2 !=0){
        cout << i << endl; 
    }
    i--; 
    }
    cout<< i << endl; 


    
    return 0;
}



