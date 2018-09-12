#ifndef AB_H_INCLUDED
#define AB_H_INCLUDED

struct notree {
   char valor[50];
   struct notree *esq;
   struct notree *dir;
};

typedef struct notree Arvore;

// Cria um nÛ da ·rvore com o valor especificado. Esq e Dir ficam NULOS.
Arvore *cria(char valor);

// Localiza o nÛ da ·rvore com o valor especificado. Se n„o achar retorna NULO.
Arvore *localiza(Arvore *r, int valor);

// Adiciona um novo nÛ com o valor especificado ‡ direita do nÛ pai.
// Retorna true ou false, se a operaÁ„o foi bem sucedida ou n„o.
bool adicionaDir (Arvore *r, int valorPai, int valor);

// Adiciona um novo nÛ com o valor especificado ‡ esquerda do nÛ pai.
// Retorna true ou false, se a operaÁ„o foi bem sucedida ou n„o.
bool adicionaEsq (Arvore *r, int valorPai, int valor);

// Exclui todos os nÛs da ·rvore, liberando a memÛria.
void libera(Arvore *r);

// Percorre a arvore e imprime seus nÛs usando o percurso em ordem.
void  emOrdem(Arvore *r);

// Percorre a arvore e imprime seus nÛs usando o percurso prÈ-ordem.
void  preOrdem(Arvore *r);

// Percorre a arvore e imprime seus nÛs usando o percurso pÛs-ordem.
void  posOrdem(Arvore *r);

// Soma todos os valores dos nÛs de uma ·rvore.
int soma(Arvore *r);

// Calcula o menor elemento de uma ·rvore.
bool menor(Arvore *r, int *p);

// Calcula a altura de uma ·rvore.
int altura(Arvore *r);

#endif // AB_H_INCLUDED
