Algoritmo calculadora
	// definir variables
	Definir opcionCalculo Como Entero
	Definir numeroUno, numeroDos, resultado Como Real
	Definir continuar Como Cadena
	// opciones de calculo que puede realizar el usuario
	Repetir
		Escribir 'Calculadora B�sica'
		Escribir 'Seleccione una opci�n:'
		Escribir '1. Suma'
		Escribir '2. Resta'
		Escribir '3. Multiplicaci�n'
		Escribir '4. Divisi�n'
		Leer opcionCalculo
		// procedimiento para los diferentes calculos
		Si opcionCalculo>=1 Y opcionCalculo<=4 Entonces
			Escribir 'Ingrese el primer n�mero:'
			Leer numeroUno
			Escribir 'Ingrese el segundo n�mero:'
			Leer numeroDos
			Seg�n opcionCalculo Hacer
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
						Escribir 'Error: Divisi�n por cero no permitida'
					FinSi
			FinSeg�n
		SiNo
			Escribir 'Opci�n inv�lida'
		FinSi
		Repetir
			Escribir '�Desea realizar otra operaci�n? (y/n)'
			Leer continuar
		Hasta Que continuar='y' O continuar='Y' O continuar='n' O continuar='N'
	Hasta Que continuar='n' O continuar='N'
FinAlgoritmo
