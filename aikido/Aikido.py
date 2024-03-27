A,H = map(int,input().split())
if A>0:
    if H>=120:
        print("marrom")
    elif 120 > H >= 110:
        print("azul")
    elif 110 > H >= 90:
        print("verde")
    elif 90 > H >= 72:
        print("roxa")
    else:
        print("amarela")
else:
    print("branca")