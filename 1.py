t = int(input().strip())
for a0 in range(t):

    n = int(input().strip())
    n1 = (n-1) // 3
    n2 = (n-1) // 5
    n3 = (n-1) // 15
    sumn1 = (n1*(3 + 3*n1))//2
    sumn2 = (n2*(5+5*n2))//2
    sumn3 = (n3*(15+15*n3))//2
    finalsum = sumn1 + sumn2 - sumn3
    print(finalsum)
