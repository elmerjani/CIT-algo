MAXN = 2000
adj = [[] for _ in range(MAXN + 1)]
 
def depth(start):
    stack = [(start, 1)]  
    max_depth = 0
    
    while stack:
        node, curr_depth = stack.pop()
        max_depth = max(max_depth, curr_depth)
        for v in adj[node]:
            stack.append((v, curr_depth + 1))
    
    return max_depth
 
n = int(input())
boss = [0] * (n + 1)

for i in range(1, n + 1):
    boss[i] = int(input())
    if boss[i] != -1:
        adj[boss[i]].append(i)

max_depth = 0
for i in range(1, n + 1):
    if boss[i] == -1:
        max_depth = max(max_depth, depth(i))

print(max_depth)
 
