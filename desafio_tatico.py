P = int(input()) #Número de jogadores
S = int(input()) #Quantidade de soldados
L = P*S
i=0
k=0
resA=0
resD=0
j=0
ATK = []
DEF = []
while L>i:
    i+=1
    A,D= map(int,input().split())
    ATK.append(A)
    DEF.append(D)

while P>j:
    j+=1
    while S>k:
        resA += ATK[k]
        resD += DEF[k]
        k+=1
    print(f'{resA} {resD}')
    resA = 0
    resD = 0
    S+=(P+1)

#3 Blocos de 4 Linhas
#Bloco = P
#Linhas = S