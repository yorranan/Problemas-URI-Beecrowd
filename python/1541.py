import math
entra = 0
while True:
    entrada = input().split()
    if entrada == ['0']:
        break
    a, b, c = entrada
    a, b, c = int(a), int(b), int(c)
    aux = math.sqrt((a*b*100)/c)
    aux = int
    print(aux)
