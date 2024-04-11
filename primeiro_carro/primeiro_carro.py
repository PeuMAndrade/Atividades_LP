dinheiro_do_mes = 0
valor_carro = 0
caixinha = 0
sobra = 0
tempo_contrato=0
mes_comprado=0
caixinha = 0.00
comprado = False

entrada = input()
tempo_contrato, valor_carro = entrada.split()
tempo_contrato = int(tempo_contrato)
valor_carro = float(valor_carro)
for i in range(tempo_contrato):
    dinheiro_do_mes = float(input())
    caixinha += dinheiro_do_mes
    if caixinha >= valor_carro and comprado == False:
        comprado = True
        mes_comprado = i+1
sobra = caixinha-valor_carro
if comprado:
    print(f'{mes_comprado} {sobra:.2f}')

else:
    print(f'{0} {caixinha:.2f}')

