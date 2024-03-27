# Vara de Bambu 500
# Vara de Vidro 1800
# Vara de Iridio 7500
# Paciencia Firmino!

entrada1 = int(input())
entrada2 = int(input())
res = entrada1 * entrada2

if 500 > res:
    print("Paciencia Firmino!")
elif 500 <= res < 1800:
    print("Vara de Bambu")
elif 1800 <= res < 7500:
    print("Vara de Fibra de Vidro")
else:
    print("Vara de Iridio")