MOD=10**9+7

def binpow(a,b):
    ans = 1
    while b > 0 :
        if b%2==1:
            ans*=a
            ans%=MOD
        a*=a
        a%=MOD
        b//=2
    return ans

t = int(input())
for _ in range(t):
    a,b=[int(x) for x in input().split()]
    print(binpow(a,b))