#include <stdio.h>

struct Pedido {
    int id;
    char cliente[50];
    char itens[100];
    char status[30];
    float valor_total;
    char forma_pagamento[30];
};

int main(void) {
    struct Pedido pedidos[3] = {
        {1, "A DEFINIR", "A DEFINIR", "Recebido", 0.0, "A DEFINIR"},
        {2, "A DEFINIR", "A DEFINIR", "Em preparo", 0.0, "A DEFINIR"},
        {3, "A DEFINIR", "A DEFINIR", "Saiu para entrega", 0.0, "A DEFINIR"}
    };

    printf("=== LISTAGEM DE PEDIDOS ===\n");

    for (int i = 0; i < 3; i++) {
        printf(
            "id=%d | cliente=%s | itens=%s | status=%s | valor=%.2f | pagamento=%s\n",
            pedidos[i].id,
            pedidos[i].cliente,
            pedidos[i].itens,
            pedidos[i].status,
            pedidos[i].valor_total,
            pedidos[i].forma_pagamento
        );
    }

    return 0;
}