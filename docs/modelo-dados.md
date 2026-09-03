# Modelo de Dados - Entidade Principal
## Entidade
//tipo, pedido por exemplo
<A_DEFINIR>

## Finalidade
//No exemplo do pedido, seria algo como "A entidade representa um pedido rewalizado, permitindo acomopanha seu recebimento, preparo e entrega"
<A_DEFINIR>

## Atributos
//Uma entidade central, 4-6 atributos, tipo cliente, produtos,status,etc.
- id: <descrição>
- ...
## Operações
// pelo menos 4 operações (adicionar uma, talvez atualização de status?)
- cadastrar(...)
- buscar_por_id(...)
- listar(...)
- <quarta operação>

## Regras / invariantes
// De regras talvez todo pedido ter um identificador unico (ID) e possuir um estatus de entrega?
1. <regra 1>
2. <regra 2>

## Operação provavelmente frequente
//Se seguir nessas minhas ideias, a operação frequente seria atualização de status.
<operação> - justificativa: <por quê>
