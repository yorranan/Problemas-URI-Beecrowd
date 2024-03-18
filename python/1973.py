n = int(input())
ovelhas = list(map(int, input().split()))
estrelas = [0]*n

i = 0
while True:
    if i == 0 and ovelhas[i] % 2 == 0:
        estrelas[i] = 1
        if ovelhas[i] > 0:
            ovelhas[i] -= 1
        break
    elif i == n - 1 and ovelhas[i] % 2 == 1:
        estrelas[i] = 1
        if ovelhas[i] > 0:
            ovelhas[i] -= 1
        break
    if ovelhas[i] % 2 == 1:
        estrelas[i] = 1
        ovelhas[i] -= 1
        i += 1
    if ovelhas[i] % 2 == 0:
        estrelas[i] = 1
        if ovelhas[i] > 0:
            ovelhas[i] -= 1
        i -= 1

ovelhas_count = sum(ovelhas)
estrelas_count = sum(estrelas)
print(f"{estrelas_count} {ovelhas_count}")
