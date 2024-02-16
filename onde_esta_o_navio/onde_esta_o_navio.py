X,Y = map(int,input().split())
if 0 < X < 100 and 0 < Y < 100:
    if X <71 or Y < 71:
        print("Coordenada valida e o navio esta perto")
    else:
        print("Coordenada valida e o navio esta longe")
else:
    print("Coordenada invalida")