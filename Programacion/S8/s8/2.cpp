#include<iostream> 
using namespace std;

int main()
{
    int num, fact=1;

    cout << "Dime un numerito: ";
    cin >> num;

    if(num>0){
        while(num != 1){
            fact*=num;
            num--;
        }
        cout << fact << endl;
    }else{
        cout << "Debe ingresar un numero positivo: " << endl;
    }
    return 0;
}