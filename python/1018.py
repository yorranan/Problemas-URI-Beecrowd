N = int(input())
c100 = N//100
m = N%100
c50 = m//50
m = m%50
c20 = m//20
m = m%20
c10 = m//10
m = m%10
c5 = m//5
m = m%5
c2 = m//2
m = m%2
c1 = m//1
print("%i" %N)
print("%i nota(s) de R$ 100,00" %c100)
print("%i nota(s) de R$ 50,00" %c50)
print("%i nota(s) de R$ 20,00" %c20)
print("%i nota(s) de R$ 10,00" %c10)
print("%i nota(s) de R$ 5,00" %c5)
print("%i nota(s) de R$ 2,00" %c2)
print("%i nota(s) de R$ 1,00" %c1)