a, b, c = [float(i) for i in input().split(' ')]
print("TRIANGULO: {:.3f}".format((a*c)/2))
print("CIRCULO: {:.3f}".format(3.14159*c**2))
print("TRAPEZIO: {:.3f}".format(((a+b)*c)/2))
print("QUADRADO: {:.3f}".format(b**2))
print("RETANGULO: {:.3f}".format(a*b))