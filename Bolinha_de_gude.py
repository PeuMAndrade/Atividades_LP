#x bolinhas
#2x bolinhas

F,B = map(int,input().split())
i=0
res=0
while i<F:
    i = i+1
    res+=B
    B=B*2
print(res)

