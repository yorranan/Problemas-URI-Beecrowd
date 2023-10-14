def calcular(reais, cents):

    notas = [100, 50, 20, 10, 5, 2]
    moedas = [50, 25, 10, 5, 1]
    print("NOTAS:")
    for n in notas:
        x = reais//n
        print("{} nota(s) de R$ {}.00".format(x, n))
        reais -= x*n

    print("MOEDAS:")
    print("{} moeda(s) de R$ 1.00".format(int(reais)))
    for n in moedas:
        x = cents//n
        print("{} moeda(s) de R$ {:.2f}".format(x, n/100))
        cents -= x*n

reais, cents =  map(int, input().split('.'))
calcular(reais, cents)