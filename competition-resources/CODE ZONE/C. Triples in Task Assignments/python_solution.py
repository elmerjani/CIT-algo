t = int(input())
for _ in range(t):
    n = int(input())
    l = [int(x) for x in input().split(' ')]
    frequence = (n+1)*[0]
    triples = False
    for i in range(n):
        frequence[l[i]] +=1
        if(frequence[l[i]]>=3):
            print(l[i])
            triples = True
            break
    if not triples :
        print(-1)