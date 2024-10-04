import math
 
def binary_search(v, low, high):
    left, right = 0, len(v) - 1
    best = -1
    while left <= right:
        mid = left + (right - left) // 2
        if low <= v[mid] <= high:
            best = v[mid]
            left = mid + 1 
        elif v[mid] < low:
            left = mid + 1
        else:
            right = mid - 1
    return best
 
 
a, b = [int(x) for x in input().split(' ')]
d = math.gcd(a, b)
divisors = []
# If x divides a and b then x divides gcd(a,b)
for i in range(1, int(math.sqrt(d)) + 1):
    if d % i == 0:
        if a % i == 0 and b % i == 0:
            divisors.append(i)
        x = d // i
        if i != x and a % x == 0 and b % x == 0:
            divisors.append(x)
 
divisors.sort()
t = int(input())
for _ in range(t) :
    low, high = [int(x) for x in input().split(' ')]
    print(binary_search(divisors, low, high))