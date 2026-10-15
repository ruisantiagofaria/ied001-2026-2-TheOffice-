/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    
    int valor;
    struct No *proximo;
} No;

No *criar_no(int valor) {
    No *novo = malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    
    novo->valor = valor;
    novo->proximo = NULL;
    return novo;
}

void listar(No *inicio) {
    No *atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
        
    }
    
    printf("\n");
}

void inserir_inicio(No **inicio, int valor) {
    
    No *novo = criar_no(valor);
    novo->proximo = *inicio;
    *inicio = novo;
}

void inserir_final(No **inicio, int valor) {
    
    No *novo = criar_no(valor);
    if (*inicio == NULL) {
        *inicio = novo;
        return;
    }
    
    No *atual = *inicio;
    while (atual->proximo != NULL) {
        
        atual = atual->proximo;
    }
    
    atual->proximo = novo;
}

No *buscar(No *inicio, int valor) {
    
    No *atual = inicio;
    while (atual != NULL) {
        if (atual->valor == valor) {
        
            return atual;
        }
        
        atual = atual->proximo;
    }
    
    return NULL;
}

int remover(No **inicio, int valor) {
    
    No *atual = *inicio;
    No *anterior = NULL;
    while (atual != NULL &&
           atual->valor != valor) {
               
        anterior = atual;
        atual = atual->proximo;
    }
    
    if (atual == NULL) {
        return 0;
    }
    
    if (anterior == NULL) {
        *inicio = atual->proximo;
    } 
    else {
        
        anterior->proximo = atual->proximo;
    }
    
    free(atual);
    return 1;
}

void liberar_lista(No **inicio) {
    
    No *atual = *inicio;
    while (atual != NULL) {
        
        No *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    
    *inicio = NULL;
}

int main() {
    
    No *inicio = NULL;
    inserir_final(&inicio, 10);
    inserir_final(&inicio, 20);
    inserir_final(&inicio, 30);
    inserir_inicio(&inicio, 5);
    printf("Lista:\n");
    listar(inicio);
    printf("\nBuscando 20...\n");
    No *resultado = buscar(inicio, 20);
    if (resultado != NULL) {
        printf("Encontrado: %d\n",
               resultado->valor);
               
    } else {
        
        printf("Nao encontrado.\n");
        
    }
    printf("\nRemovendo 20...\n");
    remover(&inicio, 20);
    listar(inicio);
    printf("\nLiberando lista...\n");
    liberar_lista(&inicio);
    listar(inicio);
    return 0;
}