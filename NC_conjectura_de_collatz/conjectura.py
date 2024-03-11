#Se for par (n/2)
#Se for impar (3n+1)
#iterator para saber quantos passsos foram dados
#Numero que recebe o maior N

N = int(input())
while(N!=0):
    Passos = 0
    MaiorN = N
    while(N!=1):
        if N%2==0:
            N = N/2
            Passos += 1
        else:
            N = (3*N) +1
            Passos += 1
        if MaiorN < N:
            MaiorN = int(N)
    print(f'{Passos} {MaiorN}')
    N = int(input())