t = int(input())
for _ in range(t):
    x1, y1, x2, y2, x3, y3 = [int(x) for x in input().split(' ')]
    a = x3-x1
    b = y2-y1
    c = x2-x1
    d = y3-y1
    ans = a*b-c*d
    if ans == 0:
        print("TOUCH")
    elif ans > 0:
        print("RIGHT")
    else :
        print("LEFT")