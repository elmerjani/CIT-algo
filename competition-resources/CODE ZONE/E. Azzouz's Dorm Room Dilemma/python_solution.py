a1, b1 = [int(x) for x in input().split(' ')]
p2 = [int(x) for x in input().split(' ')]
p3 = [int(x) for x in input().split(' ')]
def main():
    for i in range(2):
        for j in range(2):
            if (p2[i] + p3[j] <= a1 and max(p2[1-i],p3[1-j])<=b1) or (p2[i] + p3[j] <= b1 and max(p2[1-i],p3[1-j])<=a1) :
                print("YES")
                return 0
    print("NO")
main()