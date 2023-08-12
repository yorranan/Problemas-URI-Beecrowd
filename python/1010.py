line = input().split(" ")
line2 = input().split(" ")
code, qtd, value = line
code, qtd1, value1 = line2
result = int(qtd)*float(value) + int(qtd1)*float(value1)
print("VALOR A PAGAR: R$ %.2f" %result)