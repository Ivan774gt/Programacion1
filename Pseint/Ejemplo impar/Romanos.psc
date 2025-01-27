Algoritmo Romanos
	
	//Revisor: Boris de Leon
	
	// leer el número
	Definir Numero como Numerico;
	Escribir "Ingrese un número entre 1 y 1000";
	Leer Numero;
	
	// controlar que sea válido para convertir
	Definir SePuedeConvertir Como Logico;
	SePuedeConvertir<-Verdadero;
	Si Numero=0 Entonces
		Escribir "No existe ningún símbolo para representar el 0";
		SePuedeConvertir<-Falso;
	FinSi
	Si Numero<>trunc(numero) Entonces
		Escribir "El número debe ser entero";
		SePuedeConvertir<-Falso;
	FinSi
	Si Numero>1000 Entonces
		Escribir "Muy alto";
		SePuedeConvertir<-Falso;
	FinSi
	Si Numero<0 Entonces
		Escribir "Debe ser positivo";
		SePuedeConvertir<-Falso;
	FinSi
	
	// realizar la conversión
	Si SePuedeConvertir Entonces		
		Si Numero=1000 Entonces
			Escribir "M";
		SiNo
			Dimension nu[10], nd[10], nc[10]; // notación para unidades, decenas y centenas
			Definir nu,nd,nc Como Caracter;
			nu[0]<-''; nu[1]<-'I'; nu[2]<-'II'; nu[3]<-'III'; nu[4]<-'IV'; nu[5]<-'V'; nu[6]<-'VI'; nu[7]<-'VII'; nu[8]<-'VIII'; nu[9]<-'IX';
			nd[0]<-''; nd[1]<-'X'; nd[2]<-'XX'; nd[3]<-'XXX'; nd[4]<-'XL'; nd[5]<-'L'; nd[6]<-'LX'; nd[7]<-'LXX'; nd[8]<-'LXXX'; nd[9]<-'XC';
			nc[0]<-''; nc[1]<-'C'; nc[2]<-'CC'; nc[3]<-'CCC'; nc[4]<-'CD'; nc[5]<-'D'; nc[6]<-'DC'; nc[7]<-'DCC'; nc[8]<-'DCCC'; nc[9]<-'CM';
			Definir centenas,decenas,unidades como numeros;
			centenas<-trunc(Numero/100) MOD 10;
			decenas<-trunc(Numero/10) MOD 10;
			unidades<-Numero MOD 10;
			Escribir nc[centenas],nd[decenas],nu[unidades];
		FinSi
	FinSi
	
FinAlgoritmo
