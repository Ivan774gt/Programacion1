Algoritmo calculadora
	// definir variables
	Definir opcionCalculo Como Entero
	Definir numeroUno, numeroDos, resultado Como Real
	Definir continuar Como Cadena
	// opciones de calculo que puede realizar el usuario
	Repetir
		Escribir 'Calculadora Básica'
		Escribir 'Seleccione una opción:'
		Escribir '1. Suma'
		Escribir '2. Resta'
		Escribir '3. Multiplicación'
		Escribir '4. División'
		Leer opcionCalculo
		// procedimiento para los diferentes calculos
		Si opcionCalculo>=1 Y opcionCalculo<=4 Entonces
			Escribir 'Ingrese el primer número:'
			Leer numeroUno
			Escribir 'Ingrese el segundo número:'
			Leer numeroDos
			Según opcionCalculo Hacer
				1:
					resultado <- numeroUno+numeroDos
					Escribir 'Resultado: ', resultado
				2:
					resultado <- numeroUno-numeroDos
					Escribir 'Resultado: ', resultado
				3:
					resultado <- numeroUno*numeroDos
					Escribir 'Resultado: ', resultado
				4:
					Si numeroDos<>0 Entonces
						resultado <- numeroUno/numeroDos
						Escribir 'Resultado: ', resultado
					SiNo
						Escribir 'Error: División por cero no permitida'
					FinSi
			FinSegún
		SiNo
			Escribir 'Opción inválida'
		FinSi
		Repetir
			Escribir '¿Desea realizar otra operación? (y/n)'
			Leer continuar
		Hasta Que continuar='y' O continuar='Y' O continuar='n' O continuar='N'
	Hasta Que continuar='n' O continuar='N'
FinAlgoritmo
