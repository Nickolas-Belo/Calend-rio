#include <stdio.h>
#include<stdbool.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int dia_semana(int q, int m, int y){
	int h, k, j;
	m = (m < 3) ? (m + 12) : m;
	y = ((m > 12) ? (y - 1) : y);
	k = y % 100;
	j = y / 100;
	
	h = (q + ((m + 1) * 26 / 10) + (k + (k / 4)) + (j / 4) + (5 * j)) % 7;
	return h;
}

int calcula_dias(int ano){
	int dia, mes, resultado;
    char stringSemana[14];
	int numdias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(mes = 1; mes <= 12; mes++){
		for(dia = 1; dia <= numdias[mes - 1]; dia++){
            resultado = dia_semana(dia, mes, ano);
            if(resultado == 0)
                strcpy(stringSemana, "Sabado");
            else if(resultado == 1)
                strcpy(stringSemana, "Domingo");
            else if(resultado == 2)
                strcpy(stringSemana, "Segunda");
            else if(resultado == 3)
                strcpy(stringSemana, "Terca");
            else if(resultado == 4)
                strcpy(stringSemana, "Quarta");
            else if(resultado == 5)
                strcpy(stringSemana, "Quinta");
            else if(resultado == 6)
                strcpy(stringSemana, "Sexta");
			printf("%d/%d - dia_semana = %s\n", dia, mes, stringSemana);
		}
	}
}

int AnoBissexto(int Ano){
	if((Ano % 400 == 0) || (Ano % 100 != 0) && (Ano % 4 == 0))
		return 1;
	else
		return 0;
}

void Calculacinzas(int a, int dia_pascoa, int mes_pascoa, int cinzas[2],int Dias_mes[12]){
	int i=0;
	cinzas[0]=dia_pascoa;
	cinzas[1]= mes_pascoa;
	while(i<46){
		i++;
		cinzas[0] = cinzas[0] -1;
		if(cinzas[0]==0){
			cinzas[1] = cinzas[1]-1;
			cinzas[0]= Dias_mes[cinzas[1] -1];
		}
			
	}
}

int main(){



int ano,c,n,k,i,j,l,m,d,a,somador,p,Cristo_dia,Cristo_mes;
int dia_fev=0;
bool bissexto;
char mes;




int cinzas[2];
int DiasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
if(AnoBissexto(ano))
	DiasMes[1] = 29;
Calculacinzas(ano, d, m, cinzas, DiasMes);

char segunda,terca,quarta,quinta,sexta,sabado,domingo;

segunda= 2;
terca=3;
quarta=4;
quinta=5;
sexta=6;
sabado=0;
domingo=1;

setlocale(LC_ALL,"");
		
printf("Digite o ano: ");
scanf("%d", &ano);

calcula_dias(ano);

printf("Janeiro\n\n");


int dias_janeiro [31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_janeiro=0;
for(dia_janeiro=0;dia_janeiro<7;++dia_janeiro)
	printf("%d ",dias_janeiro[dia_janeiro]);
printf("\n");
for(dia_janeiro=7;dia_janeiro<14;++dia_janeiro)
	printf("%d ",dias_janeiro[dia_janeiro]);
printf("\n");
for(dia_janeiro=14;dia_janeiro<21;++dia_janeiro)
	printf("%d ",dias_janeiro[dia_janeiro]);
printf("\n");
for(dia_janeiro=21;dia_janeiro<28;++dia_janeiro)
	printf("%d ",dias_janeiro[dia_janeiro]);
printf("\n");
for(dia_janeiro=28;dia_janeiro<31;++dia_janeiro)
	printf("%d ",dias_janeiro[dia_janeiro]);
printf("\n\n");
	
printf("Dia 1- Confraternização Universal\n\n");
	
printf("Fevereiro\n\n");


if (ano % 400 == 0) {
	bissexto = true;		
}
else if ((ano % 4 == 0) && (ano % 100 != 0)) {
	bissexto = true;		
}
else {
	bissexto = false;
}
	
if (bissexto== true){
	int dias_fevereiro[29]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
	for(dia_fev=0;dia_fev<7;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=7;dia_fev<14;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=14;dia_fev<21;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=21;dia_fev<28;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=28;dia_fev<29;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n\n");
}
else{
	
	
	int dias_fevereiro[28]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
	for(dia_fev=0;dia_fev<7;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=7;dia_fev<14;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=14;dia_fev<21;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n");
	for(dia_fev=21;dia_fev<28;++dia_fev)
		printf("%d ",dias_fevereiro[dia_fev]);
printf("\n\n");
			
}

c = (ano/100);
n = (ano)-(19*(ano/19));
k = (c - 17)/(25);
i = (c)- (c/4) - ((c-k)/3) +(19*n) + (15);
i = i - (30*(i/30));
i = i - (i/28)*(1-(i/28))*(29/(i+1))*((21-n)/11);
j = (ano) + (ano/4)+ (i) + (2)-(c) + (c/4);
j = (j) - (7*(j/7));
l = (i - j);
m = (3)+ ((l+40)/44);
d = (l + 28)- (31*(m/4));

Cristo_mes = m;
if(m==4){
	if(d==1){
		Cristo_dia=30;
		Cristo_mes=m-1;
	}
	else if(d==2){
		Cristo_dia=31;
		Cristo_mes=m-1;
	}
	else
		Cristo_dia=d-2;
}
else if(m==3)
	Cristo_dia=d-2;

Calculacinzas(ano, d, m, cinzas, DiasMes);

if(cinzas[1]==2)
	printf("Dia %d - Cinzas\n\n", cinzas[0]);

printf("Março\n\n");

int dias_marco[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_mar=0;
for(dia_mar=0;dia_mar<7;++dia_mar)
	printf("%d ",dias_marco[dia_mar]);
printf("\n");
for(dia_mar=7;dia_mar<14;++dia_mar)
	printf("%d ",dias_marco[dia_mar]);
printf("\n");
for(dia_mar=14;dia_mar<21;++dia_mar)
	printf("%d ",dias_marco[dia_mar]);
printf("\n");
for(dia_mar=21;dia_mar<28;++dia_mar)
	printf("%d ",dias_marco[dia_mar]);
printf("\n");
for(dia_mar=28;dia_mar<31;++dia_mar)
	printf("%d ",dias_marco[dia_mar]);
printf("\n\n");

if(Cristo_mes==3)
	printf("%d- Paixão de Cristo\n\n",Cristo_dia);
if(m==3)
	printf("%d - Pascoa\n\n",d);
	
Calculacinzas(ano, d, m, cinzas, DiasMes);

if(cinzas[1]==3)
	printf("Dia %d - Cinzas\n\n", cinzas[0]);

printf("Dia 20 -Equinócio de outono\n\n");	
printf("Dia 20 -Início do outono\n\n");
		
printf("Abril\n\n");
		
int dias_abril[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int dia=0;
for(dia=0;dia<7;++dia)
	printf("%d ",dias_abril[dia]);
printf("\n");
for(dia=7;dia<14;++dia)
	printf("%d ",dias_abril[dia]);
printf("\n");
for(dia=14;dia<21;++dia)
	printf("%d ",dias_abril[dia]);
printf("\n");
for(dia=21;dia<28;++dia)
	printf("%d ",dias_abril[dia]);
printf("\n");
for(dia=28;dia<30;++dia)
	printf("%d ",dias_abril[dia]);
printf("\n\n");

if(Cristo_mes==4)
	printf("%d- Paixão de Cristo\n\n",Cristo_dia);
if(m==4)
	printf("%d- Pascoa\n\n",d);

printf("Maio\n\n");
		
int dias_maio[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_maio=0;
for(dia_maio=0;dia_maio<7;++dia_maio)
	printf("%d ",dias_maio[dia_maio]);
printf("\n");
for(dia_maio=7;dia_maio<14;++dia_maio)
	printf("%d ",dias_maio[dia_maio]);
printf("\n");
for(dia_maio=14;dia_maio<21;++dia_maio)
	printf("%d ",dias_maio[dia_maio]);
printf("\n");
for(dia_maio=21;dia_maio<28;++dia_maio)
	printf("%d ",dias_maio[dia_maio]);
printf("\n");
	for(dia_maio=28;dia_maio<31;++dia_maio)
		printf("%d ",dias_maio[dia_maio]);
printf("\n\n");
		
printf("Junho\n\n");
		
int dias_junho[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int dia_junho=0;
for(dia_junho=0;dia_junho<7;++dia_junho)
	printf("%d ",dias_junho[dia_junho]);
printf("\n");
for(dia_junho=7;dia_junho<14;++dia_junho)
	printf("%d ",dias_junho[dia_junho]);
printf("\n");
for(dia_junho=14;dia_junho<21;++dia_junho)
	printf("%d ",dias_junho[dia_junho]);
printf("\n");
for(dia_junho=21;dia_junho<28;++dia_junho)
	printf("%d ",dias_junho[dia_junho]);
printf("\n");
for(dia_junho=28;dia_junho<30;++dia_junho)
	printf("%d ",dias_junho[dia_junho]);
printf("\n\n");
		
printf("Dia 21 -Início do inverno\n\n");
		
printf("Julho\n\n");
		
int dias_julho[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_julho=0;
for(dia_julho=1;dia_julho<7;++dia_julho)
	printf("%d " ,dias_julho[dia_julho]);
printf("\n");
for(dia_julho=7;dia_julho<14;++dia_julho)
	printf("%d " ,dias_julho[dia_julho]);
printf("\n");
for(dia_julho=14;dia_julho<21;++dia_julho)
	printf("%d ", dias_julho[dia_julho]);
printf("\n");
for(dia_julho=21;dia_julho<28;++dia_julho)
	printf("%d " ,dias_julho[dia_julho]);
printf("\n");
for(dia_julho=28;dia_julho<31;++dia_julho)
	printf("%d " ,dias_julho[dia_julho]);
printf("\n\n");
		
printf("Agosto\n\n");
		
int dias_agosto[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_agosto=0;
for(dia_agosto=0;dia_agosto<7;++dia_agosto)
	printf("%d " ,dias_agosto[dia_agosto]);
printf("\n");
for(dia_agosto=7;dia_agosto<14;++dia_agosto)
	printf("%d " ,dias_agosto[dia_agosto]);
printf("\n");
for(dia_agosto=14;dia_agosto<21;++dia_agosto)
	printf("%d " ,dias_agosto[dia_agosto]);
printf("\n");
for(dia_agosto=21;dia_agosto<28;++dia_agosto)
	printf("%d " ,dias_agosto[dia_agosto]);
printf("\n");
for(dia_agosto=28;dia_agosto<31;++dia_agosto)
	printf("%d " ,dias_agosto[dia_agosto]);
printf("\n\n");
		
printf("Dia 20- Aniversário de São Bernardo\n\n-");
	
printf("Setembro\n\n");
	
int dias_setembro[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int dia_setembro=0;
for(dia_setembro=0;dia_setembro<7;++dia_setembro)
	printf("%d " ,dias_setembro[dia_setembro]);
printf("\n");
for(dia_setembro=7;dia_setembro<14;++dia_setembro)
	printf("%d ",dias_setembro[dia_setembro]);
printf("\n");
for(dia_setembro=14;dia_setembro<21;++dia_setembro)
	printf("%d ",dias_setembro[dia_setembro]);
printf("\n");
for(dia_setembro=21;dia_setembro<28;++dia_setembro)
	printf("%d ",dias_setembro[dia_setembro]);
printf("\n");
for(dia_setembro=28;dia_setembro<30;++dia_setembro)
	printf("%d ",dias_setembro[dia_setembro]);
printf("\n\n");
		
printf("Dia 22 -Equinócio de primavera\n\n");	
printf("Dia 22 -Início da primavera\n\n");
		
printf("Outubro\n\n");
		
int dias_outubro[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_outubro=0;
for(dia_outubro=0;dia_outubro<7;++dia_outubro)
	printf("%d ",dias_outubro[dia_outubro]);
printf("\n");
for(dia_outubro=7;dia_outubro<14;++dia_outubro)
	printf("%d ",dias_outubro[dia_outubro]);
printf("\n");
for(dia_outubro=14;dia_outubro<21;++dia_outubro)
	printf("%d ",dias_outubro[dia_outubro]);
printf("\n");
for(dia_outubro=21;dia_outubro<28;++dia_outubro)
	printf("%d ",dias_outubro[dia_outubro]);
printf("\n");
for(dia_outubro=28;dia_outubro<31;++dia_outubro)
	printf("%d ",dias_outubro[dia_outubro]);
printf("\n\n");
		
printf("Novembro\n\n");
		
int dias_novembro[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int dia_novembro=0;
for(dia_novembro=0;dia_novembro<7;++dia_novembro)
	printf("%d ",dias_novembro[dia_novembro]);
printf("\n");
for(dia_novembro=7;dia_novembro<14;++dia_novembro)
	printf("%d ",dias_novembro[dia_novembro]);
printf("\n");
for(dia_novembro=14;dia_novembro<21;++dia_novembro)
	printf("%d ",dias_novembro[dia_novembro]);
printf("\n");
for(dia_novembro=21;dia_novembro<28;++dia_novembro)
	printf("%d ",dias_novembro[dia_novembro]);
printf("\n");
for(dia_novembro=28;dia_novembro<30;++dia_novembro)
	printf("%d ",dias_novembro[dia_novembro]);
printf("\n\n");
		
printf("Dezembro\n");
		
int dias_dezembro[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dia_dezembro=0;
for(dia_dezembro=0;dia_dezembro<7;++dia_dezembro)
	printf("%d ",dias_dezembro[dia_dezembro]);
printf("\n");
for(dia_dezembro=7;dia_dezembro<14;++dia_dezembro)
	printf("%d ",dias_dezembro[dia_dezembro]);
printf("\n");
for(dia_dezembro=14;dia_dezembro<21;++dia_dezembro)
	printf("%d ",dias_dezembro[dia_dezembro]);
printf("\n");
for(dia_dezembro=21;dia_dezembro<28;++dia_dezembro)
	printf("%d ",dias_dezembro[dia_dezembro]);
printf("\n");
for(dia_dezembro=28;dia_dezembro<31;++dia_dezembro)
	printf("%d ",dias_dezembro[dia_dezembro]);
printf("\n\n");
		
printf("Dia 21 -Início do verão\n");
	
	
printf("Dia 25-Natal");
	
	return 0;
}


