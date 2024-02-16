x = int(input())
hr=0
min=0
seg=0
while(x>=3600):
    hr+=1
    x-=3600
while(x>=60):
    min+=1
    x-=60
seg=x

print(f'{hr}h {min}m {seg}s')