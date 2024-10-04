MOD = 10**9 + 7
n = int(input())
if n <= 1 :
    print(n)
else :
    f0, f1 = 0, 1
    for _ in range(2,n+1):
        tmp = f0 + f1
        f0 = f1
        f1 = tmp
        f0 %= MOD
        f1 %= MOD
    
    print(f1)