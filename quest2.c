#include <stdio.h>

float tempo;

int main(){

    printf("digite um numero que represente a hora :\n ");
    scanf("%f",&tempo);
    int hora = (int)tempo;
    int minutos =(tempo - hora)*60;
    int horap_minutos=hora*60; 

    int totalmin = minutos + horap_minutos;
    int totalseg = totalmin*60;

    printf("a hora digitada por voce foi %.2f, ou seja %d horas e %d minutos\n",tempo,hora,minutos);
    printf("%d horas e %d minutos equivalem a %d minutos e tambem %d segundos\n ",hora,minutos,totalmin,totalseg);
    


}