n, k = map(int, input().split())
h = list(map(int, input().split()))

left = 0
curr = sum(h[:k])  # Sum of the first 'k' elements
best = 1
minimum = curr

for i in range(k, n):
    curr += (h[i] - h[left])
    left += 1
    if curr < minimum:
        best = left + 1
        minimum = curr

print(best)