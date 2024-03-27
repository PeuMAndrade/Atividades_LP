Turmas = int(input())
for _ in range(0,Turmas):
    Alunos = int(input())
    Media = int(input())
    for _ in range(0, Alunos):
        Nota = int(input())
        if Nota >= 1.95*Media:
            print("SS")
        elif Nota >= 1.67*Media and Nota <1.95*Media:
            print("S")
        elif Nota >= 1.00*Media and Nota <1.67*Media:
            print("MS")
        elif Nota >= 0.67*Media and Nota <1.00*Media:
            print("MI")
        else:
            print("I")