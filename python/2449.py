n, tamanho = map(int, input().split())
vetor = list(map(int, input().split()))
resposta = 0

for i in range(n):
    diferenca = tamanho - vetor[i]
    resposta += abs(diferenca)
    if i + 1 < n:
        vetor[i + 1] += diferenca

print(resposta)
