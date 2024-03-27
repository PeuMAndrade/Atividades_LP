#ENTRADA
#1a linha - Quantidade de caracteres do conjunto = N
#2a linha - N caracteres formando o enigma
#3a linha - caracteres a serem buscados

#SAIDA
#Se as letras a serem buscados estiverem na mesma quantidade dentro do conjunto = Palavra chave encontrada
#Se não = Nenhuma informacao util

N = int(input())
enigma = input()
busca = input()
enigma = list(enigma)
busca = list(busca)
achados = 0
lista = []
T = True
for i in range(len(busca)):
    for j in range(len(enigma)):
        if enigma[j] == busca[i]:
            lista.insert(0,busca[i])
            del enigma[j]
            break
        else:
            pass
if len(busca) == len(lista):
    for i in range(len(enigma)):
        for j in range(len(lista)):
            if enigma[i] == lista[j]:
               T = False
    if T:
        print("Palavra chave encontrada")
    else:
        print("Nenhuma informacao util")
else:
    print("Nenhuma informacao util")          


