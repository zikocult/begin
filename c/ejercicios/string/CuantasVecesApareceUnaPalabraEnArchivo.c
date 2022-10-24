#include <stdio.h>
#include <string.h>

int main() {
    FILE* Archivo = fopen("Prueba.txt","r");
    int Apariciones = 0; //! Es el contador
    if (Archivo == NULL)
        printf("\nError al intentar acceder al archivo");
    else{
        char TextoRecibido[1000];
        char PalabraBuscada[] = "Guillem"; //* Se sustituye por las palabras que elegiste
        while (fscanf(Archivo,"%s",TextoRecibido) != EOF){
        if (strcmp(TextoRecibido,PalabraBuscada) == 0)
            Apariciones++;
    }
    }

    fclose(Archivo);
    printf("Apariciones de la palabra: %d\n",Apariciones);

    return 0;
}






