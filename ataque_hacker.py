lista_de_divisores = []
def primo(X):
    if X < 2:
        return False
    for i in range(2,int(X*0.5)+1):
        if X % i == 0:
            lista_de_divisores.append(i)

i,F = map(int,input().split())
k=0
while i<=F:
    primo(i)
    if not lista_de_divisores:
        k+=1
    lista_de_divisores.clear()
    i+=1
print(k)
