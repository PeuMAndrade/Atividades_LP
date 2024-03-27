n = int(input())
lista = []
i=0
while i < n:
    i+=1
    entrada = int(input())
    lista.append(entrada)
contagem = lista.count(1)
res = (contagem*100)/n
if res<30:
    print("Regiao segura")
    
elif res>=30 and res<=50:
    print("Regiao em estado de alerta")
    
else:
    print("Regiao com alto indice de perda de biodiversidade")
    