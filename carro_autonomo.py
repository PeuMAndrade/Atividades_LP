def modulo(x1,y1,x2,y2):
    d_c_p = (x1**2 + y1**2)**0.5
    d_p_b = ((x2-x1)**2 + (y2-y1)**2)**0.5
    if d_c_p > 7 and d_p_b > 5:
        print('Nao passou no teste')
    elif d_c_p > 7 and d_p_b <=5:
        print('Pedestre nao identificado')
    elif d_c_p <= 7 and d_p_b >5:
        print('Buraco nao identificado')
    else:
        print('Aprovado no teste')

x1,y1,x2,y2 = map(int,input().split())
modulo(x1,y1,x2,y2)