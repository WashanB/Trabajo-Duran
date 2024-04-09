Algoritmo ejercicio5
	Escribir 'Cálculo del total de compra:'
	Definir cantidad Como Entero
	Definir precio Como Entero
	Definir total Como Entero
	Escribir 'Que cantidad de nuestro producto desea?'
	Leer cantidad
	Escribir 'Perfecto!, este seria nuestro precio'
	Leer precio
	Escribir 'Encantados de hacer tratos con usted, este es su recibo'
	total <- cantidad*precio
	Escribir total
	Escribir 'Cual es su total de compra?'
	Escribir total
	Escribir 'Este es el iva en el momento'
	Definir IVA Como Real
	Leer IVA
	Definir Monto Como Real
	Monto <- IVA*total
	Escribir 'Esta seria su cantidad de iva a pagar'
	Escribir Monto
FinAlgoritmo
