#N = Quantos tipos de utilitários serão verificados
#N*(X = Quantos utilitários de cada tipo foram usados na partida)
#N*(Y= Quantos utilitários de cada tipo foram acertados na partida)
#Saída = Porcentagem de acerto de cada utilitário

N = int(input())
X = input().split() 
Y = input().split()
S = []
K=0
for i in range(N):
    if int(X[i]) == 0:
        S.append(int(0))
    else:
        K = (int(Y[i]) * 100)/ int(X[i])
        S.append(int(K))
print(*S)