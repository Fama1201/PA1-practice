//DEBER 1 PA1
#include <stdio.h>

int main (){

int Aarrivalh, Aarrivalm, Adepartureh ,Adeparturem;
int Barrivalh, Barrivalm, Bdepartureh, Bdeparturem;
int Carrivalh,  Carrivalm, Cdepartureh, Cdeparturem;

printf("Train A arrival time:\n");
if(scanf("%d:%d",&Aarrivalh,&Aarrivalm)!=2|| Aarrivalh>24||Aarrivalh<0||Aarrivalm>59||Aarrivalm<0){ //Validacion de horario
    printf("Invalid input\n");
    return 0;
}
printf("Train A departure time:\n");
if(scanf("%d:%d",&Adepartureh ,&Adeparturem)!=2 || Adepartureh>24 || Adepartureh<0 || Adeparturem>59 ||Adeparturem<0){ //Validacion de horario
    printf("Invalid input\n");
    return 0;
}
printf("Train B arrival time:\n");
if(scanf("%d:%d",&Barrivalh,&Barrivalm)!=2|| Barrivalh>24 || Barrivalh<0|| Barrivalm>59 || Barrivalm< 0){ //Validacion de horario
    printf("Invalid input\n");
    return 0;
}
printf("Train B departure time:\n");
if(scanf("%d:%d",&Bdepartureh,&Bdeparturem)!=2 || Bdepartureh>24 || Bdepartureh<0|| Bdeparturem>59||Bdeparturem<0){
    printf("Invalid input\n");
    return 0;
}
printf("Train C arrival time:\n");
if(scanf("%d:%d",&Carrivalh,&Carrivalm)!=2 || Carrivalh>24 || Carrivalh<0 || Carrivalm>59 ||Carrivalm<0){
    printf("Invalid input\n");
    return 0;
}
printf("Train C departure time:\n");
if(scanf("%d:%d",&Cdepartureh, &Cdeparturem)!=2 || Cdepartureh>24 ||Cdepartureh<0 ||Cdeparturem>59 || Cdeparturem<0){
    printf ("Invalid input\n");
    return 0;
}


// MENSAJE PARA TREN A

if()











return 0;

}