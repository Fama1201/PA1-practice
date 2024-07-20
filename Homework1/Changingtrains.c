//DEBER 1 PA1
#include <stdio.h>

int main (){

int Aarrivalh, Aarrivalm, Adepartureh ,Adeparturem;
int Barrivalh, Barrivalm, Bdepartureh, Bdeparturem;
int Carrivalh,  Carrivalm, Cdepartureh, Cdeparturem;

printf("Train A arrival time:\n");
if(scanf("%d:%d",&Aarrivalh,&Aarrivalm)!=2|| Aarrivalh>23||Aarrivalh<0||Aarrivalm>59||Aarrivalm<0){ //Validacion de horario
    printf("Invalid input.\n");
    return 0;
}
printf("Train A departure time:\n");
if(scanf("%d:%d",&Adepartureh ,&Adeparturem)!=2 || Adepartureh>23 || Adepartureh<0 || Adeparturem>59 ||Adeparturem<0){ //Validacion de horario
    printf("Invalid input.\n");
    return 0;
}
printf("Train B arrival time:\n");
if(scanf("%d:%d",&Barrivalh,&Barrivalm)!=2|| Barrivalh>23 || Barrivalh<0|| Barrivalm>59 || Barrivalm< 0){ //Validacion de horario
    printf("Invalid input.\n");
    return 0;
}
printf("Train B departure time:\n");
if(scanf("%d:%d",&Bdepartureh,&Bdeparturem)!=2 || Bdepartureh>23 || Bdepartureh<0|| Bdeparturem>59||Bdeparturem<0){
    printf("Invalid input.\n");
    return 0;
}
printf("Train C arrival time:\n");
if(scanf("%d:%d",&Carrivalh,&Carrivalm)!=2 || Carrivalh>23 || Carrivalh<0 || Carrivalm>59 ||Carrivalm<0){
    printf("Invalid input.\n");
    return 0;
}
printf("Train C departure time:\n");
if(scanf("%d:%d",&Cdepartureh, &Cdeparturem)!=2 || Cdepartureh>23 ||Cdepartureh<0 ||Cdeparturem>59 || Cdeparturem<0){
    printf ("Invalid input.\n");
    return 0;
}





    // Convertir los tiempos de llegada y salida a minutos desde medianoche
    int AarrivalTimeInMinutes = Aarrivalh * 60 + Aarrivalm;
    int AdepartureTimeInMinutes = Adepartureh * 60 + Adeparturem;
    int BarrivalTimeInMinutes = Barrivalh * 60 + Barrivalm;
    int BdepartureTimeInMinutes = Bdepartureh * 60 + Bdeparturem;
    int CarrivalTimeInMinutes = Carrivalh * 60 + Carrivalm;
    int CdepartureTimeInMinutes = Cdepartureh * 60 + Cdeparturem;


// verificar tren A

if(AarrivalTimeInMinutes+5<=BdepartureTimeInMinutes && AarrivalTimeInMinutes+5<=CdepartureTimeInMinutes){
    puts("Can change to B and C from A");
}else if(AarrivalTimeInMinutes+5<=BdepartureTimeInMinutes){
    puts("Can change to B from A");
}else if(AarrivalTimeInMinutes+5<=CdepartureTimeInMinutes){
    puts("Can change to C from A");
}








return 0;

}