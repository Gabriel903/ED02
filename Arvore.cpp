#include <stdlib.h>
#include <stdio.h>
#include "AB.h"

Arvore *cria(char valor) {
    Arvore *p;

    p = (Arvore *) malloc(sizeof(Arvore));
    p->valor[50] = valor;
    p->esq = NULL;
    p->dir = NULL;

    return p;
}

Arvore *localiza(Arvore *r, int valor) {
    if(r == NULL)
        return NULL;

    if(r->valor == valor)
        return r;

    Arvore *p;
    p = localiza(r->esq, valor);

    if(p == NULL)
        p = localiza(r->dir, valor);

    return p;
}

bool insereE(Arvore *r, int valorPai, int letra) {
    Arvore *aux = localiza(r, valorPai);

    if(aux == NULL || aux->dir != NULL)
        return false;

    aux->esq = cria(letra);

    return true;
}

bool insereD(Arvore *r, int valorPai, int letra) {
    Arvore *aux = localiza(r, valorPai);


    if (aux == NULL || aux->dir != NULL)
        return false;

    aux->dir = cria(letra);

    return true;
}

// //a insercao deve ser mais generica
// bool adicionaDir(Arvore *r, int pai, int valor) {
//     // USA O LOCALIZA PARA ACHAR O PAI
//     Arvore *p = localiza(r, pai);

//     // SE NAO ACHOU O PAI ENTAO RETORNA FALSO
//     if (p == NULL)
//         return false;

//     // SE SUBARVORE DIREITA ESTA VAZIA ENTAO ADICIONA UM NOVO NO
//     if (p->dir == NULL) {
//         p->dir = cria(valor);
//         return true;
//     }

//     // SE SUBARVORE DIREITA ESTA OCUPADA ENTAO RETORNA FALSO
//     return false;
// }

// bool adicionaEsq(Arvore *r, int pai, int valor) {
//     // USA O LOCALIZA PARA ACHAR O PAI
//     Arvore *p = localiza(r, pai);

//     // SE NAO ACHOU O PAI ENTAO RETORNA FALSO
//     if (p == NULL)
//         return false;

//     // SE SUBARVORE ESQUERDA ESTA VAZIA ENTAO ADICIONA UM NOVO NO
//     if (p->esq == NULL) {
//         p->esq = cria(valor);
//         return true;
//     }
// }

void emOrdem(Arvore *r) {
    if(r != NULL)
        emOrdem(r->esq);
        printf("%d", r->valor);
        emOrdem(r->dir);
}