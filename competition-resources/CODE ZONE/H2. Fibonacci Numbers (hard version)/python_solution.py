MOD = 10**9 + 7

def matrix_multiply(A, B):
    n = len(A)
    result = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD
    return result

def matrix_exponentiate(M, power):
    n = len(M)
    result = [[1 if i == j else 0 for j in range(n)] for i in range(n)]
    base = M

    while power > 0 :
        if power % 2 == 1:
            result = matrix_multiply(result, base)
        base = matrix_multiply(base, base)
        power //= 2

    return result

F0 = [[1, 1], [1, 0]]
n = int(input())
Fn = matrix_exponentiate(F0,n)
print(Fn[0][1]) 