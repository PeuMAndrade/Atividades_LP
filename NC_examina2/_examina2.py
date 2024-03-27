#obs
#Jogador derrota chefe se jogador tiver nivel >= chefe
#Cada chefe morto o jogador ganha 100*nivel_chefe
#evolução de nivel*100
#Execedente de xp 

#Entrada
#1a linha - N = numero de chefes a serem enfrentados
#2a linha - N valores contendo os níveis dos chefes
#3a linha - L = nivel do jogador
#4a linha - X = qntd de xp

#Saida
#Caso o jogador não tenha nível para enfrentar os chefes = "Perigo: dificuldade alta"
#Caso o jogador tenha nível para enfrentar os chefes = "Voce tem nivel suficiente"

qntd_chefes = int(input())
niveis = input()
niveis = niveis.split()
niveis_chefes = [int(num) for num in niveis]
nivel_atual, xp_atual = map(int,input().split())
iterator = qntd_chefes

while(xp_atual >= (nivel_atual+1)*100):
    xp_atual -= (nivel_atual+1)*100
    nivel_atual += 1
    
for i in range(qntd_chefes):
    if nivel_atual >= niveis_chefes[i]:
        xp_atual += niveis_chefes[i]*100
        iterator -=1
        while(xp_atual >= (nivel_atual+1)*100):
            xp_atual -= (nivel_atual+1)*100
            nivel_atual += 1
        if iterator == 0:
            print('Voce tem nivel suficiente')
    else:
        print("Perigo: dificuldade alta")
print(f'{nivel_atual}')        


