#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Nodo {
    char url[100];
    struct Nodo *proximo;
};

typedef struct Nodo Nodo;

int menu(void);
void visitarPagina(Nodo **topo, char url[]);
void voltarPagina(Nodo **topo);
void mostrarHistorico(Nodo *topo);

int main() {
    Nodo *topo = NULL;
    int opcao;
    char url[100];

    do {
        opcao = menu();
        switch (opcao) {
            case 1:
                printf("Digite a URL: ");
                scanf("%s", url);
                visitarPagina(&topo, url);
                printf("Página visitada com sucesso!\n");
                break;
            case 2:
                voltarPagina(&topo);
                break;
            case 3:
                mostrarHistorico(topo);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

int menu(void) {
    int opcao;
    printf("\nMenu:");
    printf("\n1. Visitar Pagina\n");
    printf("\n2. Voltar Pagina\n");
    printf("\n3. Mostrar Historico\n");
    printf("\n0. Sair\n");
    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void visitarPagina(Nodo **topo, char url[]) {
    Nodo *novoNodo = (Nodo*) malloc(sizeof(Nodo));
    if (novoNodo != NULL) {
        strcpy(novoNodo->url, url);
        novoNodo->proximo = *topo;
        *topo = novoNodo;
    } else {
        printf("Erro ao alocar memoria!\n");
    }
}

void voltarPagina(Nodo **topo) {
    if (*topo != NULL) {
        Nodo *nodoRemovido = *topo;
        *topo = (*topo)->proximo;
        free(nodoRemovido);
        printf("Voltou para a pagina anterior!\n");
    } else {
        printf("Nao ha paginas no historico!\n");
    }
}

void mostrarHistorico(Nodo *topo) {
    if (topo == NULL) {
        printf("Historico vazio!\n");
    } else {
        printf("Histórico de Navegação:\n");
        Nodo *atual = topo;
        while (atual != NULL) {
            printf("%s\n", atual->url);
            atual = atual->proximo;
        }
    }
}
