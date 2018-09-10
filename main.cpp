#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include "AB.h"
#include <time.h>

int main() {
    char name_archive[80];
    FILE *file;
    char word[50];

    printf("Enter file name:\n");
    scanf("%s", name_archive);

    file = fopen("texto.txt", "r");

    if (file == NULL)
        printf("Can't open %s for reading.\n", name_archive);
    else
    {
        while (fscanf(file, "%s", word) != EOF)
        {
            printf("%s\n", word);
        }
        fclose(file);
    }
    
    printf("=== ARVORE DE BUSCA DE TXT ===\n\n");

    printf("=== QUANTIDADE DE PALAVRAS NO TXT ===\n\n");
        

    printf("=== MAIOR PALAVRA DO TEXTO ===\n\n");

    printf("=== LISTA DE PALAVRAS DISTINTAS DO TXT E A QUANTIDADE DE VEZES QUE A PALAVRA APARECE ===\n\n");

    return 0;
}