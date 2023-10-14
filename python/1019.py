seconds = int(input())
minutes = seconds//60
seconds = seconds%60
hours = minutes//60
minutes = minutes%60
print('{}:{}:{}'.format(hours, minutes, seconds))