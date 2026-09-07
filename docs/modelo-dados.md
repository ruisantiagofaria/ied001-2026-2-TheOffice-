# Modelo de Dados - Entidade Principal
## Entidade
Pedido

## Finalidade
Representar um pedido realizado, permitindo acompanhar seu recebimento, preparo e entrega.

## Atributos

- id: identificador único do pedido.
- cliente: cliente responsável pelo pedido. A DEFINIR
- itens: itens/produtos presentes no pedido. A DEFINIR
- status: situação atual do pedido durante seu processamento.
- valor_total: valor total do pedido. A DEFINIR
- forma_pagamento: forma utilizada para realizar o pagamento. A DEFINIR

## Operações

- cadastrar(pedido)
- buscar_por_id(id)
- listar()
- atualizar_status(id, novo_status)

## Regras / invariantes
1. Cada pedido deve possuir um identificador único.
2. Um pedido deve possuir um status que represente sua situação atual no processo de atendimento.

## Operação provavelmente frequente
atualizar_status(id, novo_status) - justificativa: o sistema precisa acompanhar a evolução dos pedidos desde o recebimento até a entrega.
