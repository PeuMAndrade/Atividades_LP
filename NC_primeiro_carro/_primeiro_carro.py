meses, Y = map(float,input().split())
X = [float(input()) for _ in range(int(meses))]

caixa = 0.00
mes = 1
comprou = False

for valor in X:
    caixa += valor
    if caixa >=Y:
        comprou = True
    else:
        mes+=1

if comprou:
    print(f'{mes} {caixa-Y:.2f}')
else:
    print(f'0 {caixa:.2f}')