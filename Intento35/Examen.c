//✓ Leer el nombre de un producto, precio compra, 
//precio venta y la existencia, imprimir la ganancia
//de dicho producto y la ganancia total.

#include<stdio.h> 

int main()
{

    char cadena[100];
    char producto;  
    int precioCompra, pVenta;
    int existencia, ganancia, gTotal; 

    printf("Dime el producto: \n"); 
    scanf(" %[^\n]", &producto);

    printf("Dime su precio de compra: \n"); 
    scanf("%d", &precioCompra);

    printf("Dime el precio de venta: \n"); 
    scanf("%d", &pVenta);

    printf("Cuantas existencias del producto posees?: \n");
    scanf("%d", &existencia); 

    ganancia = pVenta - precioCompra; 

    printf("Este seria la cantidad de ganancia %d" "\n", ganancia); 

    gTotal = pVenta * existencia; 

    printf("Despues, tenemos su ganancia total: %d" "\n", gTotal);


    return 0;
}
