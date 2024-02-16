T,D = map(int,input().split())
V,P = map(int,input().split())
res = (int(T/D)*P) +(V*T)
print(int(res))