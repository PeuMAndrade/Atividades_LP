K = 0
F = 0
C = 0
def celcius(T):
    if T > -273.15:
        F = (1.8 * T) + 32
        K = T + 273
        return print(f'{F:.2f}','F, ' f'{K:.2f}','K ')
    else:
        return print('Temperatura invalida')

def fahrenheit(T):
    if T > -459.67:
        C = (T-32) * 5/9
        K = (T - 32) * 5/9 + 273
        return print(f'{C:.2f}','C, ' f'{K:.2f}','K ')
    else:
        return print('Temperatura invalida')

def kelvin(T):
    if T > 0:
        C = T - 273
        F = (T - 273) * 1.8 + 32
        return print(f'{C:.2f}','C, ' f'{F:.2f}','F ')
    else:
        return print('Temperatura invalida')

while True:
    E = None
    T = None
    T, E = input().split()
    while T != 'FIM':
        T = float(T)
        if E == 'C':
            celcius(T)
            break
        elif E == 'F':
            fahrenheit(T)
            break
        else:
            kelvin(T)
            break
    if T == 'FIM':
        break
      
        