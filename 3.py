import math
def primefactor(n):
    for i in range(2,s+1):
        if n%i == 0:
            ls.append(i)
            while(n%i==0):
                n = n//i
             
      
    if n!=1:
        ls.append(n)
    print(max(ls))


for i in range(int(input())):
    ls = []
    n= int(input())
    s = int(math.sqrt(n))
    primefactor(n)
