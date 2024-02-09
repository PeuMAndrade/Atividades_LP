#X valor que ele junta todos os meses
#Y valor do celta 
#N numero de meses
print('Não finalizado')

m, vdc= input().split()
meses = int(m)
valor_do_carro = float(vdc)
valor_na_conta = 0
momento_da_compra = 0

for i in range(meses):
    valor_na_conta += float(input())

    if momento_da_compra==0 and valor_na_conta >= valor_do_carro:
        momento_da_compra = i+1

if valor_na_conta >= valor_do_carro:
    print(f'{momento_da_compra} {valor_na_conta-valor_do_carro:.2f}')
else:
    print(f'{momento_da_compra} {valor_na_conta:.2f}')

