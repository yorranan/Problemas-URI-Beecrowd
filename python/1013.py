import math

value = input().split(" ")
a, b, c = value

major = (int(a) + int(b) + abs(int(a) - int(b)))/2
result = (int(major) + int(c) + abs(int(major) - int(c)))/2

print("%d eh o maior" %result)