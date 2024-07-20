#include <stdio.h>

int main() {
    int Aarrivalh, Aarrivalm, Adepartureh, Adeparturem;
    int Barrivalh, Barrivalm, Bdepartureh, Bdeparturem;
    int Carrivalh, Carrivalm, Cdepartureh, Cdeparturem;

    // Train A times input and validation
    printf("Train A arrival time (hh:mm):\n");
    if (scanf("%d:%d", &Aarrivalh, &Aarrivalm) != 2 || Aarrivalh > 23 || Aarrivalh < 0 || Aarrivalm > 59 || Aarrivalm < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Train A departure time (hh:mm):\n");
    if (scanf("%d:%d", &Adepartureh, &Adeparturem) != 2 || Adepartureh > 23 || Adepartureh < 0 || Adeparturem > 59 || Adeparturem < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    // Train B times input and validation
    printf("Train B arrival time (hh:mm):\n");
    if (scanf("%d:%d", &Barrivalh, &Barrivalm) != 2 || Barrivalh > 23 || Barrivalh < 0 || Barrivalm > 59 || Barrivalm < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Train B departure time (hh:mm):\n");
    if (scanf("%d:%d", &Bdepartureh, &Bdeparturem) != 2 || Bdepartureh > 23 || Bdepartureh < 0 || Bdeparturem > 59 || Bdeparturem < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    // Train C times input and validation
    printf("Train C arrival time (hh:mm):\n");
    if (scanf("%d:%d", &Carrivalh, &Carrivalm) != 2 || Carrivalh > 23 || Carrivalh < 0 || Carrivalm > 59 || Carrivalm < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Train C departure time (hh:mm):\n");
    if (scanf("%d:%d", &Cdepartureh, &Cdeparturem) != 2 || Cdepartureh > 23 || Cdepartureh < 0 || Cdeparturem > 59 || Cdeparturem < 0) {
        printf("Invalid input.\n");
        return 0;
    }

    // Convert arrival and departure times to minutes since midnight
    int AarrivalTimeInMinutes = Aarrivalh * 60 + Aarrivalm;
    int AdepartureTimeInMinutes = Adepartureh * 60 + Adeparturem;
    int BarrivalTimeInMinutes = Barrivalh * 60 + Barrivalm;
    int BdepartureTimeInMinutes = Bdepartureh * 60 + Bdeparturem;
    int CarrivalTimeInMinutes = Carrivalh * 60 + Carrivalm;
    int CdepartureTimeInMinutes = Cdepartureh * 60 + Cdeparturem;

    // Check transfers for Train A
    if (AarrivalTimeInMinutes + 5 <= BdepartureTimeInMinutes && AarrivalTimeInMinutes + 180 >= BarrivalTimeInMinutes
        && AarrivalTimeInMinutes + 5 <= CdepartureTimeInMinutes && AarrivalTimeInMinutes + 180 >= CarrivalTimeInMinutes) {
        puts("Can change to both B and C from A");
    } else if (AarrivalTimeInMinutes + 5 <= BdepartureTimeInMinutes && AarrivalTimeInMinutes + 180 >= BarrivalTimeInMinutes) {
        puts("Can change to B from A");
    } else if (AarrivalTimeInMinutes + 5 <= CdepartureTimeInMinutes && AarrivalTimeInMinutes + 180 >= CarrivalTimeInMinutes) {
        puts("Can change to C from A");
    }

    // Check transfers for Train B
    if (BarrivalTimeInMinutes + 5 <= AdepartureTimeInMinutes && BarrivalTimeInMinutes + 180 >= AarrivalTimeInMinutes
        && BarrivalTimeInMinutes + 5 <= CdepartureTimeInMinutes && BarrivalTimeInMinutes + 180 >= CarrivalTimeInMinutes) {
        puts("Can change to both A and C from B");
    } else if (BarrivalTimeInMinutes + 5 <= AdepartureTimeInMinutes && BarrivalTimeInMinutes + 180 >= AarrivalTimeInMinutes) {
        puts("Can change to A from B");
    } else if (BarrivalTimeInMinutes + 5 <= CdepartureTimeInMinutes && BarrivalTimeInMinutes + 180 >= CarrivalTimeInMinutes) {
        puts("Can change to C from B");
    }

    // Check transfers for Train C
    if (CarrivalTimeInMinutes + 5 <= AdepartureTimeInMinutes && CarrivalTimeInMinutes + 180 >= AarrivalTimeInMinutes
        && CarrivalTimeInMinutes + 5 <= BdepartureTimeInMinutes && CarrivalTimeInMinutes + 180 >= BarrivalTimeInMinutes) {
        puts("Can change to both A and B from C");
    } else if (CarrivalTimeInMinutes + 5 <= AdepartureTimeInMinutes && CarrivalTimeInMinutes + 180 >= AarrivalTimeInMinutes) {
        puts("Can change to A from C");
    } else if (CarrivalTimeInMinutes + 5 <= BdepartureTimeInMinutes && CarrivalTimeInMinutes + 180 >= BarrivalTimeInMinutes) {
        puts("Can change to B from C");
    }

    return 0;
}
