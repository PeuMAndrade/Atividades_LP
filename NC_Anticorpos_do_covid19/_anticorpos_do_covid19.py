#lista interna = linhas
#lista geral = colunas
L,C = input().split()

for i in range(L):
    lista = input()
    lista = lista.split()

lista_geral = [int(num) for num in lista]

lista = [[],
         [],
         [],
         [],
         [],
         []]