entrada = input()
entrada2 = input()
resultado=0

lista1 = [int(x) for x in entrada.split()]
lista2 = [int(x) for x in entrada2.split()]
elementos_combinados = zip(lista1, lista2) #Cria um tupla 

soma_elementos = [x + y for x, y in elementos_combinados] #Cria uma lista com a soma do elementos de uma tupla
for x in soma_elementos:
    print(x, end=' ')
