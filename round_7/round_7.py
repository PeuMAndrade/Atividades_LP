#N = casas e o numero de rounds
#X = A quantidade de casas puladas

#Entrada: Um número de casas N e uma lista com N inteiros representando o tamanho do pulo

#Você sempre começa na primeira casa

#Caso você ande para uma casa menor que 1 é o mesmo que ficar parado na casa 1

N = int(input())
lista = [int(input()) for _ in range(N)]
casa=1
chegou = False
for i in lista:
    casa +=i
    if casa < 1:
        casa = 1
    if casa >= N:
        chegou = True

if chegou:
    print('true')
else:
    print('false')

