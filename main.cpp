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
    int count = 0;
    char biggestWord[50];
    Arvore *raiz = NULL;

    printf("=== BINARY SEARCH TREE ===\n\n");
    printf("Enter file name:\n");
    scanf("%s", name_archive);

    file = fopen("texto.txt", "r");

    if (file == NULL)
        printf("Can't open %s for reading.\n", name_archive);
    else {
        fgets(biggestWord, 50, file);
        printf("%s\n aquiiiiii a maior palavra", biggestWord);


        //throw to an binary tree
        raiz = cria(*biggestWord);
        

        




        while (fscanf(file, "%s", word) != EOF) {
            if(strlen(biggestWord) < strlen(word)) {
                char wordt[50];
                strcpy(biggestWord, wordt);
                printf("%s\nFAUSTAO", wordt);
             } 
            printf("%s\n", word);
            count++;
        }
        fclose(file);
    }

    // while (count != 21240) {
        
    // }


    
    printf("=== QUANTIDADE DE PALAVRAS NO TXT ===\n\n");
    printf("%d\n",count);

    printf("=== MAIOR PALAVRA DO TEXTO ===\n\n");

    printf("=== LISTA DE PALAVRAS DISTINTAS DO TXT E A QUANTIDADE DE VEZES QUE A PALAVRA APARECE ===\n\n");

    return 0;
}