def buscar_por_id(pedidos, id_procurado):
    for pedido in pedidos:
        if pedido["id"] == id_procurado:
            return pedido
    return None


pedidos = [
    {
        "id": 1,
        "cliente": "A DEFINIR",
        "itens": "A DEFINIR",
        "status": "Recebido",
        "valor_total": 0.0,
        "forma_pagamento": "A DEFINIR"
    },
    {
        "id": 2,
        "cliente": "A DEFINIR",
        "itens": "A DEFINIR",
        "status": "Em preparo",
        "valor_total": 0.0,
        "forma_pagamento": "A DEFINIR"
    },
    {
        "id": 3,
        "cliente": "A DEFINIR",
        "itens": "A DEFINIR",
        "status": "Saiu para entrega",
        "valor_total": 0.0,
        "forma_pagamento": "A DEFINIR"
    }
]


print("=== LISTAGEM DE PEDIDOS ===")

for pedido in pedidos:
    print(pedido)


print("=== BUSCA POR ID ===")

resultado = buscar_por_id(pedidos, 2)

print(resultado if resultado else "Pedido não encontrado")