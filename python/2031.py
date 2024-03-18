n = int(input())
for _ in range(n):
    j1, j2 = input().split()
    if j1[1] == 't':
        if j2[1] == 'e' or j2[1] == 'a':
            print("Jogador 1 venceu")
        else:
            print("Aniquilacao mutua")
    elif j1[1] == 'e':
        if j2[1] == 't':
            print("Jogador 2 venceu")
        elif j2[1] == 'a':
            print("Jogador 1 venceu")
        else:
            print("Sem ganhador")
    else:
        if j2[1] == 't' or j2[1] == 'e':
            print("Jogador 2 venceu")
        else:
            print("Ambos venceram")
