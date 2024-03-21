Algoritmo sin_titulo
	definir surName, Name como cadena;  
	definir age, weight Como real;
	definir dayYears como real; 
	definir KG Como Real;
	
	Escribir "Bienvenido al sistema"; 
	
	Escribir  "Cual es tu apellido? "; 
	Leer surName;
	
    Escribir "Cual es tu nombre?"; 
	Leer Name;
	
	Escribir "Cual es tu edad?"; 
	Leer age; 
	
	Escribir "Cuanto pesas?"; 
	Leer weight; 
	
	escribir "Sabes como convertir libras a kg?"; 
	Leer KG; 
	
	Escribir "Recuerdas cuantos  dias tiene un año?"; 
	leer dayYears; 
	
	age <- dayYears*age;
	
	weight <-weight/KG; 
	
	Escribir "Tu edad en dias es:", age;
	
	Escribir " Pesas:", weight; 
FinAlgoritmo
