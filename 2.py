t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    t1 = 1
    t2 = 2
    ls = [2]
    for i in range(3,int(n)+1):
        t3 = t1 + t2
        t1 = t2
        t2 = t3
        
        if t3%2 == 0:
            if t3<=n:
                ls.append(t3)
            else:
                break
    print(sum(ls))
