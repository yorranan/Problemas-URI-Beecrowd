def calc(a):
    global tab
    if tab[a+1] == 0:
        tab[a] += 1
    else:
        tab[a+1] -= 1
        tab[a] += 1
    
N = input()
entrada = list(map(int, input().split()))
tab = [0 for x in range(0, max(entrada))]
for x in entrada:
    calc(x)
print(sum(tab))