Algoritmo notas
	definir	 parcial1 como entero
	definir parcial2 como entero
	definir parcialfinal Como entero
	definir actividades Como entero
	definir resultado  Como entero
	Escribir "Ingresa la nota del primer parcial"
	Leer parcial1
	Escribir "Ingresa la nota del segundo parcial"
	Leer parcial2
	Escribir "Ingresa la nota del parcial final"
	Leer parcialfinal
	Escribir "Ingresa el total de actividades"
	Leer actividades
	resultado<-parcial1+parcial2+parcialfinal+actividades
	Escribir "Tu nota final es: ", resultado
	Si resultado >= 61  Entonces
		escribir "Felicidades ha aprobado la materia"
	SiNo
		escribir "Lo siento nota no alcanzada"
	Fin Si
	FinAlgoritmo