#Detectar a infecção
#Detectar o número de dias da infecção
# if x>=30 = imune
# if 7<=x<=30 = observação
# if x<7 = isolada

#S = infectada
#N = não infectada

entrada = input()
estado = entrada[0]
tempo = int(entrada[1:])
if estado=="S":
    if tempo>=30:
        print("Imune! Siga para um local seguro")
    elif 7 <= tempo <= 30:
        print("Acesso negado! Fique em observacao")
    else:
        print("Acesso negado! Isolamento urgente")
else:
    print("Acesso permitido!")