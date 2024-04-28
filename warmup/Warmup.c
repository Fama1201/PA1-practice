#include <stdio.h>
#include <ctype.h> // Para usar la función isalpha

int main() {
    char ingreso;
    
    printf("ml' nob:\n");
    scanf(" %c", &ingreso); // Leemos un carácter y un entero

    // Verificar si el ingreso es una letra
    if (isalpha(ingreso)) {
        printf("Neh mi'\n");
    } else if (ingreso >= '0' && ingreso <= '8') {
        // Si es un número entre 0 y 8, convertimos el carácter a entero
        int numero = ingreso - '0';

        switch (numero) {
            case 0:
                printf("Qapla'\nnoH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'\n");
                break;
            case 1:
                printf("Qapla'\nbortaS bIr jablu'DI' reH QaQqu' nay'.\n");
                break;
            case 2:
                printf("Qapla'\nQu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.\n");
                break;
            case 3:
                printf("Qapla'\nbISeH'eghlaH'be'chugh latlh Dara'laH'be'.\n");
                break;
            case 4:
                printf("Qapla'\nqaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.\n");
                break;
            case 5:
                printf("Qapla'\nSuvlu'taHvIS yapbe' HoS neH.\n");
                break;
            case 6:
                printf("Qapla'\nHa'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.\n");
                break;
            case 7:
                printf("Qapla'\nHeghlu'meH QaQ jajvam.\n");
                break;
            case 8:
                printf("Qapla'\nleghlaHchu'be'chugh mIn lo'laHbe' taj jej.\n");
                break;
            default:
                printf("Qih mi'\n"); // Imprimir mensaje de error si el número no está en el rango
                break;
        }
    } else {
        printf("Qih mi'\n"); // Imprimir mensaje de error si el ingreso no es ni letra ni número
    }

    return 0;
}
