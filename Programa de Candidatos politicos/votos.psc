Algoritmo EleccionPartidaria
	Escribir 'Ingrese el número de candidatos: '
	Leer numCandidatos
	Dimensionar candidatos(numCandidatos)
	Dimensionar votos(numCandidatos,5)
	Dimensionar totalVotos(numCandidatos)
	Para i<-0 Hasta numCandidatos-1 Hacer
		Escribir 'Ingrese el nombre del candidato ', i+1, ': '
		Leer candidatos[i]
		totalVotos[i] <- 0
	FinPara
	Para j<-0 Hasta 4 Hacer
		Para i<-0 Hasta numCandidatos-1 Hacer
			votos[i,j]<-Aleatorio(0,50)
			totalVotos[i] <- totalVotos[i]+votos[i,j]
		FinPara
	FinPara
	Escribir '\nTabla de votos:'
	Escribir '----------------------------------------------'
	Escribir '| Candidato | Voto 1 | Voto 2 | Voto 3 | Voto 4 | Voto 5 | Total |'
	Escribir '----------------------------------------------'
	Para i<-0 Hasta numCandidatos-1 Hacer
		Escribir '| ', candidatos[i], ' | ', votos[i,0], ' | ', votos[i,1], ' | ', votos[i,2], ' | ', votos[i,3], ' | ', votos[i,4], ' | ', totalVotos[i], ' |'
		Escribir '----------------------------------------------'
	FinPara
	maxVotos <- totalVotos[0]
	minVotos <- totalVotos[0]
	ganador <- 0
	perdedor <- 0
	Para i<-1 Hasta numCandidatos-1 Hacer
		Si totalVotos[i]>maxVotos Entonces
			maxVotos <- totalVotos[i]
			ganador <- i
		FinSi
		Si totalVotos[i]<minVotos Entonces
			minVotos <- totalVotos[i]
			perdedor <- i
		FinSi
	FinPara
	Escribir '\nEl candidato ganador es: ', candidatos[ganador], ' con ', maxVotos, ' votos.'
	Escribir 'El candidato con menos votos es: ', candidatos[perdedor], ' con ', minVotos, ' votos.'
FinAlgoritmo
