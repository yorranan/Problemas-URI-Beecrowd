def mdc(n1, n2):
    if n2 == 0:
        return n1
    return mdc(n2, n1 % n2)


a, b, c, d = map(int, input().split())

dividendo = (a * d) + (b * c)
divisor = b * d
aux = mdc(dividendo, divisor)

print(dividendo // aux, divisor // aux)
