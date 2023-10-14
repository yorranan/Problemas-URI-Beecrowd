days = int(input())
years = days//365
days = days%365
months = days//30
days = days%30
print("%i ano(s)" %years)
print("%i mes(es)" %months)
print("%i dia(s)" %days)