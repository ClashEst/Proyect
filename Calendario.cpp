//Programa de calendario.



#include <stdio.h>

main()
{

int j;
int k;
int i;
int m;
int ano;
int mes;
int c=0;
int cant;
int dia;
int modulo_mes;



printf("programa que imprime un calendario condensado del mes\n");
printf("en el rango de 1960 a 2021\n");


/*---------*/
//parte que lee el año , determina si es bisiesto
printf("año \n");
scanf("%d",&ano);

if(ano>=1960&&ano<=2021){
printf("año correcto\n");
printf("\n");

if((ano%4==0) && (ano%100!=0) || (ano%400==0)){
printf("bisiesto\n");
c=29;
}
else
c=28;
//parte que lee el mes, y asigna la cantidad de dias correspondientes
printf("1-enero,2-febrero,3-marzo,4-abril\n");
printf("5-mayo,6-junio,7-julio,8-agosto\n");
printf("9-septiembre,10-octubre,11-noviembre,12-diciembre\n");

printf("mes\n");
scanf("%d",&mes);
printf("\n");

switch(mes)
{
case 4: case 6: case 9: case 11:
cant=30;
break;
case 2:
cant=c;
break;
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
cant=31;
break;
}


}
else
printf("año incorrecto<rango(2006-2011)\n");





/*------------*/


//para calcular el primer dia de un mes del año....


if((ano%4==0) && (ano%100!=0) || (ano%400==0))
{
printf("bisiesto\n");

if(mes==1)
modulo_mes=0;
if(mes==2)
modulo_mes=3;
if(mes==3)
modulo_mes=4;
if(mes==4)
modulo_mes=0;
if(mes==5)
modulo_mes=2;
if(mes==6)
modulo_mes=5;
if(mes==7)
modulo_mes=0;
if(mes==8)
modulo_mes=3;
if(mes==9)
modulo_mes=6;
if(mes==10)
modulo_mes=1;
if(mes==11)
modulo_mes=4;
if(mes==12)
modulo_mes=6;




}
else
{
if(mes==1)
modulo_mes=0;
if(mes==2)
modulo_mes=3;
if(mes==3)
modulo_mes=3;
if(mes==4)
modulo_mes=6;
if(mes==5)
modulo_mes=1;
if(mes==6)
modulo_mes=4;
if(mes==7)
modulo_mes=6;
if(mes==8)
modulo_mes=2;
if(mes==9)
modulo_mes=5;
if(mes==10)
modulo_mes=0;
if(mes==11)
modulo_mes=3;
if(mes==12)
modulo_mes=5;



}



dia= ((ano-1)%7+ ((ano-1)/4 -(3*((ano-1)/100+1)/4))%7+modulo_mes+1%7)%7;


printf("primer dia del mes\n");
printf("dia:%d\n",dia);
printf("0-domingo,1-lunes,2-martes,3-miercoles\n");
printf("4-jueves,5-viernes,6-sabado\n");

/*------------*/

printf("\n");
printf("\n");

if(mes==1)
printf("\t\tenero\t%d",ano);
if(mes==2)
printf("\t\tfebrero\t%d",ano);
if(mes==3)
printf("\t\tmarzo\t%d",ano);
if(mes==4)
printf("\t\tabril\t%d",ano);
if(mes==5)
printf("\t\tmayo\t%d",ano);
if(mes==6)
printf("\t\tjunio\t%d",ano);
if(mes==7)
printf("\t\tjulio\t%d",ano);
if(mes==8)
printf("\t\tagosto\t%d",ano);
if(mes==9)
printf("\t\tseptiembre\t%d",ano);
if(mes==10)
printf("\t\toctubre\t%d",ano);
if(mes==11)
printf("\t\tnoviembre\t%d",ano);
if(mes==12)
printf("\t\tdiciembre\t%d",ano);
printf("\n");
printf("Do\tLu\tMar\tMier\tJue\tVier\tSab\n");


/*------------*/
//parte que imprime los dias del mes
for(j=1;j<=5;j++){
for(m=0;m<dia;m++)
printf("\t");
for(k=1;k<=7;k++)

for(i=1;i<=cant;i++)

if(j<=1)
if(k>=7)
{

if(i==8-dia||i==15-dia||i==22-dia||i==29-dia){
printf("\n");

printf("%d\t",i);
}
else
printf("%d\t",i);
}

printf("\n");
}









}
