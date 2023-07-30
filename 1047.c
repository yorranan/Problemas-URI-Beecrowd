int main()
{	
	int hora_inicio, hora_fim, min_inicio, min_fim, horas, minutos;

    scanf("%d%d%d%d", &hora_inicio, &min_inicio, &hora_fim, &min_fim);

    if ((min_fim < min_inicio) && (hora_fim == hora_inicio)) {
        
        horas = 23;
        if (horas < 0) 
        horas = 1440 + horas;
        minutos = 60 - (min_inicio - min_fim);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
    else {
	horas = (hora_fim - hora_inicio)*60;
    if (horas < 0) 
        horas = 1440 + horas;
	minutos = (min_fim - min_inicio);
	minutos = (horas + minutos);
	horas = minutos/60;
	minutos = minutos%60;
    if ((horas == 0) && (minutos == 0)){
        horas = 24;
    }
	if (horas < 0){
		horas = 24 + horas;
    }
	if (minutos < 0){
		minutos = minutos*(-1);
    }
	if ((hora_inicio == hora_fim) && (min_inicio == min_fim)){
		horas = 24;
    }
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
	return 0;
}