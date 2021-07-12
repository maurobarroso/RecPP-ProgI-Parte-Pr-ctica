#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;



void actualizarRecuperados (ePais pais, int recuperados);
void invertirCadena(char cadena[]);


void actualizarRecuperados(ePais pais, int recuperados) {
    pais.recuperados += recuperados;
}

void invertirCadena(char texto[]) {
    for(int i=6 ; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    printf("\n\n");
}


void ordenarCaracteres(char cadena[]) {

    char aux;

    for(int i=0; i<9-1; i++) {
        for(int j = i+1; j<9; j++) {
            if(cadena[i] > cadena[j]){
                aux=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=aux;
            }
        }
    }

    for(int i=0; i<9; i++) {
        printf("%c", cadena[i]);
    }


}

int main()
{
    ePais pais;
    int recuperados = 5;
    char palabra[9] = "algoritmo";
    char cadena[7] = "UTN-FRA";


    // 2 - Invertir cadena
    invertirCadena(cadena);

    // 3 - ordenarCaracteres
    ordenarCaracteres(palabra);

    // 1 - Actualizar recuperados
    actualizarRecuperados(pais, recuperados);

}
